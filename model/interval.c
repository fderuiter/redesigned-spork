#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "interval.h"



static interval_t *interval_create_internal(
    char *study_key,
    int interval_id,
    char *interval_name,
    char *interval_description,
    int interval_sequence,
    int interval_group_id,
    char *interval_group_name,
    char *timeline,
    char *defined_using_interval,
    char *window_calculation_form,
    char *window_calculation_date,
    char *actual_date_form,
    char *actual_date,
    int due_date_will_be_in,
    int negative_slack,
    int positive_slack,
    int epro_grace_period,
    list_t *forms,
    int disabled,
    char *date_created,
    char *date_modified
    ) {
    interval_t *interval_local_var = malloc(sizeof(interval_t));
    if (!interval_local_var) {
        return NULL;
    }
    interval_local_var->study_key = study_key;
    interval_local_var->interval_id = interval_id;
    interval_local_var->interval_name = interval_name;
    interval_local_var->interval_description = interval_description;
    interval_local_var->interval_sequence = interval_sequence;
    interval_local_var->interval_group_id = interval_group_id;
    interval_local_var->interval_group_name = interval_group_name;
    interval_local_var->timeline = timeline;
    interval_local_var->defined_using_interval = defined_using_interval;
    interval_local_var->window_calculation_form = window_calculation_form;
    interval_local_var->window_calculation_date = window_calculation_date;
    interval_local_var->actual_date_form = actual_date_form;
    interval_local_var->actual_date = actual_date;
    interval_local_var->due_date_will_be_in = due_date_will_be_in;
    interval_local_var->negative_slack = negative_slack;
    interval_local_var->positive_slack = positive_slack;
    interval_local_var->epro_grace_period = epro_grace_period;
    interval_local_var->forms = forms;
    interval_local_var->disabled = disabled;
    interval_local_var->date_created = date_created;
    interval_local_var->date_modified = date_modified;

    interval_local_var->_library_owned = 1;
    return interval_local_var;
}

__attribute__((deprecated)) interval_t *interval_create(
    char *study_key,
    int interval_id,
    char *interval_name,
    char *interval_description,
    int interval_sequence,
    int interval_group_id,
    char *interval_group_name,
    char *timeline,
    char *defined_using_interval,
    char *window_calculation_form,
    char *window_calculation_date,
    char *actual_date_form,
    char *actual_date,
    int due_date_will_be_in,
    int negative_slack,
    int positive_slack,
    int epro_grace_period,
    list_t *forms,
    int disabled,
    char *date_created,
    char *date_modified
    ) {
    return interval_create_internal (
        study_key,
        interval_id,
        interval_name,
        interval_description,
        interval_sequence,
        interval_group_id,
        interval_group_name,
        timeline,
        defined_using_interval,
        window_calculation_form,
        window_calculation_date,
        actual_date_form,
        actual_date,
        due_date_will_be_in,
        negative_slack,
        positive_slack,
        epro_grace_period,
        forms,
        disabled,
        date_created,
        date_modified
        );
}

void interval_free(interval_t *interval) {
    if(NULL == interval){
        return ;
    }
    if(interval->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "interval_free");
        return ;
    }
    listEntry_t *listEntry;
    if (interval->study_key) {
        free(interval->study_key);
        interval->study_key = NULL;
    }
    if (interval->interval_name) {
        free(interval->interval_name);
        interval->interval_name = NULL;
    }
    if (interval->interval_description) {
        free(interval->interval_description);
        interval->interval_description = NULL;
    }
    if (interval->interval_group_name) {
        free(interval->interval_group_name);
        interval->interval_group_name = NULL;
    }
    if (interval->timeline) {
        free(interval->timeline);
        interval->timeline = NULL;
    }
    if (interval->defined_using_interval) {
        free(interval->defined_using_interval);
        interval->defined_using_interval = NULL;
    }
    if (interval->window_calculation_form) {
        free(interval->window_calculation_form);
        interval->window_calculation_form = NULL;
    }
    if (interval->window_calculation_date) {
        free(interval->window_calculation_date);
        interval->window_calculation_date = NULL;
    }
    if (interval->actual_date_form) {
        free(interval->actual_date_form);
        interval->actual_date_form = NULL;
    }
    if (interval->actual_date) {
        free(interval->actual_date);
        interval->actual_date = NULL;
    }
    if (interval->forms) {
        list_ForEach(listEntry, interval->forms) {
            components_schemas_interval_forms_item_free(listEntry->data);
        }
        list_freeList(interval->forms);
        interval->forms = NULL;
    }
    if (interval->date_created) {
        free(interval->date_created);
        interval->date_created = NULL;
    }
    if (interval->date_modified) {
        free(interval->date_modified);
        interval->date_modified = NULL;
    }
    free(interval);
}

