/*
 * record.h
 *
 * 
 */

#ifndef _record_H_
#define _record_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct record_t record_t;

#include "any_type.h"
#include "keyword.h"



typedef struct record_t {
    char *study_key; // string
    int interval_id; //numeric
    int form_id; //numeric
    char *form_key; // string
    int site_id; //numeric
    int record_id; //numeric
    char *record_oid; // string
    char *record_type; // string
    char *record_status; // string
    int deleted; //boolean
    char *date_created; // string
    char *date_modified; // string
    int subject_id; //numeric
    char *subject_oid; // string
    char *subject_key; // string
    int visit_id; //numeric
    int parent_record_id; //numeric
    list_t *keywords; //nonprimitive container
    list_t* record_data; //map

    int _library_owned; // Is the library responsible for freeing this object?
} record_t;

__attribute__((deprecated)) record_t *record_create(
    char *study_key,
    int interval_id,
    int form_id,
    char *form_key,
    int site_id,
    int record_id,
    char *record_oid,
    char *record_type,
    char *record_status,
    int deleted,
    char *date_created,
    char *date_modified,
    int subject_id,
    char *subject_oid,
    char *subject_key,
    int visit_id,
    int parent_record_id,
    list_t *keywords,
    list_t* record_data
);

void record_free(record_t *record);

record_t *record_parseFromJSON(cJSON *recordJSON);

cJSON *record_convertToJSON(record_t *record);

#endif /* _record_H_ */

