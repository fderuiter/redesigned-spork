/*
 * form_list.h
 *
 * 
 */

#ifndef _form_list_H_
#define _form_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct form_list_t form_list_t;

#include "form.h"
#include "metadata.h"
#include "pagination.h"



typedef struct form_list_t {
    struct metadata_t *metadata; //model
    struct pagination_t *pagination; //model
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} form_list_t;

__attribute__((deprecated)) form_list_t *form_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
);

void form_list_free(form_list_t *form_list);

form_list_t *form_list_parseFromJSON(cJSON *form_listJSON);

cJSON *form_list_convertToJSON(form_list_t *form_list);

#endif /* _form_list_H_ */

