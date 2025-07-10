/*
 * query_comment.h
 *
 * 
 */

#ifndef _query_comment_H_
#define _query_comment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct query_comment_t query_comment_t;




typedef struct query_comment_t {
    int sequence; //numeric
    char *annotation_status; // string
    char *user; // string
    char *comment; // string
    int closed; //boolean
    char *date; // string

    int _library_owned; // Is the library responsible for freeing this object?
} query_comment_t;

__attribute__((deprecated)) query_comment_t *query_comment_create(
    int sequence,
    char *annotation_status,
    char *user,
    char *comment,
    int closed,
    char *date
);

void query_comment_free(query_comment_t *query_comment);

query_comment_t *query_comment_parseFromJSON(cJSON *query_commentJSON);

cJSON *query_comment_convertToJSON(query_comment_t *query_comment);

#endif /* _query_comment_H_ */

