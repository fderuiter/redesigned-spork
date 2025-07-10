/*
 * subject_list.h
 *
 * 
 */

#ifndef _subject_list_H_
#define _subject_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subject_list_t subject_list_t;

#include "metadata.h"
#include "pagination.h"
#include "subject.h"



typedef struct subject_list_t {
    struct metadata_t *metadata; //model
    struct pagination_t *pagination; //model
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} subject_list_t;

__attribute__((deprecated)) subject_list_t *subject_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
);

void subject_list_free(subject_list_t *subject_list);

subject_list_t *subject_list_parseFromJSON(cJSON *subject_listJSON);

cJSON *subject_list_convertToJSON(subject_list_t *subject_list);

#endif /* _subject_list_H_ */

