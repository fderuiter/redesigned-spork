#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "query_list.h"



static query_list_t *query_list_create_internal(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    query_list_t *query_list_local_var = malloc(sizeof(query_list_t));
    if (!query_list_local_var) {
        return NULL;
    }
    query_list_local_var->metadata = metadata;
    query_list_local_var->pagination = pagination;
    query_list_local_var->data = data;

    query_list_local_var->_library_owned = 1;
    return query_list_local_var;
}

__attribute__((deprecated)) query_list_t *query_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    return query_list_create_internal (
        metadata,
        pagination,
        data
        );
}

void query_list_free(query_list_t *query_list) {
    if(NULL == query_list){
        return ;
    }
    if(query_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "query_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (query_list->metadata) {
        metadata_free(query_list->metadata);
        query_list->metadata = NULL;
    }
    if (query_list->pagination) {
        pagination_free(query_list->pagination);
        query_list->pagination = NULL;
    }
    if (query_list->data) {
        list_ForEach(listEntry, query_list->data) {
            query_free(listEntry->data);
        }
        list_freeList(query_list->data);
        query_list->data = NULL;
    }
    free(query_list);
}

cJSON *query_list_convertToJSON(query_list_t *query_list) {
    cJSON *item = cJSON_CreateObject();

    // query_list->metadata
    if(query_list->metadata) {
    cJSON *metadata_local_JSON = metadata_convertToJSON(query_list->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // query_list->pagination
    if(query_list->pagination) {
    cJSON *pagination_local_JSON = pagination_convertToJSON(query_list->pagination);
    if(pagination_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // query_list->data
    if(query_list->data) {
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (query_list->data) {
    list_ForEach(dataListEntry, query_list->data) {
    cJSON *itemLocal = query_convertToJSON(dataListEntry->data);
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

query_list_t *query_list_parseFromJSON(cJSON *query_listJSON){

    query_list_t *query_list_local_var = NULL;

    // define the local variable for query_list->metadata
    metadata_t *metadata_local_nonprim = NULL;

    // define the local variable for query_list->pagination
    pagination_t *pagination_local_nonprim = NULL;

    // define the local list for query_list->data
    list_t *dataList = NULL;

    // query_list->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(query_listJSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = metadata_parseFromJSON(metadata); //nonprimitive
    }

    // query_list->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(query_listJSON, "pagination");
    if (cJSON_IsNull(pagination)) {
        pagination = NULL;
    }
    if (pagination) { 
    pagination_local_nonprim = pagination_parseFromJSON(pagination); //nonprimitive
    }

    // query_list->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(query_listJSON, "data");
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
        query_t *dataItem = query_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }
    }


    query_list_local_var = query_list_create_internal (
        metadata ? metadata_local_nonprim : NULL,
        pagination ? pagination_local_nonprim : NULL,
        data ? dataList : NULL
        );

    return query_list_local_var;
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
            query_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
