#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "metadata.h"



static metadata_t *metadata_create_internal(
    char *status,
    char *method,
    char *path,
    char *timestamp,
    components_schemas_metadata_error_t *error
    ) {
    metadata_t *metadata_local_var = malloc(sizeof(metadata_t));
    if (!metadata_local_var) {
        return NULL;
    }
    metadata_local_var->status = status;
    metadata_local_var->method = method;
    metadata_local_var->path = path;
    metadata_local_var->timestamp = timestamp;
    metadata_local_var->error = error;

    metadata_local_var->_library_owned = 1;
    return metadata_local_var;
}

__attribute__((deprecated)) metadata_t *metadata_create(
    char *status,
    char *method,
    char *path,
    char *timestamp,
    components_schemas_metadata_error_t *error
    ) {
    return metadata_create_internal (
        status,
        method,
        path,
        timestamp,
        error
        );
}

void metadata_free(metadata_t *metadata) {
    if(NULL == metadata){
        return ;
    }
    if(metadata->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "metadata_free");
        return ;
    }
    listEntry_t *listEntry;
    if (metadata->status) {
        free(metadata->status);
        metadata->status = NULL;
    }
    if (metadata->method) {
        free(metadata->method);
        metadata->method = NULL;
    }
    if (metadata->path) {
        free(metadata->path);
        metadata->path = NULL;
    }
    if (metadata->timestamp) {
        free(metadata->timestamp);
        metadata->timestamp = NULL;
    }
    if (metadata->error) {
        components_schemas_metadata_error_free(metadata->error);
        metadata->error = NULL;
    }
    free(metadata);
}

cJSON *metadata_convertToJSON(metadata_t *metadata) {
    cJSON *item = cJSON_CreateObject();

    // metadata->status
    if(metadata->status) {
    if(cJSON_AddStringToObject(item, "status", metadata->status) == NULL) {
    goto fail; //String
    }
    }


    // metadata->method
    if(metadata->method) {
    if(cJSON_AddStringToObject(item, "method", metadata->method) == NULL) {
    goto fail; //String
    }
    }


    // metadata->path
    if(metadata->path) {
    if(cJSON_AddStringToObject(item, "path", metadata->path) == NULL) {
    goto fail; //String
    }
    }


    // metadata->timestamp
    if(metadata->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", metadata->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // metadata->error
    if(metadata->error) {
    cJSON *error_local_JSON = components_schemas_metadata_error_convertToJSON(metadata->error);
    if(error_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "error", error_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

metadata_t *metadata_parseFromJSON(cJSON *metadataJSON){

    metadata_t *metadata_local_var = NULL;

    // define the local variable for metadata->error
    components_schemas_metadata_error_t *error_local_nonprim = NULL;

    // metadata->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(metadataJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // metadata->method
    cJSON *method = cJSON_GetObjectItemCaseSensitive(metadataJSON, "method");
    if (cJSON_IsNull(method)) {
        method = NULL;
    }
    if (method) { 
    if(!cJSON_IsString(method) && !cJSON_IsNull(method))
    {
    goto end; //String
    }
    }

    // metadata->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(metadataJSON, "path");
    if (cJSON_IsNull(path)) {
        path = NULL;
    }
    if (path) { 
    if(!cJSON_IsString(path) && !cJSON_IsNull(path))
    {
    goto end; //String
    }
    }

    // metadata->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(metadataJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // metadata->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(metadataJSON, "error");
    if (cJSON_IsNull(error)) {
        error = NULL;
    }
    if (error) { 
    error_local_nonprim = components_schemas_metadata_error_parseFromJSON(error); //custom
    }


    metadata_local_var = metadata_create_internal (
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        method && !cJSON_IsNull(method) ? strdup(method->valuestring) : NULL,
        path && !cJSON_IsNull(path) ? strdup(path->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        error ? error_local_nonprim : NULL
        );

    return metadata_local_var;
end:
    if (error_local_nonprim) {
        components_schemas_metadata_error_free(error_local_nonprim);
        error_local_nonprim = NULL;
    }
    return NULL;

}
