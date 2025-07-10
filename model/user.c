#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user.h"



static user_t *user_create_internal(
    char *user_id,
    char *login,
    char *first_name,
    char *last_name,
    char *email,
    int user_active_in_study,
    list_t *roles
    ) {
    user_t *user_local_var = malloc(sizeof(user_t));
    if (!user_local_var) {
        return NULL;
    }
    user_local_var->user_id = user_id;
    user_local_var->login = login;
    user_local_var->first_name = first_name;
    user_local_var->last_name = last_name;
    user_local_var->email = email;
    user_local_var->user_active_in_study = user_active_in_study;
    user_local_var->roles = roles;

    user_local_var->_library_owned = 1;
    return user_local_var;
}

__attribute__((deprecated)) user_t *user_create(
    char *user_id,
    char *login,
    char *first_name,
    char *last_name,
    char *email,
    int user_active_in_study,
    list_t *roles
    ) {
    return user_create_internal (
        user_id,
        login,
        first_name,
        last_name,
        email,
        user_active_in_study,
        roles
        );
}

void user_free(user_t *user) {
    if(NULL == user){
        return ;
    }
    if(user->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "user_free");
        return ;
    }
    listEntry_t *listEntry;
    if (user->user_id) {
        free(user->user_id);
        user->user_id = NULL;
    }
    if (user->login) {
        free(user->login);
        user->login = NULL;
    }
    if (user->first_name) {
        free(user->first_name);
        user->first_name = NULL;
    }
    if (user->last_name) {
        free(user->last_name);
        user->last_name = NULL;
    }
    if (user->email) {
        free(user->email);
        user->email = NULL;
    }
    if (user->roles) {
        list_ForEach(listEntry, user->roles) {
            role_free(listEntry->data);
        }
        list_freeList(user->roles);
        user->roles = NULL;
    }
    free(user);
}

cJSON *user_convertToJSON(user_t *user) {
    cJSON *item = cJSON_CreateObject();

    // user->user_id
    if(user->user_id) {
    if(cJSON_AddStringToObject(item, "userId", user->user_id) == NULL) {
    goto fail; //String
    }
    }


    // user->login
    if(user->login) {
    if(cJSON_AddStringToObject(item, "login", user->login) == NULL) {
    goto fail; //String
    }
    }


    // user->first_name
    if(user->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", user->first_name) == NULL) {
    goto fail; //String
    }
    }


    // user->last_name
    if(user->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", user->last_name) == NULL) {
    goto fail; //String
    }
    }


    // user->email
    if(user->email) {
    if(cJSON_AddStringToObject(item, "email", user->email) == NULL) {
    goto fail; //String
    }
    }


    // user->user_active_in_study
    if(user->user_active_in_study) {
    if(cJSON_AddBoolToObject(item, "userActiveInStudy", user->user_active_in_study) == NULL) {
    goto fail; //Bool
    }
    }


    // user->roles
    if(user->roles) {
    cJSON *roles = cJSON_AddArrayToObject(item, "roles");
    if(roles == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rolesListEntry;
    if (user->roles) {
    list_ForEach(rolesListEntry, user->roles) {
    cJSON *itemLocal = role_convertToJSON(rolesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(roles, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_t *user_parseFromJSON(cJSON *userJSON){

    user_t *user_local_var = NULL;

    // define the local list for user->roles
    list_t *rolesList = NULL;

    // user->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(userJSON, "userId");
    if (cJSON_IsNull(user_id)) {
        user_id = NULL;
    }
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // user->login
    cJSON *login = cJSON_GetObjectItemCaseSensitive(userJSON, "login");
    if (cJSON_IsNull(login)) {
        login = NULL;
    }
    if (login) { 
    if(!cJSON_IsString(login) && !cJSON_IsNull(login))
    {
    goto end; //String
    }
    }

    // user->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(userJSON, "firstName");
    if (cJSON_IsNull(first_name)) {
        first_name = NULL;
    }
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // user->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(userJSON, "lastName");
    if (cJSON_IsNull(last_name)) {
        last_name = NULL;
    }
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // user->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(userJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // user->user_active_in_study
    cJSON *user_active_in_study = cJSON_GetObjectItemCaseSensitive(userJSON, "userActiveInStudy");
    if (cJSON_IsNull(user_active_in_study)) {
        user_active_in_study = NULL;
    }
    if (user_active_in_study) { 
    if(!cJSON_IsBool(user_active_in_study))
    {
    goto end; //Bool
    }
    }

    // user->roles
    cJSON *roles = cJSON_GetObjectItemCaseSensitive(userJSON, "roles");
    if (cJSON_IsNull(roles)) {
        roles = NULL;
    }
    if (roles) { 
    cJSON *roles_local_nonprimitive = NULL;
    if(!cJSON_IsArray(roles)){
        goto end; //nonprimitive container
    }

    rolesList = list_createList();

    cJSON_ArrayForEach(roles_local_nonprimitive,roles )
    {
        if(!cJSON_IsObject(roles_local_nonprimitive)){
            goto end;
        }
        role_t *rolesItem = role_parseFromJSON(roles_local_nonprimitive);

        list_addElement(rolesList, rolesItem);
    }
    }


    user_local_var = user_create_internal (
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        login && !cJSON_IsNull(login) ? strdup(login->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        user_active_in_study ? user_active_in_study->valueint : 0,
        roles ? rolesList : NULL
        );

    return user_local_var;
end:
    if (rolesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rolesList) {
            role_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rolesList);
        rolesList = NULL;
    }
    return NULL;

}
