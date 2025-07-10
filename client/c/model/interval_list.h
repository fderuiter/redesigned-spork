/*
 * interval_list.h
 *
 * 
 */

#ifndef _interval_list_H_
#define _interval_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct interval_list_t interval_list_t;

#include "interval.h"
#include "metadata.h"
#include "pagination.h"



typedef struct interval_list_t {
    struct metadata_t *metadata; //model
    struct pagination_t *pagination; //model
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} interval_list_t;

__attribute__((deprecated)) interval_list_t *interval_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
);

void interval_list_free(interval_list_t *interval_list);

interval_list_t *interval_list_parseFromJSON(cJSON *interval_listJSON);

cJSON *interval_list_convertToJSON(interval_list_t *interval_list);

#endif /* _interval_list_H_ */

