#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "site_list.h"



static site_list_t *site_list_create_internal(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    site_list_t *site_list_local_var = malloc(sizeof(site_list_t));
    if (!site_list_local_var) {
        return NULL;
    }
    site_list_local_var->metadata = metadata;
    site_list_local_var->pagination = pagination;
    site_list_local_var->data = data;

    site_list_local_var->_library_owned = 1;
    return site_list_local_var;
}

__attribute__((deprecated)) site_list_t *site_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
    ) {
    return site_list_create_internal (
        metadata,
        pagination,
        data
        );
}

void site_list_free(site_list_t *site_list) {
    if(NULL == site_list){
        return ;
    }
    if(site_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "site_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (site_list->metadata) {
        metadata_free(site_list->metadata);
        site_list->metadata = NULL;
    }
    if (site_list->pagination) {
        pagination_free(site_list->pagination);
        site_list->pagination = NULL;
    }
    if (site_list->data) {
        list_ForEach(listEntry, site_list->data) {
            site_free(listEntry->data);
        }
        list_freeList(site_list->data);
        site_list->data = NULL;
    }
    free(site_list);
}

cJSON *site_list_convertToJSON(site_list_t *site_list) {
    cJSON *item = cJSON_CreateObject();

    // site_list->metadata
    if(site_list->metadata) {
    cJSON *metadata_local_JSON = metadata_convertToJSON(site_list->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // site_list->pagination
    if(site_list->pagination) {
    cJSON *pagination_local_JSON = pagination_convertToJSON(site_list->pagination);
    if(pagination_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // site_list->data
    if(site_list->data) {
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (site_list->data) {
    list_ForEach(dataListEntry, site_list->data) {
    cJSON *itemLocal = site_convertToJSON(dataListEntry->data);
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

site_list_t *site_list_parseFromJSON(cJSON *site_listJSON){

    site_list_t *site_list_local_var = NULL;

    // define the local variable for site_list->metadata
    metadata_t *metadata_local_nonprim = NULL;

    // define the local variable for site_list->pagination
    pagination_t *pagination_local_nonprim = NULL;

    // define the local list for site_list->data
    list_t *dataList = NULL;

    // site_list->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(site_listJSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = metadata_parseFromJSON(metadata); //nonprimitive
    }

    // site_list->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(site_listJSON, "pagination");
    if (cJSON_IsNull(pagination)) {
        pagination = NULL;
    }
    if (pagination) { 
    pagination_local_nonprim = pagination_parseFromJSON(pagination); //nonprimitive
    }

    // site_list->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(site_listJSON, "data");
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
        site_t *dataItem = site_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }
    }


    site_list_local_var = site_list_create_internal (
        metadata ? metadata_local_nonprim : NULL,
        pagination ? pagination_local_nonprim : NULL,
        data ? dataList : NULL
        );

    return site_list_local_var;
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
            site_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
