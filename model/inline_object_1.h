/*
 * inline_object_1.h
 *
 * 
 */

#ifndef _inline_object_1_H_
#define _inline_object_1_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_object_1_t inline_object_1_t;

#include "metadata.h"



typedef struct inline_object_1_t {
    struct metadata_t *metadata; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inline_object_1_t;

__attribute__((deprecated)) inline_object_1_t *inline_object_1_create(
    metadata_t *metadata
);

void inline_object_1_free(inline_object_1_t *inline_object_1);

inline_object_1_t *inline_object_1_parseFromJSON(cJSON *inline_object_1JSON);

cJSON *inline_object_1_convertToJSON(inline_object_1_t *inline_object_1);

#endif /* _inline_object_1_H_ */

