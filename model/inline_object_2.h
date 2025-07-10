/*
 * inline_object_2.h
 *
 * 
 */

#ifndef _inline_object_2_H_
#define _inline_object_2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_object_2_t inline_object_2_t;

#include "metadata.h"



typedef struct inline_object_2_t {
    struct metadata_t *metadata; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inline_object_2_t;

__attribute__((deprecated)) inline_object_2_t *inline_object_2_create(
    metadata_t *metadata
);

void inline_object_2_free(inline_object_2_t *inline_object_2);

inline_object_2_t *inline_object_2_parseFromJSON(cJSON *inline_object_2JSON);

cJSON *inline_object_2_convertToJSON(inline_object_2_t *inline_object_2);

#endif /* _inline_object_2_H_ */