cJSON *interval_convertToJSON(interval_t *interval) {
    cJSON *item = cJSON_CreateObject();

    // interval->study_key
    if(interval->study_key) {
    if(cJSON_AddStringToObject(item, "studyKey", interval->study_key) == NULL) {
    goto fail; //String
    }
    }


    // interval->interval_id
    if(interval->interval_id) {
    if(cJSON_AddNumberToObject(item, "intervalId", interval->interval_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // interval->interval_name
    if(interval->interval_name) {
    if(cJSON_AddStringToObject(item, "intervalName", interval->interval_name) == NULL) {
    goto fail; //String
    }
    }


    // interval->interval_description
    if(interval->interval_description) {
    if(cJSON_AddStringToObject(item, "intervalDescription", interval->interval_description) == NULL) {
    goto fail; //String
    }
    }


    // interval->interval_sequence
    if(interval->interval_sequence) {
    if(cJSON_AddNumberToObject(item, "intervalSequence", interval->interval_sequence) == NULL) {
    goto fail; //Numeric
    }
    }


    // interval->interval_group_id
    if(interval->interval_group_id) {
    if(cJSON_AddNumberToObject(item, "intervalGroupId", interval->interval_group_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // interval->interval_group_name
    if(interval->interval_group_name) {
    if(cJSON_AddStringToObject(item, "intervalGroupName", interval->interval_group_name) == NULL) {
    goto fail; //String
    }
    }


    // interval->timeline
    if(interval->timeline) {
    if(cJSON_AddStringToObject(item, "timeline", interval->timeline) == NULL) {
    goto fail; //String
    }
    }


    // interval->defined_using_interval
    if(interval->defined_using_interval) {
    if(cJSON_AddStringToObject(item, "definedUsingInterval", interval->defined_using_interval) == NULL) {
    goto fail; //String
    }
    }


    // interval->window_calculation_form
    if(interval->window_calculation_form) {
    if(cJSON_AddStringToObject(item, "windowCalculationForm", interval->window_calculation_form) == NULL) {
    goto fail; //String
    }
    }


    // interval->window_calculation_date
    if(interval->window_calculation_date) {
    if(cJSON_AddStringToObject(item, "windowCalculationDate", interval->window_calculation_date) == NULL) {
    goto fail; //String
    }
    }


    // interval->actual_date_form
    if(interval->actual_date_form) {
    if(cJSON_AddStringToObject(item, "actualDateForm", interval->actual_date_form) == NULL) {
    goto fail; //String
    }
    }


    // interval->actual_date
    if(interval->actual_date) {
    if(cJSON_AddStringToObject(item, "actualDate", interval->actual_date) == NULL) {
    goto fail; //String
    }
    }


    // interval->due_date_will_be_in
    if(interval->due_date_will_be_in) {
    if(cJSON_AddNumberToObject(item, "dueDateWillBeIn", interval->due_date_will_be_in) == NULL) {
    goto fail; //Numeric
    }
    }


    // interval->negative_slack
    if(interval->negative_slack) {
    if(cJSON_AddNumberToObject(item, "negativeSlack", interval->negative_slack) == NULL) {
    goto fail; //Numeric
    }
    }


    // interval->positive_slack
    if(interval->positive_slack) {
    if(cJSON_AddNumberToObject(item, "positiveSlack", interval->positive_slack) == NULL) {
    goto fail; //Numeric
    }
    }


    // interval->epro_grace_period
    if(interval->epro_grace_period) {
    if(cJSON_AddNumberToObject(item, "eproGracePeriod", interval->epro_grace_period) == NULL) {
    goto fail; //Numeric
    }
    }


    // interval->forms
    if(interval->forms) {
    cJSON *forms = cJSON_AddArrayToObject(item, "forms");
    if(forms == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *formsListEntry;
    if (interval->forms) {
    list_ForEach(formsListEntry, interval->forms) {
    cJSON *itemLocal = components_schemas_interval_forms_item_convertToJSON(formsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(forms, itemLocal);
    }
    }
    }


    // interval->disabled
    if(interval->disabled) {
    if(cJSON_AddBoolToObject(item, "disabled", interval->disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // interval->date_created
    if(interval->date_created) {
    if(cJSON_AddStringToObject(item, "dateCreated", interval->date_created) == NULL) {
    goto fail; //String
    }
    }


    // interval->date_modified
    if(interval->date_modified) {
    if(cJSON_AddStringToObject(item, "dateModified", interval->date_modified) == NULL) {
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

interval_t *interval_parseFromJSON(cJSON *intervalJSON){

    interval_t *interval_local_var = NULL;

    // define the local list for interval->forms
    list_t *formsList = NULL;

    // interval->study_key
    cJSON *study_key = cJSON_GetObjectItemCaseSensitive(intervalJSON, "studyKey");
    if (cJSON_IsNull(study_key)) {
        study_key = NULL;
    }
    if (study_key) { 
    if(!cJSON_IsString(study_key) && !cJSON_IsNull(study_key))
    {
    goto end; //String
    }
    }

    // interval->interval_id
    cJSON *interval_id = cJSON_GetObjectItemCaseSensitive(intervalJSON, "intervalId");
    if (cJSON_IsNull(interval_id)) {
        interval_id = NULL;
    }
    if (interval_id) { 
    if(!cJSON_IsNumber(interval_id))
    {
    goto end; //Numeric
    }
    }

    // interval->interval_name
    cJSON *interval_name = cJSON_GetObjectItemCaseSensitive(intervalJSON, "intervalName");
    if (cJSON_IsNull(interval_name)) {
        interval_name = NULL;
    }
    if (interval_name) { 
    if(!cJSON_IsString(interval_name) && !cJSON_IsNull(interval_name))
    {
    goto end; //String
    }
    }

    // interval->interval_description
    cJSON *interval_description = cJSON_GetObjectItemCaseSensitive(intervalJSON, "intervalDescription");
    if (cJSON_IsNull(interval_description)) {
        interval_description = NULL;
    }
    if (interval_description) { 
    if(!cJSON_IsString(interval_description) && !cJSON_IsNull(interval_description))
    {
    goto end; //String
    }
    }

    // interval->interval_sequence
    cJSON *interval_sequence = cJSON_GetObjectItemCaseSensitive(intervalJSON, "intervalSequence");
    if (cJSON_IsNull(interval_sequence)) {
        interval_sequence = NULL;
    }
    if (interval_sequence) { 
    if(!cJSON_IsNumber(interval_sequence))
    {
    goto end; //Numeric
    }
    }

    // interval->interval_group_id
    cJSON *interval_group_id = cJSON_GetObjectItemCaseSensitive(intervalJSON, "intervalGroupId");
    if (cJSON_IsNull(interval_group_id)) {
        interval_group_id = NULL;
    }
    if (interval_group_id) { 
    if(!cJSON_IsNumber(interval_group_id))
    {
    goto end; //Numeric
    }
    }

    // interval->interval_group_name
    cJSON *interval_group_name = cJSON_GetObjectItemCaseSensitive(intervalJSON, "intervalGroupName");
    if (cJSON_IsNull(interval_group_name)) {
        interval_group_name = NULL;
    }
    if (interval_group_name) { 
    if(!cJSON_IsString(interval_group_name) && !cJSON_IsNull(interval_group_name))
    {
    goto end; //String
    }
    }

    // interval->timeline
    cJSON *timeline = cJSON_GetObjectItemCaseSensitive(intervalJSON, "timeline");
    if (cJSON_IsNull(timeline)) {
        timeline = NULL;
    }
    if (timeline) { 
    if(!cJSON_IsString(timeline) && !cJSON_IsNull(timeline))
    {
    goto end; //String
    }
    }

    // interval->defined_using_interval
    cJSON *defined_using_interval = cJSON_GetObjectItemCaseSensitive(intervalJSON, "definedUsingInterval");
    if (cJSON_IsNull(defined_using_interval)) {
        defined_using_interval = NULL;
    }
    if (defined_using_interval) { 
    if(!cJSON_IsString(defined_using_interval) && !cJSON_IsNull(defined_using_interval))
    {
    goto end; //String
    }
    }

    // interval->window_calculation_form
    cJSON *window_calculation_form = cJSON_GetObjectItemCaseSensitive(intervalJSON, "windowCalculationForm");
    if (cJSON_IsNull(window_calculation_form)) {
        window_calculation_form = NULL;
    }
    if (window_calculation_form) { 
    if(!cJSON_IsString(window_calculation_form) && !cJSON_IsNull(window_calculation_form))
    {
    goto end; //String
    }
    }

    // interval->window_calculation_date
    cJSON *window_calculation_date = cJSON_GetObjectItemCaseSensitive(intervalJSON, "windowCalculationDate");
    if (cJSON_IsNull(window_calculation_date)) {
        window_calculation_date = NULL;
    }
    if (window_calculation_date) { 
    if(!cJSON_IsString(window_calculation_date) && !cJSON_IsNull(window_calculation_date))
    {
    goto end; //String
    }
    }

    // interval->actual_date_form
    cJSON *actual_date_form = cJSON_GetObjectItemCaseSensitive(intervalJSON, "actualDateForm");
    if (cJSON_IsNull(actual_date_form)) {
        actual_date_form = NULL;
    }
    if (actual_date_form) { 
    if(!cJSON_IsString(actual_date_form) && !cJSON_IsNull(actual_date_form))
    {
    goto end; //String
    }
    }

    // interval->actual_date
    cJSON *actual_date = cJSON_GetObjectItemCaseSensitive(intervalJSON, "actualDate");
    if (cJSON_IsNull(actual_date)) {
        actual_date = NULL;
    }
    if (actual_date) { 
    if(!cJSON_IsString(actual_date) && !cJSON_IsNull(actual_date))
    {
    goto end; //String
    }
    }

    // interval->due_date_will_be_in
    cJSON *due_date_will_be_in = cJSON_GetObjectItemCaseSensitive(intervalJSON, "dueDateWillBeIn");
    if (cJSON_IsNull(due_date_will_be_in)) {
        due_date_will_be_in = NULL;
    }
    if (due_date_will_be_in) { 
    if(!cJSON_IsNumber(due_date_will_be_in))
    {
    goto end; //Numeric
    }
    }

    // interval->negative_slack
    cJSON *negative_slack = cJSON_GetObjectItemCaseSensitive(intervalJSON, "negativeSlack");
    if (cJSON_IsNull(negative_slack)) {
        negative_slack = NULL;
    }
    if (negative_slack) { 
    if(!cJSON_IsNumber(negative_slack))
    {
    goto end; //Numeric
    }
    }

    // interval->positive_slack
    cJSON *positive_slack = cJSON_GetObjectItemCaseSensitive(intervalJSON, "positiveSlack");
    if (cJSON_IsNull(positive_slack)) {
        positive_slack = NULL;
    }
    if (positive_slack) { 
    if(!cJSON_IsNumber(positive_slack))
    {
    goto end; //Numeric
    }
    }

    // interval->epro_grace_period
    cJSON *epro_grace_period = cJSON_GetObjectItemCaseSensitive(intervalJSON, "eproGracePeriod");
    if (cJSON_IsNull(epro_grace_period)) {
        epro_grace_period = NULL;
    }
    if (epro_grace_period) { 
    if(!cJSON_IsNumber(epro_grace_period))
    {
    goto end; //Numeric
    }
    }

    // interval->forms
    cJSON *forms = cJSON_GetObjectItemCaseSensitive(intervalJSON, "forms");
    if (cJSON_IsNull(forms)) {
        forms = NULL;
    }
    if (forms) { 
    cJSON *forms_local_nonprimitive = NULL;
    if(!cJSON_IsArray(forms)){
        goto end; //nonprimitive container
    }

    formsList = list_createList();

    cJSON_ArrayForEach(forms_local_nonprimitive,forms )
    {
        if(!cJSON_IsObject(forms_local_nonprimitive)){
            goto end;
        }
        components_schemas_interval_forms_item_t *formsItem = components_schemas_interval_forms_item_parseFromJSON(forms_local_nonprimitive);

        list_addElement(formsList, formsItem);
    }
    }

    // interval->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(intervalJSON, "disabled");
    if (cJSON_IsNull(disabled)) {
        disabled = NULL;
    }
    if (disabled) { 
    if(!cJSON_IsBool(disabled))
    {
    goto end; //Bool
    }
    }

    // interval->date_created
    cJSON *date_created = cJSON_GetObjectItemCaseSensitive(intervalJSON, "dateCreated");
    if (cJSON_IsNull(date_created)) {
        date_created = NULL;
    }
    if (date_created) { 
    if(!cJSON_IsString(date_created) && !cJSON_IsNull(date_created))
    {
    goto end; //String
    }
    }

    // interval->date_modified
    cJSON *date_modified = cJSON_GetObjectItemCaseSensitive(intervalJSON, "dateModified");
    if (cJSON_IsNull(date_modified)) {
        date_modified = NULL;
    }
    if (date_modified) { 
    if(!cJSON_IsString(date_modified) && !cJSON_IsNull(date_modified))
    {
    goto end; //String
    }
    }


    interval_local_var = interval_create_internal (
        study_key && !cJSON_IsNull(study_key) ? strdup(study_key->valuestring) : NULL,
        interval_id ? interval_id->valuedouble : 0,
        interval_name && !cJSON_IsNull(interval_name) ? strdup(interval_name->valuestring) : NULL,
        interval_description && !cJSON_IsNull(interval_description) ? strdup(interval_description->valuestring) : NULL,
        interval_sequence ? interval_sequence->valuedouble : 0,
        interval_group_id ? interval_group_id->valuedouble : 0,
        interval_group_name && !cJSON_IsNull(interval_group_name) ? strdup(interval_group_name->valuestring) : NULL,
        timeline && !cJSON_IsNull(timeline) ? strdup(timeline->valuestring) : NULL,
        defined_using_interval && !cJSON_IsNull(defined_using_interval) ? strdup(defined_using_interval->valuestring) : NULL,
        window_calculation_form && !cJSON_IsNull(window_calculation_form) ? strdup(window_calculation_form->valuestring) : NULL,
        window_calculation_date && !cJSON_IsNull(window_calculation_date) ? strdup(window_calculation_date->valuestring) : NULL,
        actual_date_form && !cJSON_IsNull(actual_date_form) ? strdup(actual_date_form->valuestring) : NULL,
        actual_date && !cJSON_IsNull(actual_date) ? strdup(actual_date->valuestring) : NULL,
        due_date_will_be_in ? due_date_will_be_in->valuedouble : 0,
        negative_slack ? negative_slack->valuedouble : 0,
        positive_slack ? positive_slack->valuedouble : 0,
        epro_grace_period ? epro_grace_period->valuedouble : 0,
        forms ? formsList : NULL,
        disabled ? disabled->valueint : 0,
        date_created && !cJSON_IsNull(date_created) ? strdup(date_created->valuestring) : NULL,
        date_modified && !cJSON_IsNull(date_modified) ? strdup(date_modified->valuestring) : NULL
        );

    return interval_local_var;
end:
    if (formsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, formsList) {
            components_schemas_interval_forms_item_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(formsList);
        formsList = NULL;
    }
    return NULL;

}
