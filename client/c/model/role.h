/*
 * role.h
 *
 * 
 */

#ifndef _role_H_
#define _role_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct role_t role_t;




typedef struct role_t {
    list_t *date_created; //primitive container
    list_t *date_modified; //primitive container
    char *role_id; // string
    int community_id; //numeric
    char *name; // string
    char *description; // string
    int level; //numeric
    char *type; // string
    int inactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} role_t;

__attribute__((deprecated)) role_t *role_create(
    list_t *date_created,
    list_t *date_modified,
    char *role_id,
    int community_id,
    char *name,
    char *description,
    int level,
    char *type,
    int inactive
);

void role_free(role_t *role);

role_t *role_parseFromJSON(cJSON *roleJSON);

cJSON *role_convertToJSON(role_t *role);

#endif /* _role_H_ */

