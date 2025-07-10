/*
 * coding.h
 *
 * 
 */

#ifndef _coding_H_
#define _coding_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct coding_t coding_t;




typedef struct coding_t {
    char *study_key; // string
    char *site_name; // string
    int site_id; //numeric
    int subject_id; //numeric
    char *subject_key; // string
    int form_id; //numeric
    char *form_name; // string
    char *form_key; // string
    int revision; //numeric
    int record_id; //numeric
    char *variable; // string
    char *value; // string
    int coding_id; //numeric
    char *code; // string
    char *coded_by; // string
    char *reason; // string
    char *dictionary_name; // string
    char *dictionary_version; // string
    char *date_coded; // string

    int _library_owned; // Is the library responsible for freeing this object?
} coding_t;

__attribute__((deprecated)) coding_t *coding_create(
    char *study_key,
    char *site_name,
    int site_id,
    int subject_id,
    char *subject_key,
    int form_id,
    char *form_name,
    char *form_key,
    int revision,
    int record_id,
    char *variable,
    char *value,
    int coding_id,
    char *code,
    char *coded_by,
    char *reason,
    char *dictionary_name,
    char *dictionary_version,
    char *date_coded
);

void coding_free(coding_t *coding);

coding_t *coding_parseFromJSON(cJSON *codingJSON);

cJSON *coding_convertToJSON(coding_t *coding);

#endif /* _coding_H_ */

