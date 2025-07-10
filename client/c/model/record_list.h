/*
 * record_list.h
 *
 * 
 */

#ifndef _record_list_H_
#define _record_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct record_list_t record_list_t;

#include "metadata.h"
#include "pagination.h"
#include "record.h"



typedef struct record_list_t {
    struct metadata_t *metadata; //model
    struct pagination_t *pagination; //model
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} record_list_t;

__attribute__((deprecated)) record_list_t *record_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
);

void record_list_free(record_list_t *record_list);

record_list_t *record_list_parseFromJSON(cJSON *record_listJSON);

cJSON *record_list_convertToJSON(record_list_t *record_list);

#endif /* _record_list_H_ */

