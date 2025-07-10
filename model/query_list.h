/*
 * query_list.h
 *
 * 
 */

#ifndef _query_list_H_
#define _query_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct query_list_t query_list_t;

#include "metadata.h"
#include "pagination.h"
#include "query.h"



typedef struct query_list_t {
    struct metadata_t *metadata; //model
    struct pagination_t *pagination; //model
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} query_list_t;

__attribute__((deprecated)) query_list_t *query_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
);

void query_list_free(query_list_t *query_list);

query_list_t *query_list_parseFromJSON(cJSON *query_listJSON);

cJSON *query_list_convertToJSON(query_list_t *query_list);

#endif /* _query_list_H_ */

