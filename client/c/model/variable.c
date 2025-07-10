#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variable.h"


char* variable_variable_type_ToString(mednet_edc_api_variable_VARIABLETYPE_e variable_type) {
    char* variable_typeArray[] =  { "NULL", "TEXT", "TEXTAREA", "RADIO", "CHECKBOX", "DROPDOWN", "DATE", "NUMBER" };
    return variable_typeArray[variable_type];
}

mednet_edc_api_variable_VARIABLETYPE_e variable_variable_type_FromString(char* variable_type){
    int stringToReturn = 0;
    char *variable_typeArray[] =  { "NULL", "TEXT", "TEXTAREA", "RADIO", "CHECKBOX", "DROPDOWN", "DATE", "NUMBER" };
    size_t sizeofArray = sizeof(variable_typeArray) / sizeof(variable_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(variable_type, variable_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static variable_t *variable_create_internal(
    char *study_key,
    int variable_id,
    mednet_edc_api_variable_VARIABLETYPE_e variable_type,
    char *variable_name,
    int sequence,
    int revision,
    int disabled,
    char *date_created,
    char *date_modified,
    int form_id,
    char *variable_oid,
    int deleted,
    char *form_key,
    char *form_name,
    char *label,
    int blinded
    ) {
    variable_t *variable_local_var = malloc(sizeof(variable_t));
    if (!variable_local_var) {
        return NULL;
    }
    variable_local_var->study_key = study_key;
    variable_local_var->variable_id = variable_id;
    variable_local_var->variable_type = variable_type;
    variable_local_var->variable_name = variable_name;
    variable_local_var->sequence = sequence;
    variable_local_var->revision = revision;
    variable_local_var->disabled = disabled;
    variable_local_var->date_created = date_created;
    variable_local_var->date_modified = date_modified;
    variable_local_var->form_id = form_id;
    variable_local_var->variable_oid = variable_oid;
    variable_local_var->deleted = deleted;
    variable_local_var->form_key = form_key;
    variable_local_var->form_name = form_name;
    variable_local_var->label = label;
    variable_local_var->blinded = blinded;

    variable_local_var->_library_owned = 1;
    return variable_local_var;
}

__attribute__((deprecated)) variable_t *variable_create(
    char *study_key,
    int variable_id,
    mednet_edc_api_variable_VARIABLETYPE_e variable_type,
    char *variable_name,
    int sequence,
    int revision,
    int disabled,
    char *date_created,
    char *date_modified,
    int form_id,
    char *variable_oid,
    int deleted,
    char *form_key,
    char *form_name,
    char *label,
    int blinded
    ) {
    return variable_create_internal (
        study_key,
        variable_id,
        variable_type,
        variable_name,
        sequence,
        revision,
        disabled,
        date_created,
        date_modified,
        form_id,
        variable_oid,
        deleted,
        form_key,
        form_name,
        label,
        blinded
        );
}

void variable_free(variable_t *variable) {
    if(NULL == variable){
        return ;
    }
    if(variable->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "variable_free");
        return ;
    }
    listEntry_t *listEntry;
    if (variable->study_key) {
        free(variable->study_key);
        variable->study_key = NULL;
    }
    if (variable->variable_name) {
        free(variable->variable_name);
        variable->variable_name = NULL;
    }
    if (variable->date_created) {
        free(variable->date_created);
        variable->date_created = NULL;
    }
    if (variable->date_modified) {
        free(variable->date_modified);
        variable->date_modified = NULL;
    }
    if (variable->variable_oid) {
        free(variable->variable_oid);
        variable->variable_oid = NULL;
    }
    if (variable->form_key) {
        free(variable->form_key);
        variable->form_key = NULL;
    }
    if (variable->form_name) {
        free(variable->form_name);
        variable->form_name = NULL;
    }
    if (variable->label) {
        free(variable->label);
        variable->label = NULL;
    }
    free(variable);
}

cJSON *variable_convertToJSON(variable_t *variable) {
    cJSON *item = cJSON_CreateObject();

    // variable->study_key
    if(variable->study_key) {
    if(cJSON_AddStringToObject(item, "studyKey", variable->study_key) == NULL) {
    goto fail; //String
    }
    }


    // variable->variable_id
    if(variable->variable_id) {
    if(cJSON_AddNumberToObject(item, "variableId", variable->variable_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // variable->variable_type
    if(variable->variable_type != mednet_edc_api_variable_VARIABLETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "variableType", variable_variable_type_ToString(variable->variable_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // variable->variable_name
    if(variable->variable_name) {
    if(cJSON_AddStringToObject(item, "variableName", variable->variable_name) == NULL) {
    goto fail; //String
    }
    }


    // variable->sequence
    if(variable->sequence) {
    if(cJSON_AddNumberToObject(item, "sequence", variable->sequence) == NULL) {
    goto fail; //Numeric
    }
    }


    // variable->revision
    if(variable->revision) {
    if(cJSON_AddNumberToObject(item, "revision", variable->revision) == NULL) {
    goto fail; //Numeric
    }
    }


    // variable->disabled
    if(variable->disabled) {
    if(cJSON_AddBoolToObject(item, "disabled", variable->disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // variable->date_created
    if(variable->date_created) {
    if(cJSON_AddStringToObject(item, "dateCreated", variable->date_created) == NULL) {
    goto fail; //String
    }
    }


    // variable->date_modified
    if(variable->date_modified) {
    if(cJSON_AddStringToObject(item, "dateModified", variable->date_modified) == NULL) {
    goto fail; //String
    }
    }


    // variable->form_id
    if(variable->form_id) {
    if(cJSON_AddNumberToObject(item, "formId", variable->form_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // variable->variable_oid
    if(variable->variable_oid) {
    if(cJSON_AddStringToObject(item, "variableOid", variable->variable_oid) == NULL) {
    goto fail; //String
    }
    }


    // variable->deleted
    if(variable->deleted) {
    if(cJSON_AddBoolToObject(item, "deleted", variable->deleted) == NULL) {
    goto fail; //Bool
    }
    }


    // variable->form_key
    if(variable->form_key) {
    if(cJSON_AddStringToObject(item, "formKey", variable->form_key) == NULL) {
    goto fail; //String
    }
    }


    // variable->form_name
    if(variable->form_name) {
    if(cJSON_AddStringToObject(item, "formName", variable->form_name) == NULL) {
    goto fail; //String
    }
    }


    // variable->label
    if(variable->label) {
    if(cJSON_AddStringToObject(item, "label", variable->label) == NULL) {
    goto fail; //String
    }
    }


    // variable->blinded
    if(variable->blinded) {
    if(cJSON_AddBoolToObject(item, "blinded", variable->blinded) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

variable_t *variable_parseFromJSON(cJSON *variableJSON){

    variable_t *variable_local_var = NULL;

    // variable->study_key
    cJSON *study_key = cJSON_GetObjectItemCaseSensitive(variableJSON, "studyKey");
    if (cJSON_IsNull(study_key)) {
        study_key = NULL;
    }
    if (study_key) { 
    if(!cJSON_IsString(study_key) && !cJSON_IsNull(study_key))
    {
    goto end; //String
    }
    }

    // variable->variable_id
    cJSON *variable_id = cJSON_GetObjectItemCaseSensitive(variableJSON, "variableId");
    if (cJSON_IsNull(variable_id)) {
        variable_id = NULL;
    }
    if (variable_id) { 
    if(!cJSON_IsNumber(variable_id))
    {
    goto end; //Numeric
    }
    }

    // variable->variable_type
    cJSON *variable_type = cJSON_GetObjectItemCaseSensitive(variableJSON, "variableType");
    if (cJSON_IsNull(variable_type)) {
        variable_type = NULL;
    }
    mednet_edc_api_variable_VARIABLETYPE_e variable_typeVariable;
    if (variable_type) { 
    if(!cJSON_IsString(variable_type))
    {
    goto end; //Enum
    }
    variable_typeVariable = variable_variable_type_FromString(variable_type->valuestring);
    }

    // variable->variable_name
    cJSON *variable_name = cJSON_GetObjectItemCaseSensitive(variableJSON, "variableName");
    if (cJSON_IsNull(variable_name)) {
        variable_name = NULL;
    }
    if (variable_name) { 
    if(!cJSON_IsString(variable_name) && !cJSON_IsNull(variable_name))
    {
    goto end; //String
    }
    }

    // variable->sequence
    cJSON *sequence = cJSON_GetObjectItemCaseSensitive(variableJSON, "sequence");
    if (cJSON_IsNull(sequence)) {
        sequence = NULL;
    }
    if (sequence) { 
    if(!cJSON_IsNumber(sequence))
    {
    goto end; //Numeric
    }
    }

    // variable->revision
    cJSON *revision = cJSON_GetObjectItemCaseSensitive(variableJSON, "revision");
    if (cJSON_IsNull(revision)) {
        revision = NULL;
    }
    if (revision) { 
    if(!cJSON_IsNumber(revision))
    {
    goto end; //Numeric
    }
    }

    // variable->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(variableJSON, "disabled");
    if (cJSON_IsNull(disabled)) {
        disabled = NULL;
    }
    if (disabled) { 
    if(!cJSON_IsBool(disabled))
    {
    goto end; //Bool
    }
    }

    // variable->date_created
    cJSON *date_created = cJSON_GetObjectItemCaseSensitive(variableJSON, "dateCreated");
    if (cJSON_IsNull(date_created)) {
        date_created = NULL;
    }
    if (date_created) { 
    if(!cJSON_IsString(date_created) && !cJSON_IsNull(date_created))
    {
    goto end; //String
    }
    }

    // variable->date_modified
    cJSON *date_modified = cJSON_GetObjectItemCaseSensitive(variableJSON, "dateModified");
    if (cJSON_IsNull(date_modified)) {
        date_modified = NULL;
    }
    if (date_modified) { 
    if(!cJSON_IsString(date_modified) && !cJSON_IsNull(date_modified))
    {
    goto end; //String
    }
    }

    // variable->form_id
    cJSON *form_id = cJSON_GetObjectItemCaseSensitive(variableJSON, "formId");
    if (cJSON_IsNull(form_id)) {
        form_id = NULL;
    }
    if (form_id) { 
    if(!cJSON_IsNumber(form_id))
    {
    goto end; //Numeric
    }
    }

    // variable->variable_oid
    cJSON *variable_oid = cJSON_GetObjectItemCaseSensitive(variableJSON, "variableOid");
    if (cJSON_IsNull(variable_oid)) {
        variable_oid = NULL;
    }
    if (variable_oid) { 
    if(!cJSON_IsString(variable_oid) && !cJSON_IsNull(variable_oid))
    {
    goto end; //String
    }
    }

    // variable->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(variableJSON, "deleted");
    if (cJSON_IsNull(deleted)) {
        deleted = NULL;
    }
    if (deleted) { 
    if(!cJSON_IsBool(deleted))
    {
    goto end; //Bool
    }
    }

    // variable->form_key
    cJSON *form_key = cJSON_GetObjectItemCaseSensitive(variableJSON, "formKey");
    if (cJSON_IsNull(form_key)) {
        form_key = NULL;
    }
    if (form_key) { 
    if(!cJSON_IsString(form_key) && !cJSON_IsNull(form_key))
    {
    goto end; //String
    }
    }

    // variable->form_name
    cJSON *form_name = cJSON_GetObjectItemCaseSensitive(variableJSON, "formName");
    if (cJSON_IsNull(form_name)) {
        form_name = NULL;
    }
    if (form_name) { 
    if(!cJSON_IsString(form_name) && !cJSON_IsNull(form_name))
    {
    goto end; //String
    }
    }

    // variable->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(variableJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // variable->blinded
    cJSON *blinded = cJSON_GetObjectItemCaseSensitive(variableJSON, "blinded");
    if (cJSON_IsNull(blinded)) {
        blinded = NULL;
    }
    if (blinded) { 
    if(!cJSON_IsBool(blinded))
    {
    goto end; //Bool
    }
    }


    variable_local_var = variable_create_internal (
        study_key && !cJSON_IsNull(study_key) ? strdup(study_key->valuestring) : NULL,
        variable_id ? variable_id->valuedouble : 0,
        variable_type ? variable_typeVariable : mednet_edc_api_variable_VARIABLETYPE_NULL,
        variable_name && !cJSON_IsNull(variable_name) ? strdup(variable_name->valuestring) : NULL,
        sequence ? sequence->valuedouble : 0,
        revision ? revision->valuedouble : 0,
        disabled ? disabled->valueint : 0,
        date_created && !cJSON_IsNull(date_created) ? strdup(date_created->valuestring) : NULL,
        date_modified && !cJSON_IsNull(date_modified) ? strdup(date_modified->valuestring) : NULL,
        form_id ? form_id->valuedouble : 0,
        variable_oid && !cJSON_IsNull(variable_oid) ? strdup(variable_oid->valuestring) : NULL,
        deleted ? deleted->valueint : 0,
        form_key && !cJSON_IsNull(form_key) ? strdup(form_key->valuestring) : NULL,
        form_name && !cJSON_IsNull(form_name) ? strdup(form_name->valuestring) : NULL,
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        blinded ? blinded->valueint : 0
        );

    return variable_local_var;
end:
    return NULL;

}
