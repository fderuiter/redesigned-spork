#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "visit.h"



static visit_t *visit_create_internal(
    char *study_key,
    int visit_id,
    int interval_id,
    char *interval_name,
    int subject_id,
    char *subject_key,
    char *start_date,
    char *end_date,
    char *due_date,
    char *visit_date,
    char *visit_date_form,
    char *visit_date_question,
    int deleted,
    char *date_created,
    char *date_modified
    ) {
    visit_t *visit_local_var = malloc(sizeof(visit_t));
    if (!visit_local_var) {
        return NULL;
    }
    visit_local_var->study_key = study_key;
    visit_local_var->visit_id = visit_id;
    visit_local_var->interval_id = interval_id;
    visit_local_var->interval_name = interval_name;
    visit_local_var->subject_id = subject_id;
    visit_local_var->subject_key = subject_key;
    visit_local_var->start_date = start_date;
    visit_local_var->end_date = end_date;
    visit_local_var->due_date = due_date;
    visit_local_var->visit_date = visit_date;
    visit_local_var->visit_date_form = visit_date_form;
    visit_local_var->visit_date_question = visit_date_question;
    visit_local_var->deleted = deleted;
    visit_local_var->date_created = date_created;
    visit_local_var->date_modified = date_modified;

    visit_local_var->_library_owned = 1;
    return visit_local_var;
}

__attribute__((deprecated)) visit_t *visit_create(
    char *study_key,
    int visit_id,
    int interval_id,
    char *interval_name,
    int subject_id,
    char *subject_key,
    char *start_date,
    char *end_date,
    char *due_date,
    char *visit_date,
    char *visit_date_form,
    char *visit_date_question,
    int deleted,
    char *date_created,
    char *date_modified
    ) {
    return visit_create_internal (
        study_key,
        visit_id,
        interval_id,
        interval_name,
        subject_id,
        subject_key,
        start_date,
        end_date,
        due_date,
        visit_date,
        visit_date_form,
        visit_date_question,
        deleted,
        date_created,
        date_modified
        );
}

void visit_free(visit_t *visit) {
    if(NULL == visit){
        return ;
    }
    if(visit->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "visit_free");
        return ;
    }
    listEntry_t *listEntry;
    if (visit->study_key) {
        free(visit->study_key);
        visit->study_key = NULL;
    }
    if (visit->interval_name) {
        free(visit->interval_name);
        visit->interval_name = NULL;
    }
    if (visit->subject_key) {
        free(visit->subject_key);
        visit->subject_key = NULL;
    }
    if (visit->start_date) {
        free(visit->start_date);
        visit->start_date = NULL;
    }
    if (visit->end_date) {
        free(visit->end_date);
        visit->end_date = NULL;
    }
    if (visit->due_date) {
        free(visit->due_date);
        visit->due_date = NULL;
    }
    if (visit->visit_date) {
        free(visit->visit_date);
        visit->visit_date = NULL;
    }
    if (visit->visit_date_form) {
        free(visit->visit_date_form);
        visit->visit_date_form = NULL;
    }
    if (visit->visit_date_question) {
        free(visit->visit_date_question);
        visit->visit_date_question = NULL;
    }
    if (visit->date_created) {
        free(visit->date_created);
        visit->date_created = NULL;
    }
    if (visit->date_modified) {
        free(visit->date_modified);
        visit->date_modified = NULL;
    }
    free(visit);
}

