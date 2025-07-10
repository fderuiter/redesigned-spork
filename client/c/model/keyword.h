/*
 * keyword.h
 *
 * 
 */

#ifndef _keyword_H_
#define _keyword_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct keyword_t keyword_t;




typedef struct keyword_t {
    char *keyword_name; // string
    char *keyword_key; // string
    int keyword_id; //numeric
    char *date_added; // string

    int _library_owned; // Is the library responsible for freeing this object?
} keyword_t;

__attribute__((deprecated)) keyword_t *keyword_create(
    char *keyword_name,
    char *keyword_key,
    int keyword_id,
    char *date_added
);

void keyword_free(keyword_t *keyword);

keyword_t *keyword_parseFromJSON(cJSON *keywordJSON);

cJSON *keyword_convertToJSON(keyword_t *keyword);

#endif /* _keyword_H_ */

