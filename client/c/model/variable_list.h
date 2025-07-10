/*
 * variable_list.h
 *
 * 
 */

#ifndef _variable_list_H_
#define _variable_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variable_list_t variable_list_t;

#include "metadata.h"
#include "pagination.h"
#include "variable.h"



typedef struct variable_list_t {
    struct metadata_t *metadata; //model
    struct pagination_t *pagination; //model
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} variable_list_t;

__attribute__((deprecated)) variable_list_t *variable_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
);

void variable_list_free(variable_list_t *variable_list);

variable_list_t *variable_list_parseFromJSON(cJSON *variable_listJSON);

cJSON *variable_list_convertToJSON(variable_list_t *variable_list);

#endif /* _variable_list_H_ */

