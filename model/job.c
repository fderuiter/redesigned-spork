#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "job.h"



static job_t *job_create_internal(
    char *job_id,
    char *batch_id,
    char *state,
    char *date_created,
    char *date_started,
    char *date_finished
    ) {
    job_t *job_local_var = malloc(sizeof(job_t));
    if (!job_local_var) {
        return NULL;
    }
    job_local_var->job_id = job_id;
    job_local_var->batch_id = batch_id;
    job_local_var->state = state;
    job_local_var->date_created = date_created;
    job_local_var->date_started = date_started;
    job_local_var->date_finished = date_finished;

    job_local_var->_library_owned = 1;
    return job_local_var;
}

__attribute__((deprecated)) job_t *job_create(
    char *job_id,
    char *batch_id,
    char *state,
    char *date_created,
    char *date_started,
    char *date_finished
    ) {
    return job_create_internal (
        job_id,
        batch_id,
        state,
        date_created,
        date_started,
        date_finished
        );
}

void job_free(job_t *job) {
    if(NULL == job){
        return ;
    }
    if(job->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "job_free");
        return ;
    }
    listEntry_t *listEntry;
    if (job->job_id) {
        free(job->job_id);
        job->job_id = NULL;
    }
    if (job->batch_id) {
        free(job->batch_id);
        job->batch_id = NULL;
    }
    if (job->state) {
        free(job->state);
        job->state = NULL;
    }
    if (job->date_created) {
        free(job->date_created);
        job->date_created = NULL;
    }
    if (job->date_started) {
        free(job->date_started);
        job->date_started = NULL;
    }
    if (job->date_finished) {
        free(job->date_finished);
        job->date_finished = NULL;
    }
    free(job);
}

cJSON *job_convertToJSON(job_t *job) {
    cJSON *item = cJSON_CreateObject();

    // job->job_id
    if(job->job_id) {
    if(cJSON_AddStringToObject(item, "jobId", job->job_id) == NULL) {
    goto fail; //String
    }
    }


    // job->batch_id
    if(job->batch_id) {
    if(cJSON_AddStringToObject(item, "batchId", job->batch_id) == NULL) {
    goto fail; //String
    }
    }


    // job->state
    if(job->state) {
    if(cJSON_AddStringToObject(item, "state", job->state) == NULL) {
    goto fail; //String
    }
    }


    // job->date_created
    if(job->date_created) {
    if(cJSON_AddStringToObject(item, "dateCreated", job->date_created) == NULL) {
    goto fail; //String
    }
    }


    // job->date_started
    if(job->date_started) {
    if(cJSON_AddStringToObject(item, "dateStarted", job->date_started) == NULL) {
    goto fail; //String
    }
    }


    // job->date_finished
    if(job->date_finished) {
    if(cJSON_AddStringToObject(item, "dateFinished", job->date_finished) == NULL) {
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

job_t *job_parseFromJSON(cJSON *jobJSON){

    job_t *job_local_var = NULL;

    // job->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(jobJSON, "jobId");
    if (cJSON_IsNull(job_id)) {
        job_id = NULL;
    }
    if (job_id) { 
    if(!cJSON_IsString(job_id) && !cJSON_IsNull(job_id))
    {
    goto end; //String
    }
    }

    // job->batch_id
    cJSON *batch_id = cJSON_GetObjectItemCaseSensitive(jobJSON, "batchId");
    if (cJSON_IsNull(batch_id)) {
        batch_id = NULL;
    }
    if (batch_id) { 
    if(!cJSON_IsString(batch_id) && !cJSON_IsNull(batch_id))
    {
    goto end; //String
    }
    }

    // job->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(jobJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // job->date_created
    cJSON *date_created = cJSON_GetObjectItemCaseSensitive(jobJSON, "dateCreated");
    if (cJSON_IsNull(date_created)) {
        date_created = NULL;
    }
    if (date_created) { 
    if(!cJSON_IsString(date_created) && !cJSON_IsNull(date_created))
    {
    goto end; //String
    }
    }

    // job->date_started
    cJSON *date_started = cJSON_GetObjectItemCaseSensitive(jobJSON, "dateStarted");
    if (cJSON_IsNull(date_started)) {
        date_started = NULL;
    }
    if (date_started) { 
    if(!cJSON_IsString(date_started) && !cJSON_IsNull(date_started))
    {
    goto end; //String
    }
    }

    // job->date_finished
    cJSON *date_finished = cJSON_GetObjectItemCaseSensitive(jobJSON, "dateFinished");
    if (cJSON_IsNull(date_finished)) {
        date_finished = NULL;
    }
    if (date_finished) { 
    if(!cJSON_IsString(date_finished) && !cJSON_IsNull(date_finished))
    {
    goto end; //String
    }
    }


    job_local_var = job_create_internal (
        job_id && !cJSON_IsNull(job_id) ? strdup(job_id->valuestring) : NULL,
        batch_id && !cJSON_IsNull(batch_id) ? strdup(batch_id->valuestring) : NULL,
        state && !cJSON_IsNull(state) ? strdup(state->valuestring) : NULL,
        date_created && !cJSON_IsNull(date_created) ? strdup(date_created->valuestring) : NULL,
        date_started && !cJSON_IsNull(date_started) ? strdup(date_started->valuestring) : NULL,
        date_finished && !cJSON_IsNull(date_finished) ? strdup(date_finished->valuestring) : NULL
        );

    return job_local_var;
end:
    return NULL;

}
