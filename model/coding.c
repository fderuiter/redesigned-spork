#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "coding.h"



static coding_t *coding_create_internal(
    char *study_key,
    char *site_name,
    int site_id,
    int subject_id,
    char *subject_key,
    int form_id,
    char *form_name,
    char *form_key,
    int revision,
    int record_id,
    char *variable,
    char *value,
    int coding_id,
    char *code,
    char *coded_by,
    char *reason,
    char *dictionary_name,
    char *dictionary_version,
    char *date_coded
    ) {
    coding_t *coding_local_var = malloc(sizeof(coding_t));
    if (!coding_local_var) {
        return NULL;
    }
    coding_local_var->study_key = study_key;
    coding_local_var->site_name = site_name;
    coding_local_var->site_id = site_id;
    coding_local_var->subject_id = subject_id;
    coding_local_var->subject_key = subject_key;
    coding_local_var->form_id = form_id;
    coding_local_var->form_name = form_name;
    coding_local_var->form_key = form_key;
    coding_local_var->revision = revision;
    coding_local_var->record_id = record_id;
    coding_local_var->variable = variable;
    coding_local_var->value = value;
    coding_local_var->coding_id = coding_id;
    coding_local_var->code = code;
    coding_local_var->coded_by = coded_by;
    coding_local_var->reason = reason;
    coding_local_var->dictionary_name = dictionary_name;
    coding_local_var->dictionary_version = dictionary_version;
    coding_local_var->date_coded = date_coded;

    coding_local_var->_library_owned = 1;
    return coding_local_var;
}

__attribute__((deprecated)) coding_t *coding_create(
    char *study_key,
    char *site_name,
    int site_id,
    int subject_id,
    char *subject_key,
    int form_id,
    char *form_name,
    char *form_key,
    int revision,
    int record_id,
    char *variable,
    char *value,
    int coding_id,
    char *code,
    char *coded_by,
    char *reason,
    char *dictionary_name,
    char *dictionary_version,
    char *date_coded
    ) {
    return coding_create_internal (
        study_key,
        site_name,
        site_id,
        subject_id,
        subject_key,
        form_id,
        form_name,
        form_key,
        revision,
        record_id,
        variable,
        value,
        coding_id,
        code,
        coded_by,
        reason,
        dictionary_name,
        dictionary_version,
        date_coded
        );
}

void coding_free(coding_t *coding) {
    if(NULL == coding){
        return ;
    }
    if(coding->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "coding_free");
        return ;
    }
    listEntry_t *listEntry;
    if (coding->study_key) {
        free(coding->study_key);
        coding->study_key = NULL;
    }
    if (coding->site_name) {
        free(coding->site_name);
        coding->site_name = NULL;
    }
    if (coding->subject_key) {
        free(coding->subject_key);
        coding->subject_key = NULL;
    }
    if (coding->form_name) {
        free(coding->form_name);
        coding->form_name = NULL;
    }
    if (coding->form_key) {
        free(coding->form_key);
        coding->form_key = NULL;
    }
    if (coding->variable) {
        free(coding->variable);
        coding->variable = NULL;
    }
    if (coding->value) {
        free(coding->value);
        coding->value = NULL;
    }
    if (coding->code) {
        free(coding->code);
        coding->code = NULL;
    }
    if (coding->coded_by) {
        free(coding->coded_by);
        coding->coded_by = NULL;
    }
    if (coding->reason) {
        free(coding->reason);
        coding->reason = NULL;
    }
    if (coding->dictionary_name) {
        free(coding->dictionary_name);
        coding->dictionary_name = NULL;
    }
    if (coding->dictionary_version) {
        free(coding->dictionary_version);
        coding->dictionary_version = NULL;
    }
    if (coding->date_coded) {
        free(coding->date_coded);
        coding->date_coded = NULL;
    }
    free(coding);
}

