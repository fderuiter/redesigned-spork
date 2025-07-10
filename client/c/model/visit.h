/*
 * visit.h
 *
 * 
 */

#ifndef _visit_H_
#define _visit_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct visit_t visit_t;




typedef struct visit_t {
    char *study_key; // string
    int visit_id; //numeric
    int interval_id; //numeric
    char *interval_name; // string
    int subject_id; //numeric
    char *subject_key; // string
    char *start_date; // string
    char *end_date; // string
    char *due_date; // string
    char *visit_date; // string
    char *visit_date_form; // string
    char *visit_date_question; // string
    int deleted; //boolean
    char *date_created; // string
    char *date_modified; // string

    int _library_owned; // Is the library responsible for freeing this object?
} visit_t;

__attribute__((deprecated)) visit_t *visit_create(
    char *study_key,
    int visit_id,
    int interval_id,
    char *interval_name,
    int subject_id,
    char *subject_key,
    char *start_date,
    char *end_date,
    char *due_date,
    char *visit_date,
    char *visit_date_form,
    char *visit_date_question,
    int deleted,
    char *date_created,
    char *date_modified
);

void visit_free(visit_t *visit);

visit_t *visit_parseFromJSON(cJSON *visitJSON);

cJSON *visit_convertToJSON(visit_t *visit);

#endif /* _visit_H_ */

