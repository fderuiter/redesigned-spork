#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "pagination.h"



static pagination_t *pagination_create_internal(
    int current_page,
    int size,
    int total_pages,
    int total_elements,
    list_t *sort
    ) {
    pagination_t *pagination_local_var = malloc(sizeof(pagination_t));
    if (!pagination_local_var) {
        return NULL;
    }
    pagination_local_var->current_page = current_page;
    pagination_local_var->size = size;
    pagination_local_var->total_pages = total_pages;
    pagination_local_var->total_elements = total_elements;
    pagination_local_var->sort = sort;

    pagination_local_var->_library_owned = 1;
    return pagination_local_var;
}

__attribute__((deprecated)) pagination_t *pagination_create(
    int current_page,
    int size,
    int total_pages,
    int total_elements,
    list_t *sort
    ) {
    return pagination_create_internal (
        current_page,
        size,
        total_pages,
        total_elements,
        sort
        );
}

void pagination_free(pagination_t *pagination) {
    if(NULL == pagination){
        return ;
    }
    if(pagination->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "pagination_free");
        return ;
    }
    listEntry_t *listEntry;
    if (pagination->sort) {
        list_ForEach(listEntry, pagination->sort) {
            sort_free(listEntry->data);
        }
        list_freeList(pagination->sort);
        pagination->sort = NULL;
    }
    free(pagination);
}

cJSON *pagination_convertToJSON(pagination_t *pagination) {
    cJSON *item = cJSON_CreateObject();

    // pagination->current_page
    if(pagination->current_page) {
    if(cJSON_AddNumberToObject(item, "currentPage", pagination->current_page) == NULL) {
    goto fail; //Numeric
    }
    }


    // pagination->size
    if(pagination->size) {
    if(cJSON_AddNumberToObject(item, "size", pagination->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // pagination->total_pages
    if(pagination->total_pages) {
    if(cJSON_AddNumberToObject(item, "totalPages", pagination->total_pages) == NULL) {
    goto fail; //Numeric
    }
    }


    // pagination->total_elements
    if(pagination->total_elements) {
    if(cJSON_AddNumberToObject(item, "totalElements", pagination->total_elements) == NULL) {
    goto fail; //Numeric
    }
    }


    // pagination->sort
    if(pagination->sort) {
    cJSON *sort = cJSON_AddArrayToObject(item, "sort");
    if(sort == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *sortListEntry;
    if (pagination->sort) {
    list_ForEach(sortListEntry, pagination->sort) {
    cJSON *itemLocal = sort_convertToJSON(sortListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(sort, itemLocal);
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

pagination_t *pagination_parseFromJSON(cJSON *paginationJSON){

    pagination_t *pagination_local_var = NULL;

    // define the local list for pagination->sort
    list_t *sortList = NULL;

    // pagination->current_page
    cJSON *current_page = cJSON_GetObjectItemCaseSensitive(paginationJSON, "currentPage");
    if (cJSON_IsNull(current_page)) {
        current_page = NULL;
    }
    if (current_page) { 
    if(!cJSON_IsNumber(current_page))
    {
    goto end; //Numeric
    }
    }

    // pagination->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(paginationJSON, "size");
    if (cJSON_IsNull(size)) {
        size = NULL;
    }
    if (size) { 
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }
    }

    // pagination->total_pages
    cJSON *total_pages = cJSON_GetObjectItemCaseSensitive(paginationJSON, "totalPages");
    if (cJSON_IsNull(total_pages)) {
        total_pages = NULL;
    }
    if (total_pages) { 
    if(!cJSON_IsNumber(total_pages))
    {
    goto end; //Numeric
    }
    }

    // pagination->total_elements
    cJSON *total_elements = cJSON_GetObjectItemCaseSensitive(paginationJSON, "totalElements");
    if (cJSON_IsNull(total_elements)) {
        total_elements = NULL;
    }
    if (total_elements) { 
    if(!cJSON_IsNumber(total_elements))
    {
    goto end; //Numeric
    }
    }

    // pagination->sort
    cJSON *sort = cJSON_GetObjectItemCaseSensitive(paginationJSON, "sort");
    if (cJSON_IsNull(sort)) {
        sort = NULL;
    }
    if (sort) { 
    cJSON *sort_local_nonprimitive = NULL;
    if(!cJSON_IsArray(sort)){
        goto end; //nonprimitive container
    }

    sortList = list_createList();

    cJSON_ArrayForEach(sort_local_nonprimitive,sort )
    {
        if(!cJSON_IsObject(sort_local_nonprimitive)){
            goto end;
        }
        sort_t *sortItem = sort_parseFromJSON(sort_local_nonprimitive);

        list_addElement(sortList, sortItem);
    }
    }


    pagination_local_var = pagination_create_internal (
        current_page ? current_page->valuedouble : 0,
        size ? size->valuedouble : 0,
        total_pages ? total_pages->valuedouble : 0,
        total_elements ? total_elements->valuedouble : 0,
        sort ? sortList : NULL
        );

    return pagination_local_var;
end:
    if (sortList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, sortList) {
            sort_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(sortList);
        sortList = NULL;
    }
    return NULL;

}
