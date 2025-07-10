#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "record_job_status.h"



static record_job_status_t *record_job_status_create_internal(
    char *job_id,
    char *batch_id,
    char *state
    ) {
    record_job_status_t *record_job_status_local_var = malloc(sizeof(record_job_status_t));
    if (!record_job_status_local_var) {
        return NULL;
    }
    record_job_status_local_var->job_id = job_id;
    record_job_status_local_var->batch_id = batch_id;
    record_job_status_local_var->state = state;

    record_job_status_local_var->_library_owned = 1;
    return record_job_status_local_var;
}

__attribute__((deprecated)) record_job_status_t *record_job_status_create(
    char *job_id,
    char *batch_id,
    char *state
    ) {
    return record_job_status_create_internal (
        job_id,
        batch_id,
        state
        );
}

void record_job_status_free(record_job_status_t *record_job_status) {
    if(NULL == record_job_status){
        return ;
    }
    if(record_job_status->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "record_job_status_free");
        return ;
    }
    listEntry_t *listEntry;
    if (record_job_status->job_id) {
        free(record_job_status->job_id);
        record_job_status->job_id = NULL;
    }
    if (record_job_status->batch_id) {
        free(record_job_status->batch_id);
        record_job_status->batch_id = NULL;
    }
    if (record_job_status->state) {
        free(record_job_status->state);
        record_job_status->state = NULL;
    }
    free(record_job_status);
}

cJSON *record_job_status_convertToJSON(record_job_status_t *record_job_status) {
    cJSON *item = cJSON_CreateObject();

    // record_job_status->job_id
    if(record_job_status->job_id) {
    if(cJSON_AddStringToObject(item, "jobId", record_job_status->job_id) == NULL) {
    goto fail; //String
    }
    }


    // record_job_status->batch_id
    if(record_job_status->batch_id) {
    if(cJSON_AddStringToObject(item, "batchId", record_job_status->batch_id) == NULL) {
    goto fail; //String
    }
    }


    // record_job_status->state
    if(record_job_status->state) {
    if(cJSON_AddStringToObject(item, "state", record_job_status->state) == NULL) {
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

record_job_status_t *record_job_status_parseFromJSON(cJSON *record_job_statusJSON){

    record_job_status_t *record_job_status_local_var = NULL;

    // record_job_status->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(record_job_statusJSON, "jobId");
    if (cJSON_IsNull(job_id)) {
        job_id = NULL;
    }
    if (job_id) { 
    if(!cJSON_IsString(job_id) && !cJSON_IsNull(job_id))
    {
    goto end; //String
    }
    }

    // record_job_status->batch_id
    cJSON *batch_id = cJSON_GetObjectItemCaseSensitive(record_job_statusJSON, "batchId");
    if (cJSON_IsNull(batch_id)) {
        batch_id = NULL;
    }
    if (batch_id) { 
    if(!cJSON_IsString(batch_id) && !cJSON_IsNull(batch_id))
    {
    goto end; //String
    }
    }

    // record_job_status->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(record_job_statusJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }


    record_job_status_local_var = record_job_status_create_internal (
        job_id && !cJSON_IsNull(job_id) ? strdup(job_id->valuestring) : NULL,
        batch_id && !cJSON_IsNull(batch_id) ? strdup(batch_id->valuestring) : NULL,
        state && !cJSON_IsNull(state) ? strdup(state->valuestring) : NULL
        );

    return record_job_status_local_var;
end:
    return NULL;

}
