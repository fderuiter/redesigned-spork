#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variable_list.h"



static variable_list_t *variable_list_create_internal(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    variable_list_t *variable_list_local_var = malloc(sizeof(variable_list_t));
    if (!variable_list_local_var) {
        return NULL;
    }
    variable_list_local_var->metadata = metadata;
    variable_list_local_var->pagination = pagination;
    variable_list_local_var->data = data;

    variable_list_local_var->_library_owned = 1;
    return variable_list_local_var;
}

__attribute__((deprecated)) variable_list_t *variable_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    return variable_list_create_internal (
        metadata,
        pagination,
        data
        );
}

void variable_list_free(variable_list_t *variable_list) {
    if(NULL == variable_list){
        return ;
    }
    if(variable_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "variable_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (variable_list->metadata) {
        metadata_free(variable_list->metadata);
        variable_list->metadata = NULL;
    }
    if (variable_list->pagination) {
        pagination_free(variable_list->pagination);
        variable_list->pagination = NULL;
    }
    if (variable_list->data) {
        list_ForEach(listEntry, variable_list->data) {
            variable_free(listEntry->data);
        }
        list_freeList(variable_list->data);
        variable_list->data = NULL;
    }
    free(variable_list);
}

cJSON *variable_list_convertToJSON(variable_list_t *variable_list) {
    cJSON *item = cJSON_CreateObject();

    // variable_list->metadata
    if(variable_list->metadata) {
    cJSON *metadata_local_JSON = metadata_convertToJSON(variable_list->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // variable_list->pagination
    if(variable_list->pagination) {
    cJSON *pagination_local_JSON = pagination_convertToJSON(variable_list->pagination);
    if(pagination_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // variable_list->data
    if(variable_list->data) {
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (variable_list->data) {
    list_ForEach(dataListEntry, variable_list->data) {
    cJSON *itemLocal = variable_convertToJSON(dataListEntry->data);
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

variable_list_t *variable_list_parseFromJSON(cJSON *variable_listJSON){

    variable_list_t *variable_list_local_var = NULL;

    // define the local variable for variable_list->metadata
    metadata_t *metadata_local_nonprim = NULL;

    // define the local variable for variable_list->pagination
    pagination_t *pagination_local_nonprim = NULL;

    // define the local list for variable_list->data
    list_t *dataList = NULL;

    // variable_list->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(variable_listJSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = metadata_parseFromJSON(metadata); //nonprimitive
    }

    // variable_list->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(variable_listJSON, "pagination");
    if (cJSON_IsNull(pagination)) {
        pagination = NULL;
    }
    if (pagination) { 
    pagination_local_nonprim = pagination_parseFromJSON(pagination); //nonprimitive
    }

    // variable_list->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(variable_listJSON, "data");
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
        variable_t *dataItem = variable_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }
    }


    variable_list_local_var = variable_list_create_internal (
        metadata ? metadata_local_nonprim : NULL,
        pagination ? pagination_local_nonprim : NULL,
        data ? dataList : NULL
        );

    return variable_list_local_var;
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
            variable_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
