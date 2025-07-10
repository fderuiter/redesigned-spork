/*
 * study.h
 *
 * 
 */

#ifndef _study_H_
#define _study_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct study_t study_t;




typedef struct study_t {
    char *sponsor_key; // string
    char *study_key; // string
    int study_id; //numeric
    char *study_name; // string
    char *study_description; // string
    char *study_type; // string
    char *date_created; // string
    char *date_modified; // string

    int _library_owned; // Is the library responsible for freeing this object?
} study_t;

__attribute__((deprecated)) study_t *study_create(
    char *sponsor_key,
    char *study_key,
    int study_id,
    char *study_name,
    char *study_description,
    char *study_type,
    char *date_created,
    char *date_modified
);

void study_free(study_t *study);

study_t *study_parseFromJSON(cJSON *studyJSON);

cJSON *study_convertToJSON(study_t *study);

#endif /* _study_H_ */

