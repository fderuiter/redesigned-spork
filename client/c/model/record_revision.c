#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "record_revision.h"



static record_revision_t *record_revision_create_internal(
    char *study_key,
    int record_revision_id,
    int record_id,
    char *record_oid,
    int record_revision,
    int data_revision,
    char *record_status,
    int subject_id,
    char *subject_oid,
    char *subject_key,
    int site_id,
    char *form_key,
    int interval_id,
    char *role,
    char *user,
    char *reason_for_change,
    int deleted,
    char *date_created
    ) {
    record_revision_t *record_revision_local_var = malloc(sizeof(record_revision_t));
    if (!record_revision_local_var) {
        return NULL;
    }
    record_revision_local_var->study_key = study_key;
    record_revision_local_var->record_revision_id = record_revision_id;
    record_revision_local_var->record_id = record_id;
    record_revision_local_var->record_oid = record_oid;
    record_revision_local_var->record_revision = record_revision;
    record_revision_local_var->data_revision = data_revision;
    record_revision_local_var->record_status = record_status;
    record_revision_local_var->subject_id = subject_id;
    record_revision_local_var->subject_oid = subject_oid;
    record_revision_local_var->subject_key = subject_key;
    record_revision_local_var->site_id = site_id;
    record_revision_local_var->form_key = form_key;
    record_revision_local_var->interval_id = interval_id;
    record_revision_local_var->role = role;
    record_revision_local_var->user = user;
    record_revision_local_var->reason_for_change = reason_for_change;
    record_revision_local_var->deleted = deleted;
    record_revision_local_var->date_created = date_created;

    record_revision_local_var->_library_owned = 1;
    return record_revision_local_var;
}

__attribute__((deprecated)) record_revision_t *record_revision_create(
    char *study_key,
    int record_revision_id,
    int record_id,
    char *record_oid,
    int record_revision,
    int data_revision,
    char *record_status,
    int subject_id,
    char *subject_oid,
    char *subject_key,
    int site_id,
    char *form_key,
    int interval_id,
    char *role,
    char *user,
    char *reason_for_change,
    int deleted,
    char *date_created
    ) {
    return record_revision_create_internal (
        study_key,
        record_revision_id,
        record_id,
        record_oid,
        record_revision,
        data_revision,
        record_status,
        subject_id,
        subject_oid,
        subject_key,
        site_id,
        form_key,
        interval_id,
        role,
        user,
        reason_for_change,
        deleted,
        date_created
        );
}

void record_revision_free(record_revision_t *record_revision) {
    if(NULL == record_revision){
        return ;
    }
    if(record_revision->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "record_revision_free");
        return ;
    }
    listEntry_t *listEntry;
    if (record_revision->study_key) {
        free(record_revision->study_key);
        record_revision->study_key = NULL;
    }
    if (record_revision->record_oid) {
        free(record_revision->record_oid);
        record_revision->record_oid = NULL;
    }
    if (record_revision->record_status) {
        free(record_revision->record_status);
        record_revision->record_status = NULL;
    }
    if (record_revision->subject_oid) {
        free(record_revision->subject_oid);
        record_revision->subject_oid = NULL;
    }
    if (record_revision->subject_key) {
        free(record_revision->subject_key);
        record_revision->subject_key = NULL;
    }
    if (record_revision->form_key) {
        free(record_revision->form_key);
        record_revision->form_key = NULL;
    }
    if (record_revision->role) {
        free(record_revision->role);
        record_revision->role = NULL;
    }
    if (record_revision->user) {
        free(record_revision->user);
        record_revision->user = NULL;
    }
    if (record_revision->reason_for_change) {
        free(record_revision->reason_for_change);
        record_revision->reason_for_change = NULL;
    }
    if (record_revision->date_created) {
        free(record_revision->date_created);
        record_revision->date_created = NULL;
    }
    free(record_revision);
}

