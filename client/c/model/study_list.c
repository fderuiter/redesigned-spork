#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "study_list.h"



static study_list_t *study_list_create_internal(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    study_list_t *study_list_local_var = malloc(sizeof(study_list_t));
    if (!study_list_local_var) {
        return NULL;
    }
    study_list_local_var->metadata = metadata;
    study_list_local_var->pagination = pagination;
    study_list_local_var->data = data;

    study_list_local_var->_library_owned = 1;
    return study_list_local_var;
}

__attribute__((deprecated)) study_list_t *study_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    return study_list_create_internal (
        metadata,
        pagination,
        data
        );
}

void study_list_free(study_list_t *study_list) {
    if(NULL == study_list){
        return ;
    }
    if(study_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "study_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (study_list->metadata) {
        metadata_free(study_list->metadata);
        study_list->metadata = NULL;
    }
    if (study_list->pagination) {
        pagination_free(study_list->pagination);
        study_list->pagination = NULL;
    }
    if (study_list->data) {
        list_ForEach(listEntry, study_list->data) {
            study_free(listEntry->data);
        }
        list_freeList(study_list->data);
        study_list->data = NULL;
    }
    free(study_list);
}

cJSON *study_list_convertToJSON(study_list_t *study_list) {
    cJSON *item = cJSON_CreateObject();

    // study_list->metadata
    if(study_list->metadata) {
    cJSON *metadata_local_JSON = metadata_convertToJSON(study_list->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // study_list->pagination
    if(study_list->pagination) {
    cJSON *pagination_local_JSON = pagination_convertToJSON(study_list->pagination);
    if(pagination_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // study_list->data
    if(study_list->data) {
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (study_list->data) {
    list_ForEach(dataListEntry, study_list->data) {
    cJSON *itemLocal = study_convertToJSON(dataListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(data, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

study_list_t *study_list_parseFromJSON(cJSON *study_listJSON){

    study_list_t *study_list_local_var = NULL;

    // define the local variable for study_list->metadata
    metadata_t *metadata_local_nonprim = NULL;

    // define the local variable for study_list->pagination
    pagination_t *pagination_local_nonprim = NULL;

    // define the local list for study_list->data
    list_t *dataList = NULL;

    // study_list->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(study_listJSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = metadata_parseFromJSON(metadata); //nonprimitive
    }

    // study_list->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(study_listJSON, "pagination");
    if (cJSON_IsNull(pagination)) {
        pagination = NULL;
    }
    if (pagination) { 
    pagination_local_nonprim = pagination_parseFromJSON(pagination); //nonprimitive
    }

    // study_list->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(study_listJSON, "data");
    if (cJSON_IsNull(data)) {
        data = NULL;
    }
    if (data) { 
    cJSON *data_local_nonprimitive = NULL;
    if(!cJSON_IsArray(data)){
        goto end; //nonprimitive container
    }

    dataList = list_createList();

    cJSON_ArrayForEach(data_local_nonprimitive,data )
    {
        if(!cJSON_IsObject(data_local_nonprimitive)){
            goto end;
        }
        study_t *dataItem = study_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }
    }


    study_list_local_var = study_list_create_internal (
        metadata ? metadata_local_nonprim : NULL,
        pagination ? pagination_local_nonprim : NULL,
        data ? dataList : NULL
        );

    return study_list_local_var;
end:
    if (metadata_local_nonprim) {
        metadata_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (pagination_local_nonprim) {
        pagination_free(pagination_local_nonprim);
        pagination_local_nonprim = NULL;
    }
    if (dataList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, dataList) {
            study_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
