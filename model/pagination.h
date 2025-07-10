/*
 * pagination.h
 *
 * 
 */

#ifndef _pagination_H_
#define _pagination_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct pagination_t pagination_t;

#include "sort.h"



typedef struct pagination_t {
    int current_page; //numeric
    int size; //numeric
    int total_pages; //numeric
    int total_elements; //numeric
    list_t *sort; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} pagination_t;

__attribute__((deprecated)) pagination_t *pagination_create(
    int current_page,
    int size,
    int total_pages,
    int total_elements,
    list_t *sort
);

void pagination_free(pagination_t *pagination);

pagination_t *pagination_parseFromJSON(cJSON *paginationJSON);

cJSON *pagination_convertToJSON(pagination_t *pagination);

#endif /* _pagination_H_ */

