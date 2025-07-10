#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "components_schemas_metadata_error.h"



static components_schemas_metadata_error_t *components_schemas_metadata_error_create_internal(
    char *message
    ) {
    components_schemas_metadata_error_t *components_schemas_metadata_error_local_var = malloc(sizeof(components_schemas_metadata_error_t));
    if (!components_schemas_metadata_error_local_var) {
        return NULL;
    }
    components_schemas_metadata_error_local_var->message = message;

    components_schemas_metadata_error_local_var->_library_owned = 1;
    return components_schemas_metadata_error_local_var;
}

__attribute__((deprecated)) components_schemas_metadata_error_t *components_schemas_metadata_error_create(
    char *message
    ) {
    return components_schemas_metadata_error_create_internal (
        message
        );
}

void components_schemas_metadata_error_free(components_schemas_metadata_error_t *components_schemas_metadata_error) {
    if(NULL == components_schemas_metadata_error){
        return ;
    }
    if(components_schemas_metadata_error->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "components_schemas_metadata_error_free");
        return ;
    }
    listEntry_t *listEntry;
    if (components_schemas_metadata_error->message) {
        free(components_schemas_metadata_error->message);
        components_schemas_metadata_error->message = NULL;
    }
    free(components_schemas_metadata_error);
}

cJSON *components_schemas_metadata_error_convertToJSON(components_schemas_metadata_error_t *components_schemas_metadata_error) {
    cJSON *item = cJSON_CreateObject();

    // components_schemas_metadata_error->message
    if(components_schemas_metadata_error->message) {
    if(cJSON_AddStringToObject(item, "message", components_schemas_metadata_error->message) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

components_schemas_metadata_error_t *components_schemas_metadata_error_parseFromJSON(cJSON *components_schemas_metadata_errorJSON){

    components_schemas_metadata_error_t *components_schemas_metadata_error_local_var = NULL;

    // components_schemas_metadata_error->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(components_schemas_metadata_errorJSON, "message");
    if (cJSON_IsNull(message)) {
        message = NULL;
    }
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }


    components_schemas_metadata_error_local_var = components_schemas_metadata_error_create_internal (
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL
        );

    return components_schemas_metadata_error_local_var;
end:
    return NULL;

}
