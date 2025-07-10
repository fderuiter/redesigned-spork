/*
 * visit_list.h
 *
 * 
 */

#ifndef _visit_list_H_
#define _visit_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct visit_list_t visit_list_t;

#include "metadata.h"
#include "pagination.h"
#include "visit.h"



typedef struct visit_list_t {
    struct metadata_t *metadata; //model
    struct pagination_t *pagination; //model
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} visit_list_t;

__attribute__((deprecated)) visit_list_t *visit_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
);

void visit_list_free(visit_list_t *visit_list);

visit_list_t *visit_list_parseFromJSON(cJSON *visit_listJSON);

cJSON *visit_list_convertToJSON(visit_list_t *visit_list);

#endif /* _visit_list_H_ */

