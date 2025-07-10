/*
 * inline_object_4.h
 *
 * 
 */

#ifndef _inline_object_4_H_
#define _inline_object_4_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_object_4_t inline_object_4_t;

#include "metadata.h"



typedef struct inline_object_4_t {
    struct metadata_t *metadata; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inline_object_4_t;

__attribute__((deprecated)) inline_object_4_t *inline_object_4_create(
    metadata_t *metadata
);

void inline_object_4_free(inline_object_4_t *inline_object_4);

inline_object_4_t *inline_object_4_parseFromJSON(cJSON *inline_object_4JSON);

cJSON *inline_object_4_convertToJSON(inline_object_4_t *inline_object_4);

#endif /* _inline_object_4_H_ */

