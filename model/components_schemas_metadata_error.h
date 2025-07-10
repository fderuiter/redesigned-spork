/*
 * components_schemas_metadata_error.h
 *
 * Error details if an error occurred
 */

#ifndef _components_schemas_metadata_error_H_
#define _components_schemas_metadata_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct components_schemas_metadata_error_t components_schemas_metadata_error_t;

#include "any_type.h"



typedef struct components_schemas_metadata_error_t {
    char *message; // string

    int _library_owned; // Is the library responsible for freeing this object?
} components_schemas_metadata_error_t;

__attribute__((deprecated)) components_schemas_metadata_error_t *components_schemas_metadata_error_create(
    char *message
);

void components_schemas_metadata_error_free(components_schemas_metadata_error_t *components_schemas_metadata_error);

components_schemas_metadata_error_t *components_schemas_metadata_error_parseFromJSON(cJSON *components_schemas_metadata_errorJSON);

cJSON *components_schemas_metadata_error_convertToJSON(components_schemas_metadata_error_t *components_schemas_metadata_error);

#endif /* _components_schemas_metadata_error_H_ */

