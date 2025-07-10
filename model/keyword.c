#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "keyword.h"



static keyword_t *keyword_create_internal(
    char *keyword_name,
    char *keyword_key,
    int keyword_id,
    char *date_added
    ) {
    keyword_t *keyword_local_var = malloc(sizeof(keyword_t));
    if (!keyword_local_var) {
        return NULL;
    }
    keyword_local_var->keyword_name = keyword_name;
    keyword_local_var->keyword_key = keyword_key;
    keyword_local_var->keyword_id = keyword_id;
    keyword_local_var->date_added = date_added;

    keyword_local_var->_library_owned = 1;
    return keyword_local_var;
}

__attribute__((deprecated)) keyword_t *keyword_create(
    char *keyword_name,
    char *keyword_key,
    int keyword_id,
    char *date_added
    ) {
    return keyword_create_internal (
        keyword_name,
        keyword_key,
        keyword_id,
        date_added
        );
}

void keyword_free(keyword_t *keyword) {
    if(NULL == keyword){
        return ;
    }
    if(keyword->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "keyword_free");
        return ;
    }
    listEntry_t *listEntry;
    if (keyword->keyword_name) {
        free(keyword->keyword_name);
        keyword->keyword_name = NULL;
    }
    if (keyword->keyword_key) {
        free(keyword->keyword_key);
        keyword->keyword_key = NULL;
    }
    if (keyword->date_added) {
        free(keyword->date_added);
        keyword->date_added = NULL;
    }
    free(keyword);
}

cJSON *keyword_convertToJSON(keyword_t *keyword) {
    cJSON *item = cJSON_CreateObject();

    // keyword->keyword_name
    if(keyword->keyword_name) {
    if(cJSON_AddStringToObject(item, "keywordName", keyword->keyword_name) == NULL) {
    goto fail; //String
    }
    }


    // keyword->keyword_key
    if(keyword->keyword_key) {
    if(cJSON_AddStringToObject(item, "keywordKey", keyword->keyword_key) == NULL) {
    goto fail; //String
    }
    }


    // keyword->keyword_id
    if(keyword->keyword_id) {
    if(cJSON_AddNumberToObject(item, "keywordId", keyword->keyword_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // keyword->date_added
    if(keyword->date_added) {
    if(cJSON_AddStringToObject(item, "dateAdded", keyword->date_added) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

keyword_t *keyword_parseFromJSON(cJSON *keywordJSON){

    keyword_t *keyword_local_var = NULL;

    // keyword->keyword_name
    cJSON *keyword_name = cJSON_GetObjectItemCaseSensitive(keywordJSON, "keywordName");
    if (cJSON_IsNull(keyword_name)) {
        keyword_name = NULL;
    }
    if (keyword_name) { 
    if(!cJSON_IsString(keyword_name) && !cJSON_IsNull(keyword_name))
    {
    goto end; //String
    }
    }

    // keyword->keyword_key
    cJSON *keyword_key = cJSON_GetObjectItemCaseSensitive(keywordJSON, "keywordKey");
    if (cJSON_IsNull(keyword_key)) {
        keyword_key = NULL;
    }
    if (keyword_key) { 
    if(!cJSON_IsString(keyword_key) && !cJSON_IsNull(keyword_key))
    {
    goto end; //String
    }
    }

    // keyword->keyword_id
    cJSON *keyword_id = cJSON_GetObjectItemCaseSensitive(keywordJSON, "keywordId");
    if (cJSON_IsNull(keyword_id)) {
        keyword_id = NULL;
    }
    if (keyword_id) { 
    if(!cJSON_IsNumber(keyword_id))
    {
    goto end; //Numeric
    }
    }

    // keyword->date_added
    cJSON *date_added = cJSON_GetObjectItemCaseSensitive(keywordJSON, "dateAdded");
    if (cJSON_IsNull(date_added)) {
        date_added = NULL;
    }
    if (date_added) { 
    if(!cJSON_IsString(date_added) && !cJSON_IsNull(date_added))
    {
    goto end; //String
    }
    }


    keyword_local_var = keyword_create_internal (
        keyword_name && !cJSON_IsNull(keyword_name) ? strdup(keyword_name->valuestring) : NULL,
        keyword_key && !cJSON_IsNull(keyword_key) ? strdup(keyword_key->valuestring) : NULL,
        keyword_id ? keyword_id->valuedouble : 0,
        date_added && !cJSON_IsNull(date_added) ? strdup(date_added->valuestring) : NULL
        );

    return keyword_local_var;
end:
    return NULL;

}
