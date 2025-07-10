/*
 * coding_list.h
 *
 * 
 */

#ifndef _coding_list_H_
#define _coding_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct coding_list_t coding_list_t;

#include "coding.h"
#include "metadata.h"
#include "pagination.h"



typedef struct coding_list_t {
    struct metadata_t *metadata; //model
    struct pagination_t *pagination; //model
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} coding_list_t;

__attribute__((deprecated)) coding_list_t *coding_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
);

void coding_list_free(coding_list_t *coding_list);

coding_list_t *coding_list_parseFromJSON(cJSON *coding_listJSON);

cJSON *coding_list_convertToJSON(coding_list_t *coding_list);

#endif /* _coding_list_H_ */

