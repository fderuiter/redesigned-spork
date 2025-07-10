/*
 * metadata.h
 *
 * 
 */

#ifndef _metadata_H_
#define _metadata_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct metadata_t metadata_t;

#include "components_schemas_metadata_error.h"



typedef struct metadata_t {
    char *status; // string
    char *method; // string
    char *path; // string
    char *timestamp; //date time
    components_schemas_metadata_error_t *error; // custom

    int _library_owned; // Is the library responsible for freeing this object?
} metadata_t;

__attribute__((deprecated)) metadata_t *metadata_create(
    char *status,
    char *method,
    char *path,
    char *timestamp,
    components_schemas_metadata_error_t *error
);

void metadata_free(metadata_t *metadata);

metadata_t *metadata_parseFromJSON(cJSON *metadataJSON);

cJSON *metadata_convertToJSON(metadata_t *metadata);

#endif /* _metadata_H_ */

