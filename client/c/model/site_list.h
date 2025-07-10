/*
 * site_list.h
 *
 * 
 */

#ifndef _site_list_H_
#define _site_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct site_list_t site_list_t;

#include "metadata.h"
#include "pagination.h"
#include "site.h"



typedef struct site_list_t {
    struct metadata_t *metadata; //model
    struct pagination_t *pagination; //model
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} site_list_t;

__attribute__((deprecated)) site_list_t *site_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
);

void site_list_free(site_list_t *site_list);

site_list_t *site_list_parseFromJSON(cJSON *site_listJSON);

cJSON *site_list_convertToJSON(site_list_t *site_list);

#endif /* _site_list_H_ */

