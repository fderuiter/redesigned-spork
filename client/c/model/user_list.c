#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_list.h"



static user_list_t *user_list_create_internal(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    user_list_t *user_list_local_var = malloc(sizeof(user_list_t));
    if (!user_list_local_var) {
        return NULL;
    }
    user_list_local_var->metadata = metadata;
    user_list_local_var->pagination = pagination;
    user_list_local_var->data = data;

    user_list_local_var->_library_owned = 1;
    return user_list_local_var;
}

__attribute__((deprecated)) user_list_t *user_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    return user_list_create_internal (
        metadata,
        pagination,
        data
        );
}

void user_list_free(user_list_t *user_list) {
    if(NULL == user_list){
        return ;
    }
    if(user_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "user_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (user_list->metadata) {
        metadata_free(user_list->metadata);
        user_list->metadata = NULL;
    }
    if (user_list->pagination) {
        pagination_free(user_list->pagination);
        user_list->pagination = NULL;
    }
    if (user_list->data) {
        list_ForEach(listEntry, user_list->data) {
            user_free(listEntry->data);
        }
        list_freeList(user_list->data);
        user_list->data = NULL;
    }
    free(user_list);
}

cJSON *user_list_convertToJSON(user_list_t *user_list) {
    cJSON *item = cJSON_CreateObject();

    // user_list->metadata
    if(user_list->metadata) {
    cJSON *metadata_local_JSON = metadata_convertToJSON(user_list->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // user_list->pagination
    if(user_list->pagination) {
    cJSON *pagination_local_JSON = pagination_convertToJSON(user_list->pagination);
    if(pagination_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // user_list->data
    if(user_list->data) {
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (user_list->data) {
    list_ForEach(dataListEntry, user_list->data) {
    cJSON *itemLocal = user_convertToJSON(dataListEntry->data);
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

user_list_t *user_list_parseFromJSON(cJSON *user_listJSON){

    user_list_t *user_list_local_var = NULL;

    // define the local variable for user_list->metadata
    metadata_t *metadata_local_nonprim = NULL;

    // define the local variable for user_list->pagination
    pagination_t *pagination_local_nonprim = NULL;

    // define the local list for user_list->data
    list_t *dataList = NULL;

    // user_list->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(user_listJSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = metadata_parseFromJSON(metadata); //nonprimitive
    }

    // user_list->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(user_listJSON, "pagination");
    if (cJSON_IsNull(pagination)) {
        pagination = NULL;
    }
    if (pagination) { 
    pagination_local_nonprim = pagination_parseFromJSON(pagination); //nonprimitive
    }

    // user_list->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(user_listJSON, "data");
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
        user_t *dataItem = user_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }
    }


    user_list_local_var = user_list_create_internal (
        metadata ? metadata_local_nonprim : NULL,
        pagination ? pagination_local_nonprim : NULL,
        data ? dataList : NULL
        );

    return user_list_local_var;
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
            user_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
