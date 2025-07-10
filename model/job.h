/*
 * job.h
 *
 * 
 */

#ifndef _job_H_
#define _job_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_t job_t;




typedef struct job_t {
    char *job_id; // string
    char *batch_id; // string
    char *state; // string
    char *date_created; // string
    char *date_started; // string
    char *date_finished; // string

    int _library_owned; // Is the library responsible for freeing this object?
} job_t;

__attribute__((deprecated)) job_t *job_create(
    char *job_id,
    char *batch_id,
    char *state,
    char *date_created,
    char *date_started,
    char *date_finished
);

void job_free(job_t *job);

job_t *job_parseFromJSON(cJSON *jobJSON);

cJSON *job_convertToJSON(job_t *job);

#endif /* _job_H_ */

