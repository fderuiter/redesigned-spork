/*
 * components_schemas_record_create_request_item.h
 *
 * 
 */

#ifndef _components_schemas_record_create_request_item_H_
#define _components_schemas_record_create_request_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct components_schemas_record_create_request_item_t components_schemas_record_create_request_item_t;

#include "any_type.h"



typedef struct components_schemas_record_create_request_item_t {
    char *form_key; // string
    int form_id; //numeric
    char *site_name; // string
    int site_id; //numeric
    char *subject_key; // string
    int subject_id; //numeric
    char *subject_oid; // string
    char *interval_name; // string
    int interval_id; //numeric
    int record_id; //numeric
    char *record_oid; // string
    list_t* data; //map

    int _library_owned; // Is the library responsible for freeing this object?
} components_schemas_record_create_request_item_t;

__attribute__((deprecated)) components_schemas_record_create_request_item_t *components_schemas_record_create_request_item_create(
    char *form_key,
    int form_id,
    char *site_name,
    int site_id,
    char *subject_key,
    int subject_id,
    char *subject_oid,
    char *interval_name,
    int interval_id,
    int record_id,
    char *record_oid,
    list_t* data
);

void components_schemas_record_create_request_item_free(components_schemas_record_create_request_item_t *components_schemas_record_create_request_item);

components_schemas_record_create_request_item_t *components_schemas_record_create_request_item_parseFromJSON(cJSON *components_schemas_record_create_request_itemJSON);

cJSON *components_schemas_record_create_request_item_convertToJSON(components_schemas_record_create_request_item_t *components_schemas_record_create_request_item);

#endif /* _components_schemas_record_create_request_item_H_ */

