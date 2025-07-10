#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "form.h"



static form_t *form_create_internal(
    char *study_key,
    int form_id,
    char *form_key,
    char *form_name,
    char *form_type,
    int revision,
    int embedded_log,
    int enforce_ownership,
    int user_agreement,
    int subject_record_report,
    int unscheduled_visit,
    int other_forms,
    int epro_form,
    int allow_copy,
    int disabled,
    char *date_created,
    char *date_modified
    ) {
    form_t *form_local_var = malloc(sizeof(form_t));
    if (!form_local_var) {
        return NULL;
    }
    form_local_var->study_key = study_key;
    form_local_var->form_id = form_id;
    form_local_var->form_key = form_key;
    form_local_var->form_name = form_name;
    form_local_var->form_type = form_type;
    form_local_var->revision = revision;
    form_local_var->embedded_log = embedded_log;
    form_local_var->enforce_ownership = enforce_ownership;
    form_local_var->user_agreement = user_agreement;
    form_local_var->subject_record_report = subject_record_report;
    form_local_var->unscheduled_visit = unscheduled_visit;
    form_local_var->other_forms = other_forms;
    form_local_var->epro_form = epro_form;
    form_local_var->allow_copy = allow_copy;
    form_local_var->disabled = disabled;
    form_local_var->date_created = date_created;
    form_local_var->date_modified = date_modified;

    form_local_var->_library_owned = 1;
    return form_local_var;
}

__attribute__((deprecated)) form_t *form_create(
    char *study_key,
    int form_id,
    char *form_key,
    char *form_name,
    char *form_type,
    int revision,
    int embedded_log,
    int enforce_ownership,
    int user_agreement,
    int subject_record_report,
    int unscheduled_visit,
    int other_forms,
    int epro_form,
    int allow_copy,
    int disabled,
    char *date_created,
    char *date_modified
    ) {
    return form_create_internal (
        study_key,
        form_id,
        form_key,
        form_name,
        form_type,
        revision,
        embedded_log,
        enforce_ownership,
        user_agreement,
        subject_record_report,
        unscheduled_visit,
        other_forms,
        epro_form,
        allow_copy,
        disabled,
        date_created,
        date_modified
        );
}

void form_free(form_t *form) {
    if(NULL == form){
        return ;
    }
    if(form->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "form_free");
        return ;
    }
    listEntry_t *listEntry;
    if (form->study_key) {
        free(form->study_key);
        form->study_key = NULL;
    }
    if (form->form_key) {
        free(form->form_key);
        form->form_key = NULL;
    }
    if (form->form_name) {
        free(form->form_name);
        form->form_name = NULL;
    }
    if (form->form_type) {
        free(form->form_type);
        form->form_type = NULL;
    }
    if (form->date_created) {
        free(form->date_created);
        form->date_created = NULL;
    }
    if (form->date_modified) {
        free(form->date_modified);
        form->date_modified = NULL;
    }
    free(form);
}