cJSON *visit_convertToJSON(visit_t *visit) {
    cJSON *item = cJSON_CreateObject();

    // visit->study_key
    if(visit->study_key) {
    if(cJSON_AddStringToObject(item, "studyKey", visit->study_key) == NULL) {
    goto fail; //String
    }
    }


    // visit->visit_id
    if(visit->visit_id) {
    if(cJSON_AddNumberToObject(item, "visitId", visit->visit_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // visit->interval_id
    if(visit->interval_id) {
    if(cJSON_AddNumberToObject(item, "intervalId", visit->interval_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // visit->interval_name
    if(visit->interval_name) {
    if(cJSON_AddStringToObject(item, "intervalName", visit->interval_name) == NULL) {
    goto fail; //String
    }
    }


    // visit->subject_id
    if(visit->subject_id) {
    if(cJSON_AddNumberToObject(item, "subjectId", visit->subject_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // visit->subject_key
    if(visit->subject_key) {
    if(cJSON_AddStringToObject(item, "subjectKey", visit->subject_key) == NULL) {
    goto fail; //String
    }
    }


    // visit->start_date
    if(visit->start_date) {
    if(cJSON_AddStringToObject(item, "startDate", visit->start_date) == NULL) {
    goto fail; //String
    }
    }


    // visit->end_date
    if(visit->end_date) {
    if(cJSON_AddStringToObject(item, "endDate", visit->end_date) == NULL) {
    goto fail; //String
    }
    }


    // visit->due_date
    if(visit->due_date) {
    if(cJSON_AddStringToObject(item, "dueDate", visit->due_date) == NULL) {
    goto fail; //String
    }
    }


    // visit->visit_date
    if(visit->visit_date) {
    if(cJSON_AddStringToObject(item, "visitDate", visit->visit_date) == NULL) {
    goto fail; //String
    }
    }


    // visit->visit_date_form
    if(visit->visit_date_form) {
    if(cJSON_AddStringToObject(item, "visitDateForm", visit->visit_date_form) == NULL) {
    goto fail; //String
    }
    }


    // visit->visit_date_question
    if(visit->visit_date_question) {
    if(cJSON_AddStringToObject(item, "visitDateQuestion", visit->visit_date_question) == NULL) {
    goto fail; //String
    }
    }


    // visit->deleted
    if(visit->deleted) {
    if(cJSON_AddBoolToObject(item, "deleted", visit->deleted) == NULL) {
    goto fail; //Bool
    }
    }


    // visit->date_created
    if(visit->date_created) {
    if(cJSON_AddStringToObject(item, "dateCreated", visit->date_created) == NULL) {
    goto fail; //String
    }
    }


    // visit->date_modified
    if(visit->date_modified) {
    if(cJSON_AddStringToObject(item, "dateModified", visit->date_modified) == NULL) {
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

visit_t *visit_parseFromJSON(cJSON *visitJSON){

    visit_t *visit_local_var = NULL;

    // visit->study_key
    cJSON *study_key = cJSON_GetObjectItemCaseSensitive(visitJSON, "studyKey");
    if (cJSON_IsNull(study_key)) {
        study_key = NULL;
    }
    if (study_key) { 
    if(!cJSON_IsString(study_key) && !cJSON_IsNull(study_key))
    {
    goto end; //String
    }
    }

    // visit->visit_id
    cJSON *visit_id = cJSON_GetObjectItemCaseSensitive(visitJSON, "visitId");
    if (cJSON_IsNull(visit_id)) {
        visit_id = NULL;
    }
    if (visit_id) { 
    if(!cJSON_IsNumber(visit_id))
    {
    goto end; //Numeric
    }
    }

    // visit->interval_id
    cJSON *interval_id = cJSON_GetObjectItemCaseSensitive(visitJSON, "intervalId");
    if (cJSON_IsNull(interval_id)) {
        interval_id = NULL;
    }
    if (interval_id) { 
    if(!cJSON_IsNumber(interval_id))
    {
    goto end; //Numeric
    }
    }

    // visit->interval_name
    cJSON *interval_name = cJSON_GetObjectItemCaseSensitive(visitJSON, "intervalName");
    if (cJSON_IsNull(interval_name)) {
        interval_name = NULL;
    }
    if (interval_name) { 
    if(!cJSON_IsString(interval_name) && !cJSON_IsNull(interval_name))
    {
    goto end; //String
    }
    }

    // visit->subject_id
    cJSON *subject_id = cJSON_GetObjectItemCaseSensitive(visitJSON, "subjectId");
    if (cJSON_IsNull(subject_id)) {
        subject_id = NULL;
    }
    if (subject_id) { 
    if(!cJSON_IsNumber(subject_id))
    {
    goto end; //Numeric
    }
    }

    // visit->subject_key
    cJSON *subject_key = cJSON_GetObjectItemCaseSensitive(visitJSON, "subjectKey");
    if (cJSON_IsNull(subject_key)) {
        subject_key = NULL;
    }
    if (subject_key) { 
    if(!cJSON_IsString(subject_key) && !cJSON_IsNull(subject_key))
    {
    goto end; //String
    }
    }

    // visit->start_date
    cJSON *start_date = cJSON_GetObjectItemCaseSensitive(visitJSON, "startDate");
    if (cJSON_IsNull(start_date)) {
        start_date = NULL;
    }
    if (start_date) { 
    if(!cJSON_IsString(start_date) && !cJSON_IsNull(start_date))
    {
    goto end; //String
    }
    }

    // visit->end_date
    cJSON *end_date = cJSON_GetObjectItemCaseSensitive(visitJSON, "endDate");
    if (cJSON_IsNull(end_date)) {
        end_date = NULL;
    }
    if (end_date) { 
    if(!cJSON_IsString(end_date) && !cJSON_IsNull(end_date))
    {
    goto end; //String
    }
    }

    // visit->due_date
    cJSON *due_date = cJSON_GetObjectItemCaseSensitive(visitJSON, "dueDate");
    if (cJSON_IsNull(due_date)) {
        due_date = NULL;
    }
    if (due_date) { 
    if(!cJSON_IsString(due_date) && !cJSON_IsNull(due_date))
    {
    goto end; //String
    }
    }

    // visit->visit_date
    cJSON *visit_date = cJSON_GetObjectItemCaseSensitive(visitJSON, "visitDate");
    if (cJSON_IsNull(visit_date)) {
        visit_date = NULL;
    }
    if (visit_date) { 
    if(!cJSON_IsString(visit_date) && !cJSON_IsNull(visit_date))
    {
    goto end; //String
    }
    }

    // visit->visit_date_form
    cJSON *visit_date_form = cJSON_GetObjectItemCaseSensitive(visitJSON, "visitDateForm");
    if (cJSON_IsNull(visit_date_form)) {
        visit_date_form = NULL;
    }
    if (visit_date_form) { 
    if(!cJSON_IsString(visit_date_form) && !cJSON_IsNull(visit_date_form))
    {
    goto end; //String
    }
    }

    // visit->visit_date_question
    cJSON *visit_date_question = cJSON_GetObjectItemCaseSensitive(visitJSON, "visitDateQuestion");
    if (cJSON_IsNull(visit_date_question)) {
        visit_date_question = NULL;
    }
    if (visit_date_question) { 
    if(!cJSON_IsString(visit_date_question) && !cJSON_IsNull(visit_date_question))
    {
    goto end; //String
    }
    }

    // visit->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(visitJSON, "deleted");
    if (cJSON_IsNull(deleted)) {
        deleted = NULL;
    }
    if (deleted) { 
    if(!cJSON_IsBool(deleted))
    {
    goto end; //Bool
    }
    }

    // visit->date_created
    cJSON *date_created = cJSON_GetObjectItemCaseSensitive(visitJSON, "dateCreated");
    if (cJSON_IsNull(date_created)) {
        date_created = NULL;
    }
    if (date_created) { 
    if(!cJSON_IsString(date_created) && !cJSON_IsNull(date_created))
    {
    goto end; //String
    }
    }

    // visit->date_modified
    cJSON *date_modified = cJSON_GetObjectItemCaseSensitive(visitJSON, "dateModified");
    if (cJSON_IsNull(date_modified)) {
        date_modified = NULL;
    }
    if (date_modified) { 
    if(!cJSON_IsString(date_modified) && !cJSON_IsNull(date_modified))
    {
    goto end; //String
    }
    }


    visit_local_var = visit_create_internal (
        study_key && !cJSON_IsNull(study_key) ? strdup(study_key->valuestring) : NULL,
        visit_id ? visit_id->valuedouble : 0,
        interval_id ? interval_id->valuedouble : 0,
        interval_name && !cJSON_IsNull(interval_name) ? strdup(interval_name->valuestring) : NULL,
        subject_id ? subject_id->valuedouble : 0,
        subject_key && !cJSON_IsNull(subject_key) ? strdup(subject_key->valuestring) : NULL,
        start_date && !cJSON_IsNull(start_date) ? strdup(start_date->valuestring) : NULL,
        end_date && !cJSON_IsNull(end_date) ? strdup(end_date->valuestring) : NULL,
        due_date && !cJSON_IsNull(due_date) ? strdup(due_date->valuestring) : NULL,
        visit_date && !cJSON_IsNull(visit_date) ? strdup(visit_date->valuestring) : NULL,
        visit_date_form && !cJSON_IsNull(visit_date_form) ? strdup(visit_date_form->valuestring) : NULL,
        visit_date_question && !cJSON_IsNull(visit_date_question) ? strdup(visit_date_question->valuestring) : NULL,
        deleted ? deleted->valueint : 0,
        date_created && !cJSON_IsNull(date_created) ? strdup(date_created->valuestring) : NULL,
        date_modified && !cJSON_IsNull(date_modified) ? strdup(date_modified->valuestring) : NULL
        );

    return visit_local_var;
end:
    return NULL;

}
