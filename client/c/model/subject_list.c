#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subject_list.h"



static subject_list_t *subject_list_create_internal(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    subject_list_t *subject_list_local_var = malloc(sizeof(subject_list_t));
    if (!subject_list_local_var) {
        return NULL;
    }
    subject_list_local_var->metadata = metadata;
    subject_list_local_var->pagination = pagination;
    subject_list_local_var->data = data;

    subject_list_local_var->_library_owned = 1;
    return subject_list_local_var;
}

__attribute__((deprecated)) subject_list_t *subject_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    return subject_list_create_internal (
        metadata,
        pagination,
        data
        );
}

void subject_list_free(subject_list_t *subject_list) {
    if(NULL == subject_list){
        return ;
    }
    if(subject_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "subject_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (subject_list->metadata) {
        metadata_free(subject_list->metadata);
        subject_list->metadata = NULL;
    }
    if (subject_list->pagination) {
        pagination_free(subject_list->pagination);
        subject_list->pagination = NULL;
    }
    if (subject_list->data) {
        list_ForEach(listEntry, subject_list->data) {
            subject_free(listEntry->data);
        }
        list_freeList(subject_list->data);
        subject_list->data = NULL;
    }
    free(subject_list);
}

cJSON *subject_list_convertToJSON(subject_list_t *subject_list) {
    cJSON *item = cJSON_CreateObject();

    // subject_list->metadata
    if(subject_list->metadata) {
    cJSON *metadata_local_JSON = metadata_convertToJSON(subject_list->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // subject_list->pagination
    if(subject_list->pagination) {
    cJSON *pagination_local_JSON = pagination_convertToJSON(subject_list->pagination);
    if(pagination_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // subject_list->data
    if(subject_list->data) {
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (subject_list->data) {
    list_ForEach(dataListEntry, subject_list->data) {
    cJSON *itemLocal = subject_convertToJSON(dataListEntry->data);
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

subject_list_t *subject_list_parseFromJSON(cJSON *subject_listJSON){

    subject_list_t *subject_list_local_var = NULL;

    // define the local variable for subject_list->metadata
    metadata_t *metadata_local_nonprim = NULL;

    // define the local variable for subject_list->pagination
    pagination_t *pagination_local_nonprim = NULL;

    // define the local list for subject_list->data
    list_t *dataList = NULL;

    // subject_list->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(subject_listJSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = metadata_parseFromJSON(metadata); //nonprimitive
    }

    // subject_list->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(subject_listJSON, "pagination");
    if (cJSON_IsNull(pagination)) {
        pagination = NULL;
    }
    if (pagination) { 
    pagination_local_nonprim = pagination_parseFromJSON(pagination); //nonprimitive
    }

    // subject_list->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(subject_listJSON, "data");
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
        subject_t *dataItem = subject_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }
    }


    subject_list_local_var = subject_list_create_internal (
        metadata ? metadata_local_nonprim : NULL,
        pagination ? pagination_local_nonprim : NULL,
        data ? dataList : NULL
        );

    return subject_list_local_var;
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
            subject_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