cJSON *form_convertToJSON(form_t *form) {
    cJSON *item = cJSON_CreateObject();

    // form->study_key
    if(form->study_key) {
    if(cJSON_AddStringToObject(item, "studyKey", form->study_key) == NULL) {
    goto fail; //String
    }
    }


    // form->form_id
    if(form->form_id) {
    if(cJSON_AddNumberToObject(item, "formId", form->form_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // form->form_key
    if(form->form_key) {
    if(cJSON_AddStringToObject(item, "formKey", form->form_key) == NULL) {
    goto fail; //String
    }
    }


    // form->form_name
    if(form->form_name) {
    if(cJSON_AddStringToObject(item, "formName", form->form_name) == NULL) {
    goto fail; //String
    }
    }


    // form->form_type
    if(form->form_type) {
    if(cJSON_AddStringToObject(item, "formType", form->form_type) == NULL) {
    goto fail; //String
    }
    }


    // form->revision
    if(form->revision) {
    if(cJSON_AddNumberToObject(item, "revision", form->revision) == NULL) {
    goto fail; //Numeric
    }
    }


    // form->embedded_log
    if(form->embedded_log) {
    if(cJSON_AddBoolToObject(item, "embeddedLog", form->embedded_log) == NULL) {
    goto fail; //Bool
    }
    }


    // form->enforce_ownership
    if(form->enforce_ownership) {
    if(cJSON_AddBoolToObject(item, "enforceOwnership", form->enforce_ownership) == NULL) {
    goto fail; //Bool
    }
    }


    // form->user_agreement
    if(form->user_agreement) {
    if(cJSON_AddBoolToObject(item, "userAgreement", form->user_agreement) == NULL) {
    goto fail; //Bool
    }
    }


    // form->subject_record_report
    if(form->subject_record_report) {
    if(cJSON_AddBoolToObject(item, "subjectRecordReport", form->subject_record_report) == NULL) {
    goto fail; //Bool
    }
    }


    // form->unscheduled_visit
    if(form->unscheduled_visit) {
    if(cJSON_AddBoolToObject(item, "unscheduledVisit", form->unscheduled_visit) == NULL) {
    goto fail; //Bool
    }
    }


    // form->other_forms
    if(form->other_forms) {
    if(cJSON_AddBoolToObject(item, "otherForms", form->other_forms) == NULL) {
    goto fail; //Bool
    }
    }


    // form->epro_form
    if(form->epro_form) {
    if(cJSON_AddBoolToObject(item, "eproForm", form->epro_form) == NULL) {
    goto fail; //Bool
    }
    }


    // form->allow_copy
    if(form->allow_copy) {
    if(cJSON_AddBoolToObject(item, "allowCopy", form->allow_copy) == NULL) {
    goto fail; //Bool
    }
    }


    // form->disabled
    if(form->disabled) {
    if(cJSON_AddBoolToObject(item, "disabled", form->disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // form->date_created
    if(form->date_created) {
    if(cJSON_AddStringToObject(item, "dateCreated", form->date_created) == NULL) {
    goto fail; //String
    }
    }


    // form->date_modified
    if(form->date_modified) {
    if(cJSON_AddStringToObject(item, "dateModified", form->date_modified) == NULL) {
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

form_t *form_parseFromJSON(cJSON *formJSON){

    form_t *form_local_var = NULL;

    // form->study_key
    cJSON *study_key = cJSON_GetObjectItemCaseSensitive(formJSON, "studyKey");
    if (cJSON_IsNull(study_key)) {
        study_key = NULL;
    }
    if (study_key) { 
    if(!cJSON_IsString(study_key) && !cJSON_IsNull(study_key))
    {
    goto end; //String
    }
    }

    // form->form_id
    cJSON *form_id = cJSON_GetObjectItemCaseSensitive(formJSON, "formId");
    if (cJSON_IsNull(form_id)) {
        form_id = NULL;
    }
    if (form_id) { 
    if(!cJSON_IsNumber(form_id))
    {
    goto end; //Numeric
    }
    }

    // form->form_key
    cJSON *form_key = cJSON_GetObjectItemCaseSensitive(formJSON, "formKey");
    if (cJSON_IsNull(form_key)) {
        form_key = NULL;
    }
    if (form_key) { 
    if(!cJSON_IsString(form_key) && !cJSON_IsNull(form_key))
    {
    goto end; //String
    }
    }

    // form->form_name
    cJSON *form_name = cJSON_GetObjectItemCaseSensitive(formJSON, "formName");
    if (cJSON_IsNull(form_name)) {
        form_name = NULL;
    }
    if (form_name) { 
    if(!cJSON_IsString(form_name) && !cJSON_IsNull(form_name))
    {
    goto end; //String
    }
    }

    // form->form_type
    cJSON *form_type = cJSON_GetObjectItemCaseSensitive(formJSON, "formType");
    if (cJSON_IsNull(form_type)) {
        form_type = NULL;
    }
    if (form_type) { 
    if(!cJSON_IsString(form_type) && !cJSON_IsNull(form_type))
    {
    goto end; //String
    }
    }

    // form->revision
    cJSON *revision = cJSON_GetObjectItemCaseSensitive(formJSON, "revision");
    if (cJSON_IsNull(revision)) {
        revision = NULL;
    }
    if (revision) { 
    if(!cJSON_IsNumber(revision))
    {
    goto end; //Numeric
    }
    }

    // form->embedded_log
    cJSON *embedded_log = cJSON_GetObjectItemCaseSensitive(formJSON, "embeddedLog");
    if (cJSON_IsNull(embedded_log)) {
        embedded_log = NULL;
    }
    if (embedded_log) { 
    if(!cJSON_IsBool(embedded_log))
    {
    goto end; //Bool
    }
    }

    // form->enforce_ownership
    cJSON *enforce_ownership = cJSON_GetObjectItemCaseSensitive(formJSON, "enforceOwnership");
    if (cJSON_IsNull(enforce_ownership)) {
        enforce_ownership = NULL;
    }
    if (enforce_ownership) { 
    if(!cJSON_IsBool(enforce_ownership))
    {
    goto end; //Bool
    }
    }

    // form->user_agreement
    cJSON *user_agreement = cJSON_GetObjectItemCaseSensitive(formJSON, "userAgreement");
    if (cJSON_IsNull(user_agreement)) {
        user_agreement = NULL;
    }
    if (user_agreement) { 
    if(!cJSON_IsBool(user_agreement))
    {
    goto end; //Bool
    }
    }

    // form->subject_record_report
    cJSON *subject_record_report = cJSON_GetObjectItemCaseSensitive(formJSON, "subjectRecordReport");
    if (cJSON_IsNull(subject_record_report)) {
        subject_record_report = NULL;
    }
    if (subject_record_report) { 
    if(!cJSON_IsBool(subject_record_report))
    {
    goto end; //Bool
    }
    }

    // form->unscheduled_visit
    cJSON *unscheduled_visit = cJSON_GetObjectItemCaseSensitive(formJSON, "unscheduledVisit");
    if (cJSON_IsNull(unscheduled_visit)) {
        unscheduled_visit = NULL;
    }
    if (unscheduled_visit) { 
    if(!cJSON_IsBool(unscheduled_visit))
    {
    goto end; //Bool
    }
    }

    // form->other_forms
    cJSON *other_forms = cJSON_GetObjectItemCaseSensitive(formJSON, "otherForms");
    if (cJSON_IsNull(other_forms)) {
        other_forms = NULL;
    }
    if (other_forms) { 
    if(!cJSON_IsBool(other_forms))
    {
    goto end; //Bool
    }
    }

    // form->epro_form
    cJSON *epro_form = cJSON_GetObjectItemCaseSensitive(formJSON, "eproForm");
    if (cJSON_IsNull(epro_form)) {
        epro_form = NULL;
    }
    if (epro_form) { 
    if(!cJSON_IsBool(epro_form))
    {
    goto end; //Bool
    }
    }

    // form->allow_copy
    cJSON *allow_copy = cJSON_GetObjectItemCaseSensitive(formJSON, "allowCopy");
    if (cJSON_IsNull(allow_copy)) {
        allow_copy = NULL;
    }
    if (allow_copy) { 
    if(!cJSON_IsBool(allow_copy))
    {
    goto end; //Bool
    }
    }

    // form->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(formJSON, "disabled");
    if (cJSON_IsNull(disabled)) {
        disabled = NULL;
    }
    if (disabled) { 
    if(!cJSON_IsBool(disabled))
    {
    goto end; //Bool
    }
    }

    // form->date_created
    cJSON *date_created = cJSON_GetObjectItemCaseSensitive(formJSON, "dateCreated");
    if (cJSON_IsNull(date_created)) {
        date_created = NULL;
    }
    if (date_created) { 
    if(!cJSON_IsString(date_created) && !cJSON_IsNull(date_created))
    {
    goto end; //String
    }
    }

    // form->date_modified
    cJSON *date_modified = cJSON_GetObjectItemCaseSensitive(formJSON, "dateModified");
    if (cJSON_IsNull(date_modified)) {
        date_modified = NULL;
    }
    if (date_modified) { 
    if(!cJSON_IsString(date_modified) && !cJSON_IsNull(date_modified))
    {
    goto end; //String
    }
    }


    form_local_var = form_create_internal (
        study_key && !cJSON_IsNull(study_key) ? strdup(study_key->valuestring) : NULL,
        form_id ? form_id->valuedouble : 0,
        form_key && !cJSON_IsNull(form_key) ? strdup(form_key->valuestring) : NULL,
        form_name && !cJSON_IsNull(form_name) ? strdup(form_name->valuestring) : NULL,
        form_type && !cJSON_IsNull(form_type) ? strdup(form_type->valuestring) : NULL,
        revision ? revision->valuedouble : 0,
        embedded_log ? embedded_log->valueint : 0,
        enforce_ownership ? enforce_ownership->valueint : 0,
        user_agreement ? user_agreement->valueint : 0,
        subject_record_report ? subject_record_report->valueint : 0,
        unscheduled_visit ? unscheduled_visit->valueint : 0,
        other_forms ? other_forms->valueint : 0,
        epro_form ? epro_form->valueint : 0,
        allow_copy ? allow_copy->valueint : 0,
        disabled ? disabled->valueint : 0,
        date_created && !cJSON_IsNull(date_created) ? strdup(date_created->valuestring) : NULL,
        date_modified && !cJSON_IsNull(date_modified) ? strdup(date_modified->valuestring) : NULL
        );

    return form_local_var;
end:
    return NULL;

}
