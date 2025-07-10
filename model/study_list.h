/*
 * study_list.h
 *
 * 
 */

#ifndef _study_list_H_
#define _study_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct study_list_t study_list_t;

#include "metadata.h"
#include "pagination.h"
#include "study.h"



typedef struct study_list_t {
    struct metadata_t *metadata; //model
    struct pagination_t *pagination; //model
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} study_list_t;

__attribute__((deprecated)) study_list_t *study_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
);

void study_list_free(study_list_t *study_list);

study_list_t *study_list_parseFromJSON(cJSON *study_listJSON);

cJSON *study_list_convertToJSON(study_list_t *study_list);

#endif /* _study_list_H_ */

