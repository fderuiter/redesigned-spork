#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "record.h"



static record_t *record_create_internal(
    char *study_key,
    int interval_id,
    int form_id,
    char *form_key,
    int site_id,
    int record_id,
    char *record_oid,
    char *record_type,
    char *record_status,
    int deleted,
    char *date_created,
    char *date_modified,
    int subject_id,
    char *subject_oid,
    char *subject_key,
    int visit_id,
    int parent_record_id,
    list_t *keywords,
    list_t* record_data
    ) {
    record_t *record_local_var = malloc(sizeof(record_t));
    if (!record_local_var) {
        return NULL;
    }
    record_local_var->study_key = study_key;
    record_local_var->interval_id = interval_id;
    record_local_var->form_id = form_id;
    record_local_var->form_key = form_key;
    record_local_var->site_id = site_id;
    record_local_var->record_id = record_id;
    record_local_var->record_oid = record_oid;
    record_local_var->record_type = record_type;
    record_local_var->record_status = record_status;
    record_local_var->deleted = deleted;
    record_local_var->date_created = date_created;
    record_local_var->date_modified = date_modified;
    record_local_var->subject_id = subject_id;
    record_local_var->subject_oid = subject_oid;
    record_local_var->subject_key = subject_key;
    record_local_var->visit_id = visit_id;
    record_local_var->parent_record_id = parent_record_id;
    record_local_var->keywords = keywords;
    record_local_var->record_data = record_data;

    record_local_var->_library_owned = 1;
    return record_local_var;
}

__attribute__((deprecated)) record_t *record_create(
    char *study_key,
    int interval_id,
    int form_id,
    char *form_key,
    int site_id,
    int record_id,
    char *record_oid,
    char *record_type,
    char *record_status,
    int deleted,
    char *date_created,
    char *date_modified,
    int subject_id,
    char *subject_oid,
    char *subject_key,
    int visit_id,
    int parent_record_id,
    list_t *keywords,
    list_t* record_data
    ) {
    return record_create_internal (
        study_key,
        interval_id,
        form_id,
        form_key,
        site_id,
        record_id,
        record_oid,
        record_type,
        record_status,
        deleted,
        date_created,
        date_modified,
        subject_id,
        subject_oid,
        subject_key,
        visit_id,
        parent_record_id,
        keywords,
        record_data
        );
}

void record_free(record_t *record) {
    if(NULL == record){
        return ;
    }
    if(record->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "record_free");
        return ;
    }
    listEntry_t *listEntry;
    if (record->study_key) {
        free(record->study_key);
        record->study_key = NULL;
    }
    if (record->form_key) {
        free(record->form_key);
        record->form_key = NULL;
    }
    if (record->record_oid) {
        free(record->record_oid);
        record->record_oid = NULL;
    }
    if (record->record_type) {
        free(record->record_type);
        record->record_type = NULL;
    }
    if (record->record_status) {
        free(record->record_status);
        record->record_status = NULL;
    }
    if (record->date_created) {
        free(record->date_created);
        record->date_created = NULL;
    }
    if (record->date_modified) {
        free(record->date_modified);
        record->date_modified = NULL;
    }
    if (record->subject_oid) {
        free(record->subject_oid);
        record->subject_oid = NULL;
    }
    if (record->subject_key) {
        free(record->subject_key);
        record->subject_key = NULL;
    }
    if (record->keywords) {
        list_ForEach(listEntry, record->keywords) {
            keyword_free(listEntry->data);
        }
        list_freeList(record->keywords);
        record->keywords = NULL;
    }
    if (record->record_data) {
        list_ForEach(listEntry, record->record_data) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(record->record_data);
        record->record_data = NULL;
    }
    free(record);
}

