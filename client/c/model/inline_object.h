/*
 * inline_object.h
 *
 * 
 */

#ifndef _inline_object_H_
#define _inline_object_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_object_t inline_object_t;

#include "metadata.h"



typedef struct inline_object_t {
    struct metadata_t *metadata; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inline_object_t;

__attribute__((deprecated)) inline_object_t *inline_object_create(
    metadata_t *metadata
);

void inline_object_free(inline_object_t *inline_object);

inline_object_t *inline_object_parseFromJSON(cJSON *inline_objectJSON);

cJSON *inline_object_convertToJSON(inline_object_t *inline_object);

#endif /* _inline_object_H_ */

