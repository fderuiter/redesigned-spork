#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sort.h"


char* sort_direction_ToString(mednet_edc_api_sort_DIRECTION_e direction) {
    char* directionArray[] =  { "NULL", "ASC", "DESC" };
    return directionArray[direction];
}

mednet_edc_api_sort_DIRECTION_e sort_direction_FromString(char* direction){
    int stringToReturn = 0;
    char *directionArray[] =  { "NULL", "ASC", "DESC" };
    size_t sizeofArray = sizeof(directionArray) / sizeof(directionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(direction, directionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static sort_t *sort_create_internal(
    char *property,
    mednet_edc_api_sort_DIRECTION_e direction
    ) {
    sort_t *sort_local_var = malloc(sizeof(sort_t));
    if (!sort_local_var) {
        return NULL;
    }
    sort_local_var->property = property;
    sort_local_var->direction = direction;

    sort_local_var->_library_owned = 1;
    return sort_local_var;
}

__attribute__((deprecated)) sort_t *sort_create(
    char *property,
    mednet_edc_api_sort_DIRECTION_e direction
    ) {
    return sort_create_internal (
        property,
        direction
        );
}

void sort_free(sort_t *sort) {
    if(NULL == sort){
        return ;
    }
    if(sort->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "sort_free");
        return ;
    }
    listEntry_t *listEntry;
    if (sort->property) {
        free(sort->property);
        sort->property = NULL;
    }
    free(sort);
}

cJSON *sort_convertToJSON(sort_t *sort) {
    cJSON *item = cJSON_CreateObject();

    // sort->property
    if(sort->property) {
    if(cJSON_AddStringToObject(item, "property", sort->property) == NULL) {
    goto fail; //String
    }
    }


    // sort->direction
    if(sort->direction != mednet_edc_api_sort_DIRECTION_NULL) {
    if(cJSON_AddStringToObject(item, "direction", sort_direction_ToString(sort->direction)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

sort_t *sort_parseFromJSON(cJSON *sortJSON){

    sort_t *sort_local_var = NULL;

    // sort->property
    cJSON *property = cJSON_GetObjectItemCaseSensitive(sortJSON, "property");
    if (cJSON_IsNull(property)) {
        property = NULL;
    }
    if (property) { 
    if(!cJSON_IsString(property) && !cJSON_IsNull(property))
    {
    goto end; //String
    }
    }

    // sort->direction
    cJSON *direction = cJSON_GetObjectItemCaseSensitive(sortJSON, "direction");
    if (cJSON_IsNull(direction)) {
        direction = NULL;
    }
    mednet_edc_api_sort_DIRECTION_e directionVariable;
    if (direction) { 
    if(!cJSON_IsString(direction))
    {
    goto end; //Enum
    }
    directionVariable = sort_direction_FromString(direction->valuestring);
    }


    sort_local_var = sort_create_internal (
        property && !cJSON_IsNull(property) ? strdup(property->valuestring) : NULL,
        direction ? directionVariable : mednet_edc_api_sort_DIRECTION_NULL
        );

    return sort_local_var;
end:
    return NULL;

}
