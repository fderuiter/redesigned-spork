/*
 * query.h
 *
 * 
 */

#ifndef _query_H_
#define _query_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct query_t query_t;

#include "query_comment.h"



typedef struct query_t {
    char *study_key; // string
    int subject_id; //numeric
    char *subject_oid; // string
    char *annotation_type; // string
    int annotation_id; //numeric
    char *type; // string
    char *description; // string
    int record_id; //numeric
    char *variable; // string
    char *subject_key; // string
    char *date_created; // string
    char *date_modified; // string
    list_t *query_comments; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} query_t;

__attribute__((deprecated)) query_t *query_create(
    char *study_key,
    int subject_id,
    char *subject_oid,
    char *annotation_type,
    int annotation_id,
    char *type,
    char *description,
    int record_id,
    char *variable,
    char *subject_key,
    char *date_created,
    char *date_modified,
    list_t *query_comments
);

void query_free(query_t *query);

query_t *query_parseFromJSON(cJSON *queryJSON);

cJSON *query_convertToJSON(query_t *query);

#endif /* _query_H_ */

