#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "site.h"



static site_t *site_create_internal(
    char *study_key,
    int site_id,
    char *site_name,
    char *site_enrollment_status,
    char *date_created,
    char *date_modified
    ) {
    site_t *site_local_var = malloc(sizeof(site_t));
    if (!site_local_var) {
        return NULL;
    }
    site_local_var->study_key = study_key;
    site_local_var->site_id = site_id;
    site_local_var->site_name = site_name;
    site_local_var->site_enrollment_status = site_enrollment_status;
    site_local_var->date_created = date_created;
    site_local_var->date_modified = date_modified;

    site_local_var->_library_owned = 1;
    return site_local_var;
}

__attribute__((deprecated)) site_t *site_create(
    char *study_key,
    int site_id,
    char *site_name,
    char *site_enrollment_status,
    char *date_created,
    char *date_modified
    ) {
    return site_create_internal (
        study_key,
        site_id,
        site_name,
        site_enrollment_status,
        date_created,
        date_modified
        );
}

void site_free(site_t *site) {
    if(NULL == site){
        return ;
    }
    if(site->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "site_free");
        return ;
    }
    listEntry_t *listEntry;
    if (site->study_key) {
        free(site->study_key);
        site->study_key = NULL;
    }
    if (site->site_name) {
        free(site->site_name);
        site->site_name = NULL;
    }
    if (site->site_enrollment_status) {
        free(site->site_enrollment_status);
        site->site_enrollment_status = NULL;
    }
    if (site->date_created) {
        free(site->date_created);
        site->date_created = NULL;
    }
    if (site->date_modified) {
        free(site->date_modified);
        site->date_modified = NULL;
    }
    free(site);
}

cJSON *site_convertToJSON(site_t *site) {
    cJSON *item = cJSON_CreateObject();

    // site->study_key
    if(site->study_key) {
    if(cJSON_AddStringToObject(item, "studyKey", site->study_key) == NULL) {
    goto fail; //String
    }
    }


    // site->site_id
    if(site->site_id) {
    if(cJSON_AddNumberToObject(item, "siteId", site->site_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // site->site_name
    if(site->site_name) {
    if(cJSON_AddStringToObject(item, "siteName", site->site_name) == NULL) {
    goto fail; //String
    }
    }


    // site->site_enrollment_status
    if(site->site_enrollment_status) {
    if(cJSON_AddStringToObject(item, "siteEnrollmentStatus", site->site_enrollment_status) == NULL) {
    goto fail; //String
    }
    }


    // site->date_created
    if(site->date_created) {
    if(cJSON_AddStringToObject(item, "dateCreated", site->date_created) == NULL) {
    goto fail; //String
    }
    }


    // site->date_modified
    if(site->date_modified) {
    if(cJSON_AddStringToObject(item, "dateModified", site->date_modified) == NULL) {
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

site_t *site_parseFromJSON(cJSON *siteJSON){

    site_t *site_local_var = NULL;

    // site->study_key
    cJSON *study_key = cJSON_GetObjectItemCaseSensitive(siteJSON, "studyKey");
    if (cJSON_IsNull(study_key)) {
        study_key = NULL;
    }
    if (study_key) { 
    if(!cJSON_IsString(study_key) && !cJSON_IsNull(study_key))
    {
    goto end; //String
    }
    }

    // site->site_id
    cJSON *site_id = cJSON_GetObjectItemCaseSensitive(siteJSON, "siteId");
    if (cJSON_IsNull(site_id)) {
        site_id = NULL;
    }
    if (site_id) { 
    if(!cJSON_IsNumber(site_id))
    {
    goto end; //Numeric
    }
    }

    // site->site_name
    cJSON *site_name = cJSON_GetObjectItemCaseSensitive(siteJSON, "siteName");
    if (cJSON_IsNull(site_name)) {
        site_name = NULL;
    }
    if (site_name) { 
    if(!cJSON_IsString(site_name) && !cJSON_IsNull(site_name))
    {
    goto end; //String
    }
    }

    // site->site_enrollment_status
    cJSON *site_enrollment_status = cJSON_GetObjectItemCaseSensitive(siteJSON, "siteEnrollmentStatus");
    if (cJSON_IsNull(site_enrollment_status)) {
        site_enrollment_status = NULL;
    }
    if (site_enrollment_status) { 
    if(!cJSON_IsString(site_enrollment_status) && !cJSON_IsNull(site_enrollment_status))
    {
    goto end; //String
    }
    }

    // site->date_created
    cJSON *date_created = cJSON_GetObjectItemCaseSensitive(siteJSON, "dateCreated");
    if (cJSON_IsNull(date_created)) {
        date_created = NULL;
    }
    if (date_created) { 
    if(!cJSON_IsString(date_created) && !cJSON_IsNull(date_created))
    {
    goto end; //String
    }
    }

    // site->date_modified
    cJSON *date_modified = cJSON_GetObjectItemCaseSensitive(siteJSON, "dateModified");
    if (cJSON_IsNull(date_modified)) {
        date_modified = NULL;
    }
    if (date_modified) { 
    if(!cJSON_IsString(date_modified) && !cJSON_IsNull(date_modified))
    {
    goto end; //String
    }
    }


    site_local_var = site_create_internal (
        study_key && !cJSON_IsNull(study_key) ? strdup(study_key->valuestring) : NULL,
        site_id ? site_id->valuedouble : 0,
        site_name && !cJSON_IsNull(site_name) ? strdup(site_name->valuestring) : NULL,
        site_enrollment_status && !cJSON_IsNull(site_enrollment_status) ? strdup(site_enrollment_status->valuestring) : NULL,
        date_created && !cJSON_IsNull(date_created) ? strdup(date_created->valuestring) : NULL,
        date_modified && !cJSON_IsNull(date_modified) ? strdup(date_modified->valuestring) : NULL
        );

    return site_local_var;
end:
    return NULL;

}
