#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "coding_list.h"



static coding_list_t *coding_list_create_internal(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    coding_list_t *coding_list_local_var = malloc(sizeof(coding_list_t));
    if (!coding_list_local_var) {
        return NULL;
    }
    coding_list_local_var->metadata = metadata;
    coding_list_local_var->pagination = pagination;
    coding_list_local_var->data = data;

    coding_list_local_var->_library_owned = 1;
    return coding_list_local_var;
}

__attribute__((deprecated)) coding_list_t *coding_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    return coding_list_create_internal (
        metadata,
        pagination,
        data
        );
}

void coding_list_free(coding_list_t *coding_list) {
    if(NULL == coding_list){
        return ;
    }
    if(coding_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "coding_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (coding_list->metadata) {
        metadata_free(coding_list->metadata);
        coding_list->metadata = NULL;
    }
    if (coding_list->pagination) {
        pagination_free(coding_list->pagination);
        coding_list->pagination = NULL;
    }
    if (coding_list->data) {
        list_ForEach(listEntry, coding_list->data) {
            coding_free(listEntry->data);
        }
        list_freeList(coding_list->data);
        coding_list->data = NULL;
    }
    free(coding_list);
}

cJSON *coding_list_convertToJSON(coding_list_t *coding_list) {
    cJSON *item = cJSON_CreateObject();

    // coding_list->metadata
    if(coding_list->metadata) {
    cJSON *metadata_local_JSON = metadata_convertToJSON(coding_list->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // coding_list->pagination
    if(coding_list->pagination) {
    cJSON *pagination_local_JSON = pagination_convertToJSON(coding_list->pagination);
    if(pagination_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // coding_list->data
    if(coding_list->data) {
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (coding_list->data) {
    list_ForEach(dataListEntry, coding_list->data) {
    cJSON *itemLocal = coding_convertToJSON(dataListEntry->data);
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

coding_list_t *coding_list_parseFromJSON(cJSON *coding_listJSON){

    coding_list_t *coding_list_local_var = NULL;

    // define the local variable for coding_list->metadata
    metadata_t *metadata_local_nonprim = NULL;

    // define the local variable for coding_list->pagination
    pagination_t *pagination_local_nonprim = NULL;

    // define the local list for coding_list->data
    list_t *dataList = NULL;

    // coding_list->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(coding_listJSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = metadata_parseFromJSON(metadata); //nonprimitive
    }

    // coding_list->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(coding_listJSON, "pagination");
    if (cJSON_IsNull(pagination)) {
        pagination = NULL;
    }
    if (pagination) { 
    pagination_local_nonprim = pagination_parseFromJSON(pagination); //nonprimitive
    }

    // coding_list->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(coding_listJSON, "data");
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
        coding_t *dataItem = coding_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }
    }


    coding_list_local_var = coding_list_create_internal (
        metadata ? metadata_local_nonprim : NULL,
        pagination ? pagination_local_nonprim : NULL,
        data ? dataList : NULL
        );

    return coding_list_local_var;
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
            coding_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
