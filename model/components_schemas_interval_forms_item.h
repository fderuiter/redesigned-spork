/*
 * components_schemas_interval_forms_item.h
 *
 * 
 */

#ifndef _components_schemas_interval_forms_item_H_
#define _components_schemas_interval_forms_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct components_schemas_interval_forms_item_t components_schemas_interval_forms_item_t;




typedef struct components_schemas_interval_forms_item_t {
    int form_id; //numeric
    char *form_key; // string
    char *form_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} components_schemas_interval_forms_item_t;

__attribute__((deprecated)) components_schemas_interval_forms_item_t *components_schemas_interval_forms_item_create(
    int form_id,
    char *form_key,
    char *form_name
);

void components_schemas_interval_forms_item_free(components_schemas_interval_forms_item_t *components_schemas_interval_forms_item);

components_schemas_interval_forms_item_t *components_schemas_interval_forms_item_parseFromJSON(cJSON *components_schemas_interval_forms_itemJSON);

cJSON *components_schemas_interval_forms_item_convertToJSON(components_schemas_interval_forms_item_t *components_schemas_interval_forms_item);

#endif /* _components_schemas_interval_forms_item_H_ */

