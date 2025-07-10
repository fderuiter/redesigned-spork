/*
 * record_revision.h
 *
 * 
 */

#ifndef _record_revision_H_
#define _record_revision_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct record_revision_t record_revision_t;




typedef struct record_revision_t {
    char *study_key; // string
    int record_revision_id; //numeric
    int record_id; //numeric
    char *record_oid; // string
    int record_revision; //numeric
    int data_revision; //numeric
    char *record_status; // string
    int subject_id; //numeric
    char *subject_oid; // string
    char *subject_key; // string
    int site_id; //numeric
    char *form_key; // string
    int interval_id; //numeric
    char *role; // string
    char *user; // string
    char *reason_for_change; // string
    int deleted; //boolean
    char *date_created; // string

    int _library_owned; // Is the library responsible for freeing this object?
} record_revision_t;

__attribute__((deprecated)) record_revision_t *record_revision_create(
    char *study_key,
    int record_revision_id,
    int record_id,
    char *record_oid,
    int record_revision,
    int data_revision,
    char *record_status,
    int subject_id,
    char *subject_oid,
    char *subject_key,
    int site_id,
    char *form_key,
    int interval_id,
    char *role,
    char *user,
    char *reason_for_change,
    int deleted,
    char *date_created
);

void record_revision_free(record_revision_t *record_revision);

record_revision_t *record_revision_parseFromJSON(cJSON *record_revisionJSON);

cJSON *record_revision_convertToJSON(record_revision_t *record_revision);

#endif /* _record_revision_H_ */

