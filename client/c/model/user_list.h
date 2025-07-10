/*
 * user_list.h
 *
 * 
 */

#ifndef _user_list_H_
#define _user_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_list_t user_list_t;

#include "metadata.h"
#include "pagination.h"
#include "user.h"



typedef struct user_list_t {
    struct metadata_t *metadata; //model
    struct pagination_t *pagination; //model
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} user_list_t;

__attribute__((deprecated)) user_list_t *user_list_create(
    metadata_t *metadata,
    pagination_t *pagination,
    list_t *data
);

void user_list_free(user_list_t *user_list);

user_list_t *user_list_parseFromJSON(cJSON *user_listJSON);

cJSON *user_list_convertToJSON(user_list_t *user_list);

#endif /* _user_list_H_ */

