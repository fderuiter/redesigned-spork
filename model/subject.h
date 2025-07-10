/*
 * subject.h
 *
 * 
 */

#ifndef _subject_H_
#define _subject_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subject_t subject_t;

#include "keyword.h"



typedef struct subject_t {
    char *study_key; // string
    int subject_id; //numeric
    char *subject_oid; // string
    char *subject_key; // string
    char *subject_status; // string
    int site_id; //numeric
    char *site_name; // string
    int deleted; //boolean
    char *enrollment_start_date; // string
    char *date_created; // string
    char *date_modified; // string
    list_t *keywords; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} subject_t;

__attribute__((deprecated)) subject_t *subject_create(
    char *study_key,
    int subject_id,
    char *subject_oid,
    char *subject_key,
    char *subject_status,
    int site_id,
    char *site_name,
    int deleted,
    char *enrollment_start_date,
    char *date_created,
    char *date_modified,
    list_t *keywords
);

void subject_free(subject_t *subject);

subject_t *subject_parseFromJSON(cJSON *subjectJSON);

cJSON *subject_convertToJSON(subject_t *subject);

#endif /* _subject_H_ */

