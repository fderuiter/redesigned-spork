#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "role.h"



static role_t *role_create_internal(
    list_t *date_created,
    list_t *date_modified,
    char *role_id,
    int community_id,
    char *name,
    char *description,
    int level,
    char *type,
    int inactive
    ) {
    role_t *role_local_var = malloc(sizeof(role_t));
    if (!role_local_var) {
        return NULL;
    }
    role_local_var->date_created = date_created;
    role_local_var->date_modified = date_modified;
    role_local_var->role_id = role_id;
    role_local_var->community_id = community_id;
    role_local_var->name = name;
    role_local_var->description = description;
    role_local_var->level = level;
    role_local_var->type = type;
    role_local_var->inactive = inactive;

    role_local_var->_library_owned = 1;
    return role_local_var;
}

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
    ) {
    return role_create_internal (
        date_created,
        date_modified,
        role_id,
        community_id,
        name,
        description,
        level,
        type,
        inactive
        );
}

void role_free(role_t *role) {
    if(NULL == role){
        return ;
    }
    if(role->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "role_free");
        return ;
    }
    listEntry_t *listEntry;
    if (role->date_created) {
        list_ForEach(listEntry, role->date_created) {
            free(listEntry->data);
        }
        list_freeList(role->date_created);
        role->date_created = NULL;
    }
    if (role->date_modified) {
        list_ForEach(listEntry, role->date_modified) {
            free(listEntry->data);
        }
        list_freeList(role->date_modified);
        role->date_modified = NULL;
    }
    if (role->role_id) {
        free(role->role_id);
        role->role_id = NULL;
    }
    if (role->name) {
        free(role->name);
        role->name = NULL;
    }
    if (role->description) {
        free(role->description);
        role->description = NULL;
    }
    if (role->type) {
        free(role->type);
        role->type = NULL;
    }
    free(role);
}

cJSON *role_convertToJSON(role_t *role) {
    cJSON *item = cJSON_CreateObject();

    // role->date_created
    if(role->date_created) {
    cJSON *date_created = cJSON_AddArrayToObject(item, "dateCreated");
    if(date_created == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *date_createdListEntry;
    list_ForEach(date_createdListEntry, role->date_created) {
    if(cJSON_AddNumberToObject(date_created, "", *(double *)date_createdListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // role->date_modified
    if(role->date_modified) {
    cJSON *date_modified = cJSON_AddArrayToObject(item, "dateModified");
    if(date_modified == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *date_modifiedListEntry;
    list_ForEach(date_modifiedListEntry, role->date_modified) {
    if(cJSON_AddNumberToObject(date_modified, "", *(double *)date_modifiedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // role->role_id
    if(role->role_id) {
    if(cJSON_AddStringToObject(item, "roleId", role->role_id) == NULL) {
    goto fail; //String
    }
    }


    // role->community_id
    if(role->community_id) {
    if(cJSON_AddNumberToObject(item, "communityId", role->community_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // role->name
    if(role->name) {
    if(cJSON_AddStringToObject(item, "name", role->name) == NULL) {
    goto fail; //String
    }
    }


    // role->description
    if(role->description) {
    if(cJSON_AddStringToObject(item, "description", role->description) == NULL) {
    goto fail; //String
    }
    }


    // role->level
    if(role->level) {
    if(cJSON_AddNumberToObject(item, "level", role->level) == NULL) {
    goto fail; //Numeric
    }
    }


    // role->type
    if(role->type) {
    if(cJSON_AddStringToObject(item, "type", role->type) == NULL) {
    goto fail; //String
    }
    }


    // role->inactive
    if(role->inactive) {
    if(cJSON_AddBoolToObject(item, "inactive", role->inactive) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

role_t *role_parseFromJSON(cJSON *roleJSON){

    role_t *role_local_var = NULL;

    // define the local list for role->date_created
    list_t *date_createdList = NULL;

    // define the local list for role->date_modified
    list_t *date_modifiedList = NULL;

    // role->date_created
    cJSON *date_created = cJSON_GetObjectItemCaseSensitive(roleJSON, "dateCreated");
    if (cJSON_IsNull(date_created)) {
        date_created = NULL;
    }
    if (date_created) { 
    cJSON *date_created_local = NULL;
    if(!cJSON_IsArray(date_created)) {
        goto end;//primitive container
    }
    date_createdList = list_createList();

    cJSON_ArrayForEach(date_created_local, date_created)
    {
        if(!cJSON_IsNumber(date_created_local))
        {
            goto end;
        }
        double *date_created_local_value = calloc(1, sizeof(double));
        if(!date_created_local_value)
        {
            goto end;
        }
        *date_created_local_value = date_created_local->valuedouble;
        list_addElement(date_createdList , date_created_local_value);
    }
    }

    // role->date_modified
    cJSON *date_modified = cJSON_GetObjectItemCaseSensitive(roleJSON, "dateModified");
    if (cJSON_IsNull(date_modified)) {
        date_modified = NULL;
    }
    if (date_modified) { 
    cJSON *date_modified_local = NULL;
    if(!cJSON_IsArray(date_modified)) {
        goto end;//primitive container
    }
    date_modifiedList = list_createList();

    cJSON_ArrayForEach(date_modified_local, date_modified)
    {
        if(!cJSON_IsNumber(date_modified_local))
        {
            goto end;
        }
        double *date_modified_local_value = calloc(1, sizeof(double));
        if(!date_modified_local_value)
        {
            goto end;
        }
        *date_modified_local_value = date_modified_local->valuedouble;
        list_addElement(date_modifiedList , date_modified_local_value);
    }
    }

    // role->role_id
    cJSON *role_id = cJSON_GetObjectItemCaseSensitive(roleJSON, "roleId");
    if (cJSON_IsNull(role_id)) {
        role_id = NULL;
    }
    if (role_id) { 
    if(!cJSON_IsString(role_id) && !cJSON_IsNull(role_id))
    {
    goto end; //String
    }
    }

    // role->community_id
    cJSON *community_id = cJSON_GetObjectItemCaseSensitive(roleJSON, "communityId");
    if (cJSON_IsNull(community_id)) {
        community_id = NULL;
    }
    if (community_id) { 
    if(!cJSON_IsNumber(community_id))
    {
    goto end; //Numeric
    }
    }

    // role->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(roleJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // role->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(roleJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // role->level
    cJSON *level = cJSON_GetObjectItemCaseSensitive(roleJSON, "level");
    if (cJSON_IsNull(level)) {
        level = NULL;
    }
    if (level) { 
    if(!cJSON_IsNumber(level))
    {
    goto end; //Numeric
    }
    }

    // role->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(roleJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // role->inactive
    cJSON *inactive = cJSON_GetObjectItemCaseSensitive(roleJSON, "inactive");
    if (cJSON_IsNull(inactive)) {
        inactive = NULL;
    }
    if (inactive) { 
    if(!cJSON_IsBool(inactive))
    {
    goto end; //Bool
    }
    }


    role_local_var = role_create_internal (
        date_created ? date_createdList : NULL,
        date_modified ? date_modifiedList : NULL,
        role_id && !cJSON_IsNull(role_id) ? strdup(role_id->valuestring) : NULL,
        community_id ? community_id->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        level ? level->valuedouble : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        inactive ? inactive->valueint : 0
        );

    return role_local_var;
end:
    if (date_createdList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, date_createdList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(date_createdList);
        date_createdList = NULL;
    }
    if (date_modifiedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, date_modifiedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(date_modifiedList);
        date_modifiedList = NULL;
    }
    return NULL;

}
