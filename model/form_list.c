#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "form_list.h"



static form_list_t *form_list_create_internal(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    form_list_t *form_list_local_var = malloc(sizeof(form_list_t));
    if (!form_list_local_var) {
        return NULL;
    }
    form_list_local_var->metadata = metadata;
    form_list_local_var->pagination = pagination;
    form_list_local_var->data = data;

    form_list_local_var->_library_owned = 1;
    return form_list_local_var;
}

__attribute__((deprecated)) form_list_t *form_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    return form_list_create_internal (
        metadata,
        pagination,
        data
        );
}

void form_list_free(form_list_t *form_list) {
    if(NULL == form_list){
        return ;
    }
    if(form_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "form_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (form_list->metadata) {
        metadata_free(form_list->metadata);
        form_list->metadata = NULL;
    }
    if (form_list->pagination) {
        pagination_free(form_list->pagination);
        form_list->pagination = NULL;
    }
    if (form_list->data) {
        list_ForEach(listEntry, form_list->data) {
            form_free(listEntry->data);
        }
        list_freeList(form_list->data);
        form_list->data = NULL;
    }
    free(form_list);
}

cJSON *form_list_convertToJSON(form_list_t *form_list) {
    cJSON *item = cJSON_CreateObject();

    // form_list->metadata
    if(form_list->metadata) {
    cJSON *metadata_local_JSON = metadata_convertToJSON(form_list->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // form_list->pagination
    if(form_list->pagination) {
    cJSON *pagination_local_JSON = pagination_convertToJSON(form_list->pagination);
    if(pagination_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // form_list->data
    if(form_list->data) {
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (form_list->data) {
    list_ForEach(dataListEntry, form_list->data) {
    cJSON *itemLocal = form_convertToJSON(dataListEntry->data);
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

form_list_t *form_list_parseFromJSON(cJSON *form_listJSON){

    form_list_t *form_list_local_var = NULL;

    // define the local variable for form_list->metadata
    metadata_t *metadata_local_nonprim = NULL;

    // define the local variable for form_list->pagination
    pagination_t *pagination_local_nonprim = NULL;

    // define the local list for form_list->data
    list_t *dataList = NULL;

    // form_list->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(form_listJSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = metadata_parseFromJSON(metadata); //nonprimitive
    }

    // form_list->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(form_listJSON, "pagination");
    if (cJSON_IsNull(pagination)) {
        pagination = NULL;
    }
    if (pagination) { 
    pagination_local_nonprim = pagination_parseFromJSON(pagination); //nonprimitive
    }

    // form_list->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(form_listJSON, "data");
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
        form_t *dataItem = form_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }
    }


    form_list_local_var = form_list_create_internal (
        metadata ? metadata_local_nonprim : NULL,
        pagination ? pagination_local_nonprim : NULL,
        data ? dataList : NULL
        );

    return form_list_local_var;
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
            form_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
