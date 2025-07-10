#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "interval_list.h"



static interval_list_t *interval_list_create_internal(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    interval_list_t *interval_list_local_var = malloc(sizeof(interval_list_t));
    if (!interval_list_local_var) {
        return NULL;
    }
    interval_list_local_var->metadata = metadata;
    interval_list_local_var->pagination = pagination;
    interval_list_local_var->data = data;

    interval_list_local_var->_library_owned = 1;
    return interval_list_local_var;
}

__attribute__((deprecated)) interval_list_t *interval_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    return interval_list_create_internal (
        metadata,
        pagination,
        data
        );
}

void interval_list_free(interval_list_t *interval_list) {
    if(NULL == interval_list){
        return ;
    }
    if(interval_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "interval_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (interval_list->metadata) {
        metadata_free(interval_list->metadata);
        interval_list->metadata = NULL;
    }
    if (interval_list->pagination) {
        pagination_free(interval_list->pagination);
        interval_list->pagination = NULL;
    }
    if (interval_list->data) {
        list_ForEach(listEntry, interval_list->data) {
            interval_free(listEntry->data);
        }
        list_freeList(interval_list->data);
        interval_list->data = NULL;
    }
    free(interval_list);
}

cJSON *interval_list_convertToJSON(interval_list_t *interval_list) {
    cJSON *item = cJSON_CreateObject();

    // interval_list->metadata
    if(interval_list->metadata) {
    cJSON *metadata_local_JSON = metadata_convertToJSON(interval_list->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // interval_list->pagination
    if(interval_list->pagination) {
    cJSON *pagination_local_JSON = pagination_convertToJSON(interval_list->pagination);
    if(pagination_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // interval_list->data
    if(interval_list->data) {
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (interval_list->data) {
    list_ForEach(dataListEntry, interval_list->data) {
    cJSON *itemLocal = interval_convertToJSON(dataListEntry->data);
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

interval_list_t *interval_list_parseFromJSON(cJSON *interval_listJSON){

    interval_list_t *interval_list_local_var = NULL;

    // define the local variable for interval_list->metadata
    metadata_t *metadata_local_nonprim = NULL;

    // define the local variable for interval_list->pagination
    pagination_t *pagination_local_nonprim = NULL;

    // define the local list for interval_list->data
    list_t *dataList = NULL;

    // interval_list->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(interval_listJSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = metadata_parseFromJSON(metadata); //nonprimitive
    }

    // interval_list->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(interval_listJSON, "pagination");
    if (cJSON_IsNull(pagination)) {
        pagination = NULL;
    }
    if (pagination) { 
    pagination_local_nonprim = pagination_parseFromJSON(pagination); //nonprimitive
    }

    // interval_list->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(interval_listJSON, "data");
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
        interval_t *dataItem = interval_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }
    }


    interval_list_local_var = interval_list_create_internal (
        metadata ? metadata_local_nonprim : NULL,
        pagination ? pagination_local_nonprim : NULL,
        data ? dataList : NULL
        );

    return interval_list_local_var;
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
            interval_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
