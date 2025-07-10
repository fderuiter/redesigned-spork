/*
 * record_revision_list.h
 *
 * 
 */

#ifndef _record_revision_list_H_
#define _record_revision_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct record_revision_list_t record_revision_list_t;

#include "metadata.h"
#include "pagination.h"
#include "record_revision.h"



typedef struct record_revision_list_t {
    struct metadata_t *metadata; //model
    struct pagination_t *pagination; //model
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} record_revision_list_t;

__attribute__((deprecated)) record_revision_list_t *record_revision_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
);

void record_revision_list_free(record_revision_list_t *record_revision_list);

record_revision_list_t *record_revision_list_parseFromJSON(cJSON *record_revision_listJSON);

cJSON *record_revision_list_convertToJSON(record_revision_list_t *record_revision_list);

#endif /* _record_revision_list_H_ */

