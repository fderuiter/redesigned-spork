/*
 * user.h
 *
 * 
 */

#ifndef _user_H_
#define _user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_t user_t;

#include "role.h"



typedef struct user_t {
    char *user_id; // string
    char *login; // string
    char *first_name; // string
    char *last_name; // string
    char *email; // string
    int user_active_in_study; //boolean
    list_t *roles; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} user_t;

__attribute__((deprecated)) user_t *user_create(
    char *user_id,
    char *login,
    char *first_name,
    char *last_name,
    char *email,
    int user_active_in_study,
    list_t *roles
);

void user_free(user_t *user);

user_t *user_parseFromJSON(cJSON *userJSON);

cJSON *user_convertToJSON(user_t *user);

#endif /* _user_H_ */

