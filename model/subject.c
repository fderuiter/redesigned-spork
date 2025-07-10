#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subject.h"



static subject_t *subject_create_internal(
    char *study_key,
    int subject_id,
    char *subject_oid,
    char *subject_key,
    char *subject_status,
    int site_id,
    char *site_name,
    int deleted,
    char *enrollment_start_date,
    char *date_created,
    char *date_modified,
    list_t *keywords
    ) {
    subject_t *subject_local_var = malloc(sizeof(subject_t));
    if (!subject_local_var) {
        return NULL;
    }
    subject_local_var->study_key = study_key;
    subject_local_var->subject_id = subject_id;
    subject_local_var->subject_oid = subject_oid;
    subject_local_var->subject_key = subject_key;
    subject_local_var->subject_status = subject_status;
    subject_local_var->site_id = site_id;
    subject_local_var->site_name = site_name;
    subject_local_var->deleted = deleted;
    subject_local_var->enrollment_start_date = enrollment_start_date;
    subject_local_var->date_created = date_created;
    subject_local_var->date_modified = date_modified;
    subject_local_var->keywords = keywords;

    subject_local_var->_library_owned = 1;
    return subject_local_var;
}

__attribute__((deprecated)) subject_t *subject_create(
    char *study_key,
    int subject_id,
    char *subject_oid,
    char *subject_key,
    char *subject_status,
    int site_id,
    char *site_name,
    int deleted,
    char *enrollment_start_date,
    char *date_created,
    char *date_modified,
    list_t *keywords
    ) {
    return subject_create_internal (
        study_key,
        subject_id,
        subject_oid,
        subject_key,
        subject_status,
        site_id,
        site_name,
        deleted,
        enrollment_start_date,
        date_created,
        date_modified,
        keywords
        );
}

void subject_free(subject_t *subject) {
    if(NULL == subject){
        return ;
    }
    if(subject->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "subject_free");
        return ;
    }
    listEntry_t *listEntry;
    if (subject->study_key) {
        free(subject->study_key);
        subject->study_key = NULL;
    }
    if (subject->subject_oid) {
        free(subject->subject_oid);
        subject->subject_oid = NULL;
    }
    if (subject->subject_key) {
        free(subject->subject_key);
        subject->subject_key = NULL;
    }
    if (subject->subject_status) {
        free(subject->subject_status);
        subject->subject_status = NULL;
    }
    if (subject->site_name) {
        free(subject->site_name);
        subject->site_name = NULL;
    }
    if (subject->enrollment_start_date) {
        free(subject->enrollment_start_date);
        subject->enrollment_start_date = NULL;
    }
    if (subject->date_created) {
        free(subject->date_created);
        subject->date_created = NULL;
    }
    if (subject->date_modified) {
        free(subject->date_modified);
        subject->date_modified = NULL;
    }
    if (subject->keywords) {
        list_ForEach(listEntry, subject->keywords) {
            keyword_free(listEntry->data);
        }
        list_freeList(subject->keywords);
        subject->keywords = NULL;
    }
    free(subject);
}

