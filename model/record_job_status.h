/*
 * record_job_status.h
 *
 * 
 */

#ifndef _record_job_status_H_
#define _record_job_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct record_job_status_t record_job_status_t;




typedef struct record_job_status_t {
    char *job_id; // string
    char *batch_id; // string
    char *state; // string

    int _library_owned; // Is the library responsible for freeing this object?
} record_job_status_t;

__attribute__((deprecated)) record_job_status_t *record_job_status_create(
    char *job_id,
    char *batch_id,
    char *state
);

void record_job_status_free(record_job_status_t *record_job_status);

record_job_status_t *record_job_status_parseFromJSON(cJSON *record_job_statusJSON);

cJSON *record_job_status_convertToJSON(record_job_status_t *record_job_status);

#endif /* _record_job_status_H_ */

