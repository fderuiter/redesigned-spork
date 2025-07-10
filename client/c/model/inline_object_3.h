/*
 * inline_object_3.h
 *
 * 
 */

#ifndef _inline_object_3_H_
#define _inline_object_3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_object_3_t inline_object_3_t;

#include "metadata.h"



typedef struct inline_object_3_t {
    struct metadata_t *metadata; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inline_object_3_t;

__attribute__((deprecated)) inline_object_3_t *inline_object_3_create(
    metadata_t *metadata
);

void inline_object_3_free(inline_object_3_t *inline_object_3);

inline_object_3_t *inline_object_3_parseFromJSON(cJSON *inline_object_3JSON);

cJSON *inline_object_3_convertToJSON(inline_object_3_t *inline_object_3);

#endif /* _inline_object_3_H_ */