cJSON *subject_convertToJSON(subject_t *subject) {
    cJSON *item = cJSON_CreateObject();

    // subject->study_key
    if(subject->study_key) {
    if(cJSON_AddStringToObject(item, "studyKey", subject->study_key) == NULL) {
    goto fail; //String
    }
    }


    // subject->subject_id
    if(subject->subject_id) {
    if(cJSON_AddNumberToObject(item, "subjectId", subject->subject_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // subject->subject_oid
    if(subject->subject_oid) {
    if(cJSON_AddStringToObject(item, "subjectOid", subject->subject_oid) == NULL) {
    goto fail; //String
    }
    }


    // subject->subject_key
    if(subject->subject_key) {
    if(cJSON_AddStringToObject(item, "subjectKey", subject->subject_key) == NULL) {
    goto fail; //String
    }
    }


    // subject->subject_status
    if(subject->subject_status) {
    if(cJSON_AddStringToObject(item, "subjectStatus", subject->subject_status) == NULL) {
    goto fail; //String
    }
    }


    // subject->site_id
    if(subject->site_id) {
    if(cJSON_AddNumberToObject(item, "siteId", subject->site_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // subject->site_name
    if(subject->site_name) {
    if(cJSON_AddStringToObject(item, "siteName", subject->site_name) == NULL) {
    goto fail; //String
    }
    }


    // subject->deleted
    if(subject->deleted) {
    if(cJSON_AddBoolToObject(item, "deleted", subject->deleted) == NULL) {
    goto fail; //Bool
    }
    }


    // subject->enrollment_start_date
    if(subject->enrollment_start_date) {
    if(cJSON_AddStringToObject(item, "enrollmentStartDate", subject->enrollment_start_date) == NULL) {
    goto fail; //String
    }
    }


    // subject->date_created
    if(subject->date_created) {
    if(cJSON_AddStringToObject(item, "dateCreated", subject->date_created) == NULL) {
    goto fail; //String
    }
    }


    // subject->date_modified
    if(subject->date_modified) {
    if(cJSON_AddStringToObject(item, "dateModified", subject->date_modified) == NULL) {
    goto fail; //String
    }
    }


    // subject->keywords
    if(subject->keywords) {
    cJSON *keywords = cJSON_AddArrayToObject(item, "keywords");
    if(keywords == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *keywordsListEntry;
    if (subject->keywords) {
    list_ForEach(keywordsListEntry, subject->keywords) {
    cJSON *itemLocal = keyword_convertToJSON(keywordsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(keywords, itemLocal);
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

subject_t *subject_parseFromJSON(cJSON *subjectJSON){

    subject_t *subject_local_var = NULL;

    // define the local list for subject->keywords
    list_t *keywordsList = NULL;

    // subject->study_key
    cJSON *study_key = cJSON_GetObjectItemCaseSensitive(subjectJSON, "studyKey");
    if (cJSON_IsNull(study_key)) {
        study_key = NULL;
    }
    if (study_key) { 
    if(!cJSON_IsString(study_key) && !cJSON_IsNull(study_key))
    {
    goto end; //String
    }
    }

    // subject->subject_id
    cJSON *subject_id = cJSON_GetObjectItemCaseSensitive(subjectJSON, "subjectId");
    if (cJSON_IsNull(subject_id)) {
        subject_id = NULL;
    }
    if (subject_id) { 
    if(!cJSON_IsNumber(subject_id))
    {
    goto end; //Numeric
    }
    }

    // subject->subject_oid
    cJSON *subject_oid = cJSON_GetObjectItemCaseSensitive(subjectJSON, "subjectOid");
    if (cJSON_IsNull(subject_oid)) {
        subject_oid = NULL;
    }
    if (subject_oid) { 
    if(!cJSON_IsString(subject_oid) && !cJSON_IsNull(subject_oid))
    {
    goto end; //String
    }
    }

    // subject->subject_key
    cJSON *subject_key = cJSON_GetObjectItemCaseSensitive(subjectJSON, "subjectKey");
    if (cJSON_IsNull(subject_key)) {
        subject_key = NULL;
    }
    if (subject_key) { 
    if(!cJSON_IsString(subject_key) && !cJSON_IsNull(subject_key))
    {
    goto end; //String
    }
    }

    // subject->subject_status
    cJSON *subject_status = cJSON_GetObjectItemCaseSensitive(subjectJSON, "subjectStatus");
    if (cJSON_IsNull(subject_status)) {
        subject_status = NULL;
    }
    if (subject_status) { 
    if(!cJSON_IsString(subject_status) && !cJSON_IsNull(subject_status))
    {
    goto end; //String
    }
    }

    // subject->site_id
    cJSON *site_id = cJSON_GetObjectItemCaseSensitive(subjectJSON, "siteId");
    if (cJSON_IsNull(site_id)) {
        site_id = NULL;
    }
    if (site_id) { 
    if(!cJSON_IsNumber(site_id))
    {
    goto end; //Numeric
    }
    }

    // subject->site_name
    cJSON *site_name = cJSON_GetObjectItemCaseSensitive(subjectJSON, "siteName");
    if (cJSON_IsNull(site_name)) {
        site_name = NULL;
    }
    if (site_name) { 
    if(!cJSON_IsString(site_name) && !cJSON_IsNull(site_name))
    {
    goto end; //String
    }
    }

    // subject->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(subjectJSON, "deleted");
    if (cJSON_IsNull(deleted)) {
        deleted = NULL;
    }
    if (deleted) { 
    if(!cJSON_IsBool(deleted))
    {
    goto end; //Bool
    }
    }

    // subject->enrollment_start_date
    cJSON *enrollment_start_date = cJSON_GetObjectItemCaseSensitive(subjectJSON, "enrollmentStartDate");
    if (cJSON_IsNull(enrollment_start_date)) {
        enrollment_start_date = NULL;
    }
    if (enrollment_start_date) { 
    if(!cJSON_IsString(enrollment_start_date) && !cJSON_IsNull(enrollment_start_date))
    {
    goto end; //String
    }
    }

    // subject->date_created
    cJSON *date_created = cJSON_GetObjectItemCaseSensitive(subjectJSON, "dateCreated");
    if (cJSON_IsNull(date_created)) {
        date_created = NULL;
    }
    if (date_created) { 
    if(!cJSON_IsString(date_created) && !cJSON_IsNull(date_created))
    {
    goto end; //String
    }
    }

    // subject->date_modified
    cJSON *date_modified = cJSON_GetObjectItemCaseSensitive(subjectJSON, "dateModified");
    if (cJSON_IsNull(date_modified)) {
        date_modified = NULL;
    }
    if (date_modified) { 
    if(!cJSON_IsString(date_modified) && !cJSON_IsNull(date_modified))
    {
    goto end; //String
    }
    }

    // subject->keywords
    cJSON *keywords = cJSON_GetObjectItemCaseSensitive(subjectJSON, "keywords");
    if (cJSON_IsNull(keywords)) {
        keywords = NULL;
    }
    if (keywords) { 
    cJSON *keywords_local_nonprimitive = NULL;
    if(!cJSON_IsArray(keywords)){
        goto end; //nonprimitive container
    }

    keywordsList = list_createList();

    cJSON_ArrayForEach(keywords_local_nonprimitive,keywords )
    {
        if(!cJSON_IsObject(keywords_local_nonprimitive)){
            goto end;
        }
        keyword_t *keywordsItem = keyword_parseFromJSON(keywords_local_nonprimitive);

        list_addElement(keywordsList, keywordsItem);
    }
    }


    subject_local_var = subject_create_internal (
        study_key && !cJSON_IsNull(study_key) ? strdup(study_key->valuestring) : NULL,
        subject_id ? subject_id->valuedouble : 0,
        subject_oid && !cJSON_IsNull(subject_oid) ? strdup(subject_oid->valuestring) : NULL,
        subject_key && !cJSON_IsNull(subject_key) ? strdup(subject_key->valuestring) : NULL,
        subject_status && !cJSON_IsNull(subject_status) ? strdup(subject_status->valuestring) : NULL,
        site_id ? site_id->valuedouble : 0,
        site_name && !cJSON_IsNull(site_name) ? strdup(site_name->valuestring) : NULL,
        deleted ? deleted->valueint : 0,
        enrollment_start_date && !cJSON_IsNull(enrollment_start_date) ? strdup(enrollment_start_date->valuestring) : NULL,
        date_created && !cJSON_IsNull(date_created) ? strdup(date_created->valuestring) : NULL,
        date_modified && !cJSON_IsNull(date_modified) ? strdup(date_modified->valuestring) : NULL,
        keywords ? keywordsList : NULL
        );

    return subject_local_var;
end:
    if (keywordsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, keywordsList) {
            keyword_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(keywordsList);
        keywordsList = NULL;
    }
    return NULL;

}
