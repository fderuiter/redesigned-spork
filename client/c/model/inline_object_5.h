/*
 * inline_object_5.h
 *
 * 
 */

#ifndef _inline_object_5_H_
#define _inline_object_5_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_object_5_t inline_object_5_t;

#include "metadata.h"



typedef struct inline_object_5_t {
    struct metadata_t *metadata; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inline_object_5_t;

__attribute__((deprecated)) inline_object_5_t *inline_object_5_create(
    metadata_t *metadata
);

void inline_object_5_free(inline_object_5_t *inline_object_5);

inline_object_5_t *inline_object_5_parseFromJSON(cJSON *inline_object_5JSON);

cJSON *inline_object_5_convertToJSON(inline_object_5_t *inline_object_5);

#endif /* _inline_object_5_H_ */