cJSON *record_revision_convertToJSON(record_revision_t *record_revision) {
    cJSON *item = cJSON_CreateObject();

    // record_revision->study_key
    if(record_revision->study_key) {
    if(cJSON_AddStringToObject(item, "studyKey", record_revision->study_key) == NULL) {
    goto fail; //String
    }
    }


    // record_revision->record_revision_id
    if(record_revision->record_revision_id) {
    if(cJSON_AddNumberToObject(item, "recordRevisionId", record_revision->record_revision_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // record_revision->record_id
    if(record_revision->record_id) {
    if(cJSON_AddNumberToObject(item, "recordId", record_revision->record_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // record_revision->record_oid
    if(record_revision->record_oid) {
    if(cJSON_AddStringToObject(item, "recordOid", record_revision->record_oid) == NULL) {
    goto fail; //String
    }
    }


    // record_revision->record_revision
    if(record_revision->record_revision) {
    if(cJSON_AddNumberToObject(item, "recordRevision", record_revision->record_revision) == NULL) {
    goto fail; //Numeric
    }
    }


    // record_revision->data_revision
    if(record_revision->data_revision) {
    if(cJSON_AddNumberToObject(item, "dataRevision", record_revision->data_revision) == NULL) {
    goto fail; //Numeric
    }
    }


    // record_revision->record_status
    if(record_revision->record_status) {
    if(cJSON_AddStringToObject(item, "recordStatus", record_revision->record_status) == NULL) {
    goto fail; //String
    }
    }


    // record_revision->subject_id
    if(record_revision->subject_id) {
    if(cJSON_AddNumberToObject(item, "subjectId", record_revision->subject_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // record_revision->subject_oid
    if(record_revision->subject_oid) {
    if(cJSON_AddStringToObject(item, "subjectOid", record_revision->subject_oid) == NULL) {
    goto fail; //String
    }
    }


    // record_revision->subject_key
    if(record_revision->subject_key) {
    if(cJSON_AddStringToObject(item, "subjectKey", record_revision->subject_key) == NULL) {
    goto fail; //String
    }
    }


    // record_revision->site_id
    if(record_revision->site_id) {
    if(cJSON_AddNumberToObject(item, "siteId", record_revision->site_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // record_revision->form_key
    if(record_revision->form_key) {
    if(cJSON_AddStringToObject(item, "formKey", record_revision->form_key) == NULL) {
    goto fail; //String
    }
    }


    // record_revision->interval_id
    if(record_revision->interval_id) {
    if(cJSON_AddNumberToObject(item, "intervalId", record_revision->interval_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // record_revision->role
    if(record_revision->role) {
    if(cJSON_AddStringToObject(item, "role", record_revision->role) == NULL) {
    goto fail; //String
    }
    }


    // record_revision->user
    if(record_revision->user) {
    if(cJSON_AddStringToObject(item, "user", record_revision->user) == NULL) {
    goto fail; //String
    }
    }


    // record_revision->reason_for_change
    if(record_revision->reason_for_change) {
    if(cJSON_AddStringToObject(item, "reasonForChange", record_revision->reason_for_change) == NULL) {
    goto fail; //String
    }
    }


    // record_revision->deleted
    if(record_revision->deleted) {
    if(cJSON_AddBoolToObject(item, "deleted", record_revision->deleted) == NULL) {
    goto fail; //Bool
    }
    }


    // record_revision->date_created
    if(record_revision->date_created) {
    if(cJSON_AddStringToObject(item, "dateCreated", record_revision->date_created) == NULL) {
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

record_revision_t *record_revision_parseFromJSON(cJSON *record_revisionJSON){

    record_revision_t *record_revision_local_var = NULL;

    // record_revision->study_key
    cJSON *study_key = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "studyKey");
    if (cJSON_IsNull(study_key)) {
        study_key = NULL;
    }
    if (study_key) { 
    if(!cJSON_IsString(study_key) && !cJSON_IsNull(study_key))
    {
    goto end; //String
    }
    }

    // record_revision->record_revision_id
    cJSON *record_revision_id = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "recordRevisionId");
    if (cJSON_IsNull(record_revision_id)) {
        record_revision_id = NULL;
    }
    if (record_revision_id) { 
    if(!cJSON_IsNumber(record_revision_id))
    {
    goto end; //Numeric
    }
    }

    // record_revision->record_id
    cJSON *record_id = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "recordId");
    if (cJSON_IsNull(record_id)) {
        record_id = NULL;
    }
    if (record_id) { 
    if(!cJSON_IsNumber(record_id))
    {
    goto end; //Numeric
    }
    }

    // record_revision->record_oid
    cJSON *record_oid = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "recordOid");
    if (cJSON_IsNull(record_oid)) {
        record_oid = NULL;
    }
    if (record_oid) { 
    if(!cJSON_IsString(record_oid) && !cJSON_IsNull(record_oid))
    {
    goto end; //String
    }
    }

    // record_revision->record_revision
    cJSON *record_revision = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "recordRevision");
    if (cJSON_IsNull(record_revision)) {
        record_revision = NULL;
    }
    if (record_revision) { 
    if(!cJSON_IsNumber(record_revision))
    {
    goto end; //Numeric
    }
    }

    // record_revision->data_revision
    cJSON *data_revision = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "dataRevision");
    if (cJSON_IsNull(data_revision)) {
        data_revision = NULL;
    }
    if (data_revision) { 
    if(!cJSON_IsNumber(data_revision))
    {
    goto end; //Numeric
    }
    }

    // record_revision->record_status
    cJSON *record_status = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "recordStatus");
    if (cJSON_IsNull(record_status)) {
        record_status = NULL;
    }
    if (record_status) { 
    if(!cJSON_IsString(record_status) && !cJSON_IsNull(record_status))
    {
    goto end; //String
    }
    }

    // record_revision->subject_id
    cJSON *subject_id = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "subjectId");
    if (cJSON_IsNull(subject_id)) {
        subject_id = NULL;
    }
    if (subject_id) { 
    if(!cJSON_IsNumber(subject_id))
    {
    goto end; //Numeric
    }
    }

    // record_revision->subject_oid
    cJSON *subject_oid = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "subjectOid");
    if (cJSON_IsNull(subject_oid)) {
        subject_oid = NULL;
    }
    if (subject_oid) { 
    if(!cJSON_IsString(subject_oid) && !cJSON_IsNull(subject_oid))
    {
    goto end; //String
    }
    }

    // record_revision->subject_key
    cJSON *subject_key = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "subjectKey");
    if (cJSON_IsNull(subject_key)) {
        subject_key = NULL;
    }
    if (subject_key) { 
    if(!cJSON_IsString(subject_key) && !cJSON_IsNull(subject_key))
    {
    goto end; //String
    }
    }

    // record_revision->site_id
    cJSON *site_id = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "siteId");
    if (cJSON_IsNull(site_id)) {
        site_id = NULL;
    }
    if (site_id) { 
    if(!cJSON_IsNumber(site_id))
    {
    goto end; //Numeric
    }
    }

    // record_revision->form_key
    cJSON *form_key = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "formKey");
    if (cJSON_IsNull(form_key)) {
        form_key = NULL;
    }
    if (form_key) { 
    if(!cJSON_IsString(form_key) && !cJSON_IsNull(form_key))
    {
    goto end; //String
    }
    }

    // record_revision->interval_id
    cJSON *interval_id = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "intervalId");
    if (cJSON_IsNull(interval_id)) {
        interval_id = NULL;
    }
    if (interval_id) { 
    if(!cJSON_IsNumber(interval_id))
    {
    goto end; //Numeric
    }
    }

    // record_revision->role
    cJSON *role = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "role");
    if (cJSON_IsNull(role)) {
        role = NULL;
    }
    if (role) { 
    if(!cJSON_IsString(role) && !cJSON_IsNull(role))
    {
    goto end; //String
    }
    }

    // record_revision->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "user");
    if (cJSON_IsNull(user)) {
        user = NULL;
    }
    if (user) { 
    if(!cJSON_IsString(user) && !cJSON_IsNull(user))
    {
    goto end; //String
    }
    }

    // record_revision->reason_for_change
    cJSON *reason_for_change = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "reasonForChange");
    if (cJSON_IsNull(reason_for_change)) {
        reason_for_change = NULL;
    }
    if (reason_for_change) { 
    if(!cJSON_IsString(reason_for_change) && !cJSON_IsNull(reason_for_change))
    {
    goto end; //String
    }
    }

    // record_revision->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "deleted");
    if (cJSON_IsNull(deleted)) {
        deleted = NULL;
    }
    if (deleted) { 
    if(!cJSON_IsBool(deleted))
    {
    goto end; //Bool
    }
    }

    // record_revision->date_created
    cJSON *date_created = cJSON_GetObjectItemCaseSensitive(record_revisionJSON, "dateCreated");
    if (cJSON_IsNull(date_created)) {
        date_created = NULL;
    }
    if (date_created) { 
    if(!cJSON_IsString(date_created) && !cJSON_IsNull(date_created))
    {
    goto end; //String
    }
    }


    record_revision_local_var = record_revision_create_internal (
        study_key && !cJSON_IsNull(study_key) ? strdup(study_key->valuestring) : NULL,
        record_revision_id ? record_revision_id->valuedouble : 0,
        record_id ? record_id->valuedouble : 0,
        record_oid && !cJSON_IsNull(record_oid) ? strdup(record_oid->valuestring) : NULL,
        record_revision ? record_revision->valuedouble : 0,
        data_revision ? data_revision->valuedouble : 0,
        record_status && !cJSON_IsNull(record_status) ? strdup(record_status->valuestring) : NULL,
        subject_id ? subject_id->valuedouble : 0,
        subject_oid && !cJSON_IsNull(subject_oid) ? strdup(subject_oid->valuestring) : NULL,
        subject_key && !cJSON_IsNull(subject_key) ? strdup(subject_key->valuestring) : NULL,
        site_id ? site_id->valuedouble : 0,
        form_key && !cJSON_IsNull(form_key) ? strdup(form_key->valuestring) : NULL,
        interval_id ? interval_id->valuedouble : 0,
        role && !cJSON_IsNull(role) ? strdup(role->valuestring) : NULL,
        user && !cJSON_IsNull(user) ? strdup(user->valuestring) : NULL,
        reason_for_change && !cJSON_IsNull(reason_for_change) ? strdup(reason_for_change->valuestring) : NULL,
        deleted ? deleted->valueint : 0,
        date_created && !cJSON_IsNull(date_created) ? strdup(date_created->valuestring) : NULL
        );

    return record_revision_local_var;
end:
    return NULL;

}