cJSON *record_convertToJSON(record_t *record) {
    cJSON *item = cJSON_CreateObject();

    // record->study_key
    if(record->study_key) {
    if(cJSON_AddStringToObject(item, "studyKey", record->study_key) == NULL) {
    goto fail; //String
    }
    }


    // record->interval_id
    if(record->interval_id) {
    if(cJSON_AddNumberToObject(item, "intervalId", record->interval_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // record->form_id
    if(record->form_id) {
    if(cJSON_AddNumberToObject(item, "formId", record->form_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // record->form_key
    if(record->form_key) {
    if(cJSON_AddStringToObject(item, "formKey", record->form_key) == NULL) {
    goto fail; //String
    }
    }


    // record->site_id
    if(record->site_id) {
    if(cJSON_AddNumberToObject(item, "siteId", record->site_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // record->record_id
    if(record->record_id) {
    if(cJSON_AddNumberToObject(item, "recordId", record->record_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // record->record_oid
    if(record->record_oid) {
    if(cJSON_AddStringToObject(item, "recordOid", record->record_oid) == NULL) {
    goto fail; //String
    }
    }


    // record->record_type
    if(record->record_type) {
    if(cJSON_AddStringToObject(item, "recordType", record->record_type) == NULL) {
    goto fail; //String
    }
    }


    // record->record_status
    if(record->record_status) {
    if(cJSON_AddStringToObject(item, "recordStatus", record->record_status) == NULL) {
    goto fail; //String
    }
    }


    // record->deleted
    if(record->deleted) {
    if(cJSON_AddBoolToObject(item, "deleted", record->deleted) == NULL) {
    goto fail; //Bool
    }
    }


    // record->date_created
    if(record->date_created) {
    if(cJSON_AddStringToObject(item, "dateCreated", record->date_created) == NULL) {
    goto fail; //String
    }
    }


    // record->date_modified
    if(record->date_modified) {
    if(cJSON_AddStringToObject(item, "dateModified", record->date_modified) == NULL) {
    goto fail; //String
    }
    }


    // record->subject_id
    if(record->subject_id) {
    if(cJSON_AddNumberToObject(item, "subjectId", record->subject_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // record->subject_oid
    if(record->subject_oid) {
    if(cJSON_AddStringToObject(item, "subjectOid", record->subject_oid) == NULL) {
    goto fail; //String
    }
    }


    // record->subject_key
    if(record->subject_key) {
    if(cJSON_AddStringToObject(item, "subjectKey", record->subject_key) == NULL) {
    goto fail; //String
    }
    }


    // record->visit_id
    if(record->visit_id) {
    if(cJSON_AddNumberToObject(item, "visitId", record->visit_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // record->parent_record_id
    if(record->parent_record_id) {
    if(cJSON_AddNumberToObject(item, "parentRecordId", record->parent_record_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // record->keywords
    if(record->keywords) {
    cJSON *keywords = cJSON_AddArrayToObject(item, "keywords");
    if(keywords == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *keywordsListEntry;
    if (record->keywords) {
    list_ForEach(keywordsListEntry, record->keywords) {
    cJSON *itemLocal = keyword_convertToJSON(keywordsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(keywords, itemLocal);
    }
    }
    }


    // record->record_data
    if(record->record_data) {
    cJSON *record_data = cJSON_AddObjectToObject(item, "recordData");
    if(record_data == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = record_data;
    listEntry_t *record_dataListEntry;
    if (record->record_data) {
    list_ForEach(record_dataListEntry, record->record_data) {
        keyValuePair_t *localKeyValue = record_dataListEntry->data;
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

record_t *record_parseFromJSON(cJSON *recordJSON){

    record_t *record_local_var = NULL;

    // define the local list for record->keywords
    list_t *keywordsList = NULL;

    // define the local map for record->record_data
    list_t *record_dataList = NULL;

    // record->study_key
    cJSON *study_key = cJSON_GetObjectItemCaseSensitive(recordJSON, "studyKey");
    if (cJSON_IsNull(study_key)) {
        study_key = NULL;
    }
    if (study_key) { 
    if(!cJSON_IsString(study_key) && !cJSON_IsNull(study_key))
    {
    goto end; //String
    }
    }

    // record->interval_id
    cJSON *interval_id = cJSON_GetObjectItemCaseSensitive(recordJSON, "intervalId");
    if (cJSON_IsNull(interval_id)) {
        interval_id = NULL;
    }
    if (interval_id) { 
    if(!cJSON_IsNumber(interval_id))
    {
    goto end; //Numeric
    }
    }

    // record->form_id
    cJSON *form_id = cJSON_GetObjectItemCaseSensitive(recordJSON, "formId");
    if (cJSON_IsNull(form_id)) {
        form_id = NULL;
    }
    if (form_id) { 
    if(!cJSON_IsNumber(form_id))
    {
    goto end; //Numeric
    }
    }

    // record->form_key
    cJSON *form_key = cJSON_GetObjectItemCaseSensitive(recordJSON, "formKey");
    if (cJSON_IsNull(form_key)) {
        form_key = NULL;
    }
    if (form_key) { 
    if(!cJSON_IsString(form_key) && !cJSON_IsNull(form_key))
    {
    goto end; //String
    }
    }

    // record->site_id
    cJSON *site_id = cJSON_GetObjectItemCaseSensitive(recordJSON, "siteId");
    if (cJSON_IsNull(site_id)) {
        site_id = NULL;
    }
    if (site_id) { 
    if(!cJSON_IsNumber(site_id))
    {
    goto end; //Numeric
    }
    }

    // record->record_id
    cJSON *record_id = cJSON_GetObjectItemCaseSensitive(recordJSON, "recordId");
    if (cJSON_IsNull(record_id)) {
        record_id = NULL;
    }
    if (record_id) { 
    if(!cJSON_IsNumber(record_id))
    {
    goto end; //Numeric
    }
    }

    // record->record_oid
    cJSON *record_oid = cJSON_GetObjectItemCaseSensitive(recordJSON, "recordOid");
    if (cJSON_IsNull(record_oid)) {
        record_oid = NULL;
    }
    if (record_oid) { 
    if(!cJSON_IsString(record_oid) && !cJSON_IsNull(record_oid))
    {
    goto end; //String
    }
    }

    // record->record_type
    cJSON *record_type = cJSON_GetObjectItemCaseSensitive(recordJSON, "recordType");
    if (cJSON_IsNull(record_type)) {
        record_type = NULL;
    }
    if (record_type) { 
    if(!cJSON_IsString(record_type) && !cJSON_IsNull(record_type))
    {
    goto end; //String
    }
    }

    // record->record_status
    cJSON *record_status = cJSON_GetObjectItemCaseSensitive(recordJSON, "recordStatus");
    if (cJSON_IsNull(record_status)) {
        record_status = NULL;
    }
    if (record_status) { 
    if(!cJSON_IsString(record_status) && !cJSON_IsNull(record_status))
    {
    goto end; //String
    }
    }

    // record->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(recordJSON, "deleted");
    if (cJSON_IsNull(deleted)) {
        deleted = NULL;
    }
    if (deleted) { 
    if(!cJSON_IsBool(deleted))
    {
    goto end; //Bool
    }
    }

    // record->date_created
    cJSON *date_created = cJSON_GetObjectItemCaseSensitive(recordJSON, "dateCreated");
    if (cJSON_IsNull(date_created)) {
        date_created = NULL;
    }
    if (date_created) { 
    if(!cJSON_IsString(date_created) && !cJSON_IsNull(date_created))
    {
    goto end; //String
    }
    }

    // record->date_modified
    cJSON *date_modified = cJSON_GetObjectItemCaseSensitive(recordJSON, "dateModified");
    if (cJSON_IsNull(date_modified)) {
        date_modified = NULL;
    }
    if (date_modified) { 
    if(!cJSON_IsString(date_modified) && !cJSON_IsNull(date_modified))
    {
    goto end; //String
    }
    }

    // record->subject_id
    cJSON *subject_id = cJSON_GetObjectItemCaseSensitive(recordJSON, "subjectId");
    if (cJSON_IsNull(subject_id)) {
        subject_id = NULL;
    }
    if (subject_id) { 
    if(!cJSON_IsNumber(subject_id))
    {
    goto end; //Numeric
    }
    }

    // record->subject_oid
    cJSON *subject_oid = cJSON_GetObjectItemCaseSensitive(recordJSON, "subjectOid");
    if (cJSON_IsNull(subject_oid)) {
        subject_oid = NULL;
    }
    if (subject_oid) { 
    if(!cJSON_IsString(subject_oid) && !cJSON_IsNull(subject_oid))
    {
    goto end; //String
    }
    }

    // record->subject_key
    cJSON *subject_key = cJSON_GetObjectItemCaseSensitive(recordJSON, "subjectKey");
    if (cJSON_IsNull(subject_key)) {
        subject_key = NULL;
    }
    if (subject_key) { 
    if(!cJSON_IsString(subject_key) && !cJSON_IsNull(subject_key))
    {
    goto end; //String
    }
    }

    // record->visit_id
    cJSON *visit_id = cJSON_GetObjectItemCaseSensitive(recordJSON, "visitId");
    if (cJSON_IsNull(visit_id)) {
        visit_id = NULL;
    }
    if (visit_id) { 
    if(!cJSON_IsNumber(visit_id))
    {
    goto end; //Numeric
    }
    }

    // record->parent_record_id
    cJSON *parent_record_id = cJSON_GetObjectItemCaseSensitive(recordJSON, "parentRecordId");
    if (cJSON_IsNull(parent_record_id)) {
        parent_record_id = NULL;
    }
    if (parent_record_id) { 
    if(!cJSON_IsNumber(parent_record_id))
    {
    goto end; //Numeric
    }
    }

    // record->keywords
    cJSON *keywords = cJSON_GetObjectItemCaseSensitive(recordJSON, "keywords");
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

    // record->record_data
    cJSON *record_data = cJSON_GetObjectItemCaseSensitive(recordJSON, "recordData");
    if (cJSON_IsNull(record_data)) {
        record_data = NULL;
    }
    if (record_data) { 
    cJSON *record_data_local_map = NULL;
    if(!cJSON_IsObject(record_data) && !cJSON_IsNull(record_data))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(record_data))
    {
        record_dataList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(record_data_local_map, record_data)
        {
            cJSON *localMapObject = record_data_local_map;
            list_addElement(record_dataList , localMapKeyPair);
        }
    }
    }


    record_local_var = record_create_internal (
        study_key && !cJSON_IsNull(study_key) ? strdup(study_key->valuestring) : NULL,
        interval_id ? interval_id->valuedouble : 0,
        form_id ? form_id->valuedouble : 0,
        form_key && !cJSON_IsNull(form_key) ? strdup(form_key->valuestring) : NULL,
        site_id ? site_id->valuedouble : 0,
        record_id ? record_id->valuedouble : 0,
        record_oid && !cJSON_IsNull(record_oid) ? strdup(record_oid->valuestring) : NULL,
        record_type && !cJSON_IsNull(record_type) ? strdup(record_type->valuestring) : NULL,
        record_status && !cJSON_IsNull(record_status) ? strdup(record_status->valuestring) : NULL,
        deleted ? deleted->valueint : 0,
        date_created && !cJSON_IsNull(date_created) ? strdup(date_created->valuestring) : NULL,
        date_modified && !cJSON_IsNull(date_modified) ? strdup(date_modified->valuestring) : NULL,
        subject_id ? subject_id->valuedouble : 0,
        subject_oid && !cJSON_IsNull(subject_oid) ? strdup(subject_oid->valuestring) : NULL,
        subject_key && !cJSON_IsNull(subject_key) ? strdup(subject_key->valuestring) : NULL,
        visit_id ? visit_id->valuedouble : 0,
        parent_record_id ? parent_record_id->valuedouble : 0,
        keywords ? keywordsList : NULL,
        record_data ? record_dataList : NULL
        );

    return record_local_var;
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
    if (record_dataList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, record_dataList) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(record_dataList);
        record_dataList = NULL;
    }
    return NULL;

}
