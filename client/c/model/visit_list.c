#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "visit_list.h"



static visit_list_t *visit_list_create_internal(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    visit_list_t *visit_list_local_var = malloc(sizeof(visit_list_t));
    if (!visit_list_local_var) {
        return NULL;
    }
    visit_list_local_var->metadata = metadata;
    visit_list_local_var->pagination = pagination;
    visit_list_local_var->data = data;

    visit_list_local_var->_library_owned = 1;
    return visit_list_local_var;
}

__attribute__((deprecated)) visit_list_t *visit_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    return visit_list_create_internal (
        metadata,
        pagination,
        data
        );
}

void visit_list_free(visit_list_t *visit_list) {
    if(NULL == visit_list){
        return ;
    }
    if(visit_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "visit_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (visit_list->metadata) {
        metadata_free(visit_list->metadata);
        visit_list->metadata = NULL;
    }
    if (visit_list->pagination) {
        pagination_free(visit_list->pagination);
        visit_list->pagination = NULL;
    }
    if (visit_list->data) {
        list_ForEach(listEntry, visit_list->data) {
            visit_free(listEntry->data);
        }
        list_freeList(visit_list->data);
        visit_list->data = NULL;
    }
    free(visit_list);
}

cJSON *visit_list_convertToJSON(visit_list_t *visit_list) {
    cJSON *item = cJSON_CreateObject();

    // visit_list->metadata
    if(visit_list->metadata) {
    cJSON *metadata_local_JSON = metadata_convertToJSON(visit_list->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // visit_list->pagination
    if(visit_list->pagination) {
    cJSON *pagination_local_JSON = pagination_convertToJSON(visit_list->pagination);
    if(pagination_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // visit_list->data
    if(visit_list->data) {
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (visit_list->data) {
    list_ForEach(dataListEntry, visit_list->data) {
    cJSON *itemLocal = visit_convertToJSON(dataListEntry->data);
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

visit_list_t *visit_list_parseFromJSON(cJSON *visit_listJSON){

    visit_list_t *visit_list_local_var = NULL;

    // define the local variable for visit_list->metadata
    metadata_t *metadata_local_nonprim = NULL;

    // define the local variable for visit_list->pagination
    pagination_t *pagination_local_nonprim = NULL;

    // define the local list for visit_list->data
    list_t *dataList = NULL;

    // visit_list->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(visit_listJSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = metadata_parseFromJSON(metadata); //nonprimitive
    }

    // visit_list->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(visit_listJSON, "pagination");
    if (cJSON_IsNull(pagination)) {
        pagination = NULL;
    }
    if (pagination) { 
    pagination_local_nonprim = pagination_parseFromJSON(pagination); //nonprimitive
    }

    // visit_list->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(visit_listJSON, "data");
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
        visit_t *dataItem = visit_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }
    }


    visit_list_local_var = visit_list_create_internal (
        metadata ? metadata_local_nonprim : NULL,
        pagination ? pagination_local_nonprim : NULL,
        data ? dataList : NULL
        );

    return visit_list_local_var;
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
            visit_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