cJSON *coding_convertToJSON(coding_t *coding) {
    cJSON *item = cJSON_CreateObject();

    // coding->study_key
    if(coding->study_key) {
    if(cJSON_AddStringToObject(item, "studyKey", coding->study_key) == NULL) {
    goto fail; //String
    }
    }


    // coding->site_name
    if(coding->site_name) {
    if(cJSON_AddStringToObject(item, "siteName", coding->site_name) == NULL) {
    goto fail; //String
    }
    }


    // coding->site_id
    if(coding->site_id) {
    if(cJSON_AddNumberToObject(item, "siteId", coding->site_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // coding->subject_id
    if(coding->subject_id) {
    if(cJSON_AddNumberToObject(item, "subjectId", coding->subject_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // coding->subject_key
    if(coding->subject_key) {
    if(cJSON_AddStringToObject(item, "subjectKey", coding->subject_key) == NULL) {
    goto fail; //String
    }
    }


    // coding->form_id
    if(coding->form_id) {
    if(cJSON_AddNumberToObject(item, "formId", coding->form_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // coding->form_name
    if(coding->form_name) {
    if(cJSON_AddStringToObject(item, "formName", coding->form_name) == NULL) {
    goto fail; //String
    }
    }


    // coding->form_key
    if(coding->form_key) {
    if(cJSON_AddStringToObject(item, "formKey", coding->form_key) == NULL) {
    goto fail; //String
    }
    }


    // coding->revision
    if(coding->revision) {
    if(cJSON_AddNumberToObject(item, "revision", coding->revision) == NULL) {
    goto fail; //Numeric
    }
    }


    // coding->record_id
    if(coding->record_id) {
    if(cJSON_AddNumberToObject(item, "recordId", coding->record_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // coding->variable
    if(coding->variable) {
    if(cJSON_AddStringToObject(item, "variable", coding->variable) == NULL) {
    goto fail; //String
    }
    }


    // coding->value
    if(coding->value) {
    if(cJSON_AddStringToObject(item, "value", coding->value) == NULL) {
    goto fail; //String
    }
    }


    // coding->coding_id
    if(coding->coding_id) {
    if(cJSON_AddNumberToObject(item, "codingId", coding->coding_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // coding->code
    if(coding->code) {
    if(cJSON_AddStringToObject(item, "code", coding->code) == NULL) {
    goto fail; //String
    }
    }


    // coding->coded_by
    if(coding->coded_by) {
    if(cJSON_AddStringToObject(item, "codedBy", coding->coded_by) == NULL) {
    goto fail; //String
    }
    }


    // coding->reason
    if(coding->reason) {
    if(cJSON_AddStringToObject(item, "reason", coding->reason) == NULL) {
    goto fail; //String
    }
    }


    // coding->dictionary_name
    if(coding->dictionary_name) {
    if(cJSON_AddStringToObject(item, "dictionaryName", coding->dictionary_name) == NULL) {
    goto fail; //String
    }
    }


    // coding->dictionary_version
    if(coding->dictionary_version) {
    if(cJSON_AddStringToObject(item, "dictionaryVersion", coding->dictionary_version) == NULL) {
    goto fail; //String
    }
    }


    // coding->date_coded
    if(coding->date_coded) {
    if(cJSON_AddStringToObject(item, "dateCoded", coding->date_coded) == NULL) {
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

coding_t *coding_parseFromJSON(cJSON *codingJSON){

    coding_t *coding_local_var = NULL;

    // coding->study_key
    cJSON *study_key = cJSON_GetObjectItemCaseSensitive(codingJSON, "studyKey");
    if (cJSON_IsNull(study_key)) {
        study_key = NULL;
    }
    if (study_key) { 
    if(!cJSON_IsString(study_key) && !cJSON_IsNull(study_key))
    {
    goto end; //String
    }
    }

    // coding->site_name
    cJSON *site_name = cJSON_GetObjectItemCaseSensitive(codingJSON, "siteName");
    if (cJSON_IsNull(site_name)) {
        site_name = NULL;
    }
    if (site_name) { 
    if(!cJSON_IsString(site_name) && !cJSON_IsNull(site_name))
    {
    goto end; //String
    }
    }

    // coding->site_id
    cJSON *site_id = cJSON_GetObjectItemCaseSensitive(codingJSON, "siteId");
    if (cJSON_IsNull(site_id)) {
        site_id = NULL;
    }
    if (site_id) { 
    if(!cJSON_IsNumber(site_id))
    {
    goto end; //Numeric
    }
    }

    // coding->subject_id
    cJSON *subject_id = cJSON_GetObjectItemCaseSensitive(codingJSON, "subjectId");
    if (cJSON_IsNull(subject_id)) {
        subject_id = NULL;
    }
    if (subject_id) { 
    if(!cJSON_IsNumber(subject_id))
    {
    goto end; //Numeric
    }
    }

    // coding->subject_key
    cJSON *subject_key = cJSON_GetObjectItemCaseSensitive(codingJSON, "subjectKey");
    if (cJSON_IsNull(subject_key)) {
        subject_key = NULL;
    }
    if (subject_key) { 
    if(!cJSON_IsString(subject_key) && !cJSON_IsNull(subject_key))
    {
    goto end; //String
    }
    }

    // coding->form_id
    cJSON *form_id = cJSON_GetObjectItemCaseSensitive(codingJSON, "formId");
    if (cJSON_IsNull(form_id)) {
        form_id = NULL;
    }
    if (form_id) { 
    if(!cJSON_IsNumber(form_id))
    {
    goto end; //Numeric
    }
    }

    // coding->form_name
    cJSON *form_name = cJSON_GetObjectItemCaseSensitive(codingJSON, "formName");
    if (cJSON_IsNull(form_name)) {
        form_name = NULL;
    }
    if (form_name) { 
    if(!cJSON_IsString(form_name) && !cJSON_IsNull(form_name))
    {
    goto end; //String
    }
    }

    // coding->form_key
    cJSON *form_key = cJSON_GetObjectItemCaseSensitive(codingJSON, "formKey");
    if (cJSON_IsNull(form_key)) {
        form_key = NULL;
    }
    if (form_key) { 
    if(!cJSON_IsString(form_key) && !cJSON_IsNull(form_key))
    {
    goto end; //String
    }
    }

    // coding->revision
    cJSON *revision = cJSON_GetObjectItemCaseSensitive(codingJSON, "revision");
    if (cJSON_IsNull(revision)) {
        revision = NULL;
    }
    if (revision) { 
    if(!cJSON_IsNumber(revision))
    {
    goto end; //Numeric
    }
    }

    // coding->record_id
    cJSON *record_id = cJSON_GetObjectItemCaseSensitive(codingJSON, "recordId");
    if (cJSON_IsNull(record_id)) {
        record_id = NULL;
    }
    if (record_id) { 
    if(!cJSON_IsNumber(record_id))
    {
    goto end; //Numeric
    }
    }

    // coding->variable
    cJSON *variable = cJSON_GetObjectItemCaseSensitive(codingJSON, "variable");
    if (cJSON_IsNull(variable)) {
        variable = NULL;
    }
    if (variable) { 
    if(!cJSON_IsString(variable) && !cJSON_IsNull(variable))
    {
    goto end; //String
    }
    }

    // coding->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(codingJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // coding->coding_id
    cJSON *coding_id = cJSON_GetObjectItemCaseSensitive(codingJSON, "codingId");
    if (cJSON_IsNull(coding_id)) {
        coding_id = NULL;
    }
    if (coding_id) { 
    if(!cJSON_IsNumber(coding_id))
    {
    goto end; //Numeric
    }
    }

    // coding->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(codingJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // coding->coded_by
    cJSON *coded_by = cJSON_GetObjectItemCaseSensitive(codingJSON, "codedBy");
    if (cJSON_IsNull(coded_by)) {
        coded_by = NULL;
    }
    if (coded_by) { 
    if(!cJSON_IsString(coded_by) && !cJSON_IsNull(coded_by))
    {
    goto end; //String
    }
    }

    // coding->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(codingJSON, "reason");
    if (cJSON_IsNull(reason)) {
        reason = NULL;
    }
    if (reason) { 
    if(!cJSON_IsString(reason) && !cJSON_IsNull(reason))
    {
    goto end; //String
    }
    }

    // coding->dictionary_name
    cJSON *dictionary_name = cJSON_GetObjectItemCaseSensitive(codingJSON, "dictionaryName");
    if (cJSON_IsNull(dictionary_name)) {
        dictionary_name = NULL;
    }
    if (dictionary_name) { 
    if(!cJSON_IsString(dictionary_name) && !cJSON_IsNull(dictionary_name))
    {
    goto end; //String
    }
    }

    // coding->dictionary_version
    cJSON *dictionary_version = cJSON_GetObjectItemCaseSensitive(codingJSON, "dictionaryVersion");
    if (cJSON_IsNull(dictionary_version)) {
        dictionary_version = NULL;
    }
    if (dictionary_version) { 
    if(!cJSON_IsString(dictionary_version) && !cJSON_IsNull(dictionary_version))
    {
    goto end; //String
    }
    }

    // coding->date_coded
    cJSON *date_coded = cJSON_GetObjectItemCaseSensitive(codingJSON, "dateCoded");
    if (cJSON_IsNull(date_coded)) {
        date_coded = NULL;
    }
    if (date_coded) { 
    if(!cJSON_IsString(date_coded) && !cJSON_IsNull(date_coded))
    {
    goto end; //String
    }
    }


    coding_local_var = coding_create_internal (
        study_key && !cJSON_IsNull(study_key) ? strdup(study_key->valuestring) : NULL,
        site_name && !cJSON_IsNull(site_name) ? strdup(site_name->valuestring) : NULL,
        site_id ? site_id->valuedouble : 0,
        subject_id ? subject_id->valuedouble : 0,
        subject_key && !cJSON_IsNull(subject_key) ? strdup(subject_key->valuestring) : NULL,
        form_id ? form_id->valuedouble : 0,
        form_name && !cJSON_IsNull(form_name) ? strdup(form_name->valuestring) : NULL,
        form_key && !cJSON_IsNull(form_key) ? strdup(form_key->valuestring) : NULL,
        revision ? revision->valuedouble : 0,
        record_id ? record_id->valuedouble : 0,
        variable && !cJSON_IsNull(variable) ? strdup(variable->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        coding_id ? coding_id->valuedouble : 0,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        coded_by && !cJSON_IsNull(coded_by) ? strdup(coded_by->valuestring) : NULL,
        reason && !cJSON_IsNull(reason) ? strdup(reason->valuestring) : NULL,
        dictionary_name && !cJSON_IsNull(dictionary_name) ? strdup(dictionary_name->valuestring) : NULL,
        dictionary_version && !cJSON_IsNull(dictionary_version) ? strdup(dictionary_version->valuestring) : NULL,
        date_coded && !cJSON_IsNull(date_coded) ? strdup(date_coded->valuestring) : NULL
        );

    return coding_local_var;
end:
    return NULL;

}
