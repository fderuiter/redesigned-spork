#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "record_list.h"



static record_list_t *record_list_create_internal(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    record_list_t *record_list_local_var = malloc(sizeof(record_list_t));
    if (!record_list_local_var) {
        return NULL;
    }
    record_list_local_var->metadata = metadata;
    record_list_local_var->pagination = pagination;
    record_list_local_var->data = data;

    record_list_local_var->_library_owned = 1;
    return record_list_local_var;
}

__attribute__((deprecated)) record_list_t *record_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    return record_list_create_internal (
        metadata,
        pagination,
        data
        );
}

void record_list_free(record_list_t *record_list) {
    if(NULL == record_list){
        return ;
    }
    if(record_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "record_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (record_list->metadata) {
        metadata_free(record_list->metadata);
        record_list->metadata = NULL;
    }
    if (record_list->pagination) {
        pagination_free(record_list->pagination);
        record_list->pagination = NULL;
    }
    if (record_list->data) {
        list_ForEach(listEntry, record_list->data) {
            record_free(listEntry->data);
        }
        list_freeList(record_list->data);
        record_list->data = NULL;
    }
    free(record_list);
}

cJSON *record_list_convertToJSON(record_list_t *record_list) {
    cJSON *item = cJSON_CreateObject();

    // record_list->metadata
    if(record_list->metadata) {
    cJSON *metadata_local_JSON = metadata_convertToJSON(record_list->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // record_list->pagination
    if(record_list->pagination) {
    cJSON *pagination_local_JSON = pagination_convertToJSON(record_list->pagination);
    if(pagination_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // record_list->data
    if(record_list->data) {
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (record_list->data) {
    list_ForEach(dataListEntry, record_list->data) {
    cJSON *itemLocal = record_convertToJSON(dataListEntry->data);
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

record_list_t *record_list_parseFromJSON(cJSON *record_listJSON){

    record_list_t *record_list_local_var = NULL;

    // define the local variable for record_list->metadata
    metadata_t *metadata_local_nonprim = NULL;

    // define the local variable for record_list->pagination
    pagination_t *pagination_local_nonprim = NULL;

    // define the local list for record_list->data
    list_t *dataList = NULL;

    // record_list->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(record_listJSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = metadata_parseFromJSON(metadata); //nonprimitive
    }

    // record_list->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(record_listJSON, "pagination");
    if (cJSON_IsNull(pagination)) {
        pagination = NULL;
    }
    if (pagination) { 
    pagination_local_nonprim = pagination_parseFromJSON(pagination); //nonprimitive
    }

    // record_list->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(record_listJSON, "data");
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
        record_t *dataItem = record_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }
    }


    record_list_local_var = record_list_create_internal (
        metadata ? metadata_local_nonprim : NULL,
        pagination ? pagination_local_nonprim : NULL,
        data ? dataList : NULL
        );

    return record_list_local_var;
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
            record_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
