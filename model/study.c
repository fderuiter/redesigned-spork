#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "study.h"



static study_t *study_create_internal(
    char *sponsor_key,
    char *study_key,
    int study_id,
    char *study_name,
    char *study_description,
    char *study_type,
    char *date_created,
    char *date_modified
    ) {
    study_t *study_local_var = malloc(sizeof(study_t));
    if (!study_local_var) {
        return NULL;
    }
    study_local_var->sponsor_key = sponsor_key;
    study_local_var->study_key = study_key;
    study_local_var->study_id = study_id;
    study_local_var->study_name = study_name;
    study_local_var->study_description = study_description;
    study_local_var->study_type = study_type;
    study_local_var->date_created = date_created;
    study_local_var->date_modified = date_modified;

    study_local_var->_library_owned = 1;
    return study_local_var;
}

__attribute__((deprecated)) study_t *study_create(
    char *sponsor_key,
    char *study_key,
    int study_id,
    char *study_name,
    char *study_description,
    char *study_type,
    char *date_created,
    char *date_modified
    ) {
    return study_create_internal (
        sponsor_key,
        study_key,
        study_id,
        study_name,
        study_description,
        study_type,
        date_created,
        date_modified
        );
}

void study_free(study_t *study) {
    if(NULL == study){
        return ;
    }
    if(study->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "study_free");
        return ;
    }
    listEntry_t *listEntry;
    if (study->sponsor_key) {
        free(study->sponsor_key);
        study->sponsor_key = NULL;
    }
    if (study->study_key) {
        free(study->study_key);
        study->study_key = NULL;
    }
    if (study->study_name) {
        free(study->study_name);
        study->study_name = NULL;
    }
    if (study->study_description) {
        free(study->study_description);
        study->study_description = NULL;
    }
    if (study->study_type) {
        free(study->study_type);
        study->study_type = NULL;
    }
    if (study->date_created) {
        free(study->date_created);
        study->date_created = NULL;
    }
    if (study->date_modified) {
        free(study->date_modified);
        study->date_modified = NULL;
    }
    free(study);
}

cJSON *study_convertToJSON(study_t *study) {
    cJSON *item = cJSON_CreateObject();

    // study->sponsor_key
    if(study->sponsor_key) {
    if(cJSON_AddStringToObject(item, "sponsorKey", study->sponsor_key) == NULL) {
    goto fail; //String
    }
    }


    // study->study_key
    if(study->study_key) {
    if(cJSON_AddStringToObject(item, "studyKey", study->study_key) == NULL) {
    goto fail; //String
    }
    }


    // study->study_id
    if(study->study_id) {
    if(cJSON_AddNumberToObject(item, "studyId", study->study_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // study->study_name
    if(study->study_name) {
    if(cJSON_AddStringToObject(item, "studyName", study->study_name) == NULL) {
    goto fail; //String
    }
    }


    // study->study_description
    if(study->study_description) {
    if(cJSON_AddStringToObject(item, "studyDescription", study->study_description) == NULL) {
    goto fail; //String
    }
    }


    // study->study_type
    if(study->study_type) {
    if(cJSON_AddStringToObject(item, "studyType", study->study_type) == NULL) {
    goto fail; //String
    }
    }


    // study->date_created
    if(study->date_created) {
    if(cJSON_AddStringToObject(item, "dateCreated", study->date_created) == NULL) {
    goto fail; //String
    }
    }


    // study->date_modified
    if(study->date_modified) {
    if(cJSON_AddStringToObject(item, "dateModified", study->date_modified) == NULL) {
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

study_t *study_parseFromJSON(cJSON *studyJSON){

    study_t *study_local_var = NULL;

    // study->sponsor_key
    cJSON *sponsor_key = cJSON_GetObjectItemCaseSensitive(studyJSON, "sponsorKey");
    if (cJSON_IsNull(sponsor_key)) {
        sponsor_key = NULL;
    }
    if (sponsor_key) { 
    if(!cJSON_IsString(sponsor_key) && !cJSON_IsNull(sponsor_key))
    {
    goto end; //String
    }
    }

    // study->study_key
    cJSON *study_key = cJSON_GetObjectItemCaseSensitive(studyJSON, "studyKey");
    if (cJSON_IsNull(study_key)) {
        study_key = NULL;
    }
    if (study_key) { 
    if(!cJSON_IsString(study_key) && !cJSON_IsNull(study_key))
    {
    goto end; //String
    }
    }

    // study->study_id
    cJSON *study_id = cJSON_GetObjectItemCaseSensitive(studyJSON, "studyId");
    if (cJSON_IsNull(study_id)) {
        study_id = NULL;
    }
    if (study_id) { 
    if(!cJSON_IsNumber(study_id))
    {
    goto end; //Numeric
    }
    }

    // study->study_name
    cJSON *study_name = cJSON_GetObjectItemCaseSensitive(studyJSON, "studyName");
    if (cJSON_IsNull(study_name)) {
        study_name = NULL;
    }
    if (study_name) { 
    if(!cJSON_IsString(study_name) && !cJSON_IsNull(study_name))
    {
    goto end; //String
    }
    }

    // study->study_description
    cJSON *study_description = cJSON_GetObjectItemCaseSensitive(studyJSON, "studyDescription");
    if (cJSON_IsNull(study_description)) {
        study_description = NULL;
    }
    if (study_description) { 
    if(!cJSON_IsString(study_description) && !cJSON_IsNull(study_description))
    {
    goto end; //String
    }
    }

    // study->study_type
    cJSON *study_type = cJSON_GetObjectItemCaseSensitive(studyJSON, "studyType");
    if (cJSON_IsNull(study_type)) {
        study_type = NULL;
    }
    if (study_type) { 
    if(!cJSON_IsString(study_type) && !cJSON_IsNull(study_type))
    {
    goto end; //String
    }
    }

    // study->date_created
    cJSON *date_created = cJSON_GetObjectItemCaseSensitive(studyJSON, "dateCreated");
    if (cJSON_IsNull(date_created)) {
        date_created = NULL;
    }
    if (date_created) { 
    if(!cJSON_IsString(date_created) && !cJSON_IsNull(date_created))
    {
    goto end; //String
    }
    }

    // study->date_modified
    cJSON *date_modified = cJSON_GetObjectItemCaseSensitive(studyJSON, "dateModified");
    if (cJSON_IsNull(date_modified)) {
        date_modified = NULL;
    }
    if (date_modified) { 
    if(!cJSON_IsString(date_modified) && !cJSON_IsNull(date_modified))
    {
    goto end; //String
    }
    }


    study_local_var = study_create_internal (
        sponsor_key && !cJSON_IsNull(sponsor_key) ? strdup(sponsor_key->valuestring) : NULL,
        study_key && !cJSON_IsNull(study_key) ? strdup(study_key->valuestring) : NULL,
        study_id ? study_id->valuedouble : 0,
        study_name && !cJSON_IsNull(study_name) ? strdup(study_name->valuestring) : NULL,
        study_description && !cJSON_IsNull(study_description) ? strdup(study_description->valuestring) : NULL,
        study_type && !cJSON_IsNull(study_type) ? strdup(study_type->valuestring) : NULL,
        date_created && !cJSON_IsNull(date_created) ? strdup(date_created->valuestring) : NULL,
        date_modified && !cJSON_IsNull(date_modified) ? strdup(date_modified->valuestring) : NULL
        );

    return study_local_var;
end:
    return NULL;

}
