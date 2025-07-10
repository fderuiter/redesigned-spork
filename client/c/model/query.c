#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "query.h"



static query_t *query_create_internal(
    char *study_key,
    int subject_id,
    char *subject_oid,
    char *annotation_type,
    int annotation_id,
    char *type,
    char *description,
    int record_id,
    char *variable,
    char *subject_key,
    char *date_created,
    char *date_modified,
    list_t *query_comments
    ) {
    query_t *query_local_var = malloc(sizeof(query_t));
    if (!query_local_var) {
        return NULL;
    }
    query_local_var->study_key = study_key;
    query_local_var->subject_id = subject_id;
    query_local_var->subject_oid = subject_oid;
    query_local_var->annotation_type = annotation_type;
    query_local_var->annotation_id = annotation_id;
    query_local_var->type = type;
    query_local_var->description = description;
    query_local_var->record_id = record_id;
    query_local_var->variable = variable;
    query_local_var->subject_key = subject_key;
    query_local_var->date_created = date_created;
    query_local_var->date_modified = date_modified;
    query_local_var->query_comments = query_comments;

    query_local_var->_library_owned = 1;
    return query_local_var;
}

__attribute__((deprecated)) query_t *query_create(
    char *study_key,
    int subject_id,
    char *subject_oid,
    char *annotation_type,
    int annotation_id,
    char *type,
    char *description,
    int record_id,
    char *variable,
    char *subject_key,
    char *date_created,
    char *date_modified,
    list_t *query_comments
    ) {
    return query_create_internal (
        study_key,
        subject_id,
        subject_oid,
        annotation_type,
        annotation_id,
        type,
        description,
        record_id,
        variable,
        subject_key,
        date_created,
        date_modified,
        query_comments
        );
}

void query_free(query_t *query) {
    if(NULL == query){
        return ;
    }
    if(query->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "query_free");
        return ;
    }
    listEntry_t *listEntry;
    if (query->study_key) {
        free(query->study_key);
        query->study_key = NULL;
    }
    if (query->subject_oid) {
        free(query->subject_oid);
        query->subject_oid = NULL;
    }
    if (query->annotation_type) {
        free(query->annotation_type);
        query->annotation_type = NULL;
    }
    if (query->type) {
        free(query->type);
        query->type = NULL;
    }
    if (query->description) {
        free(query->description);
        query->description = NULL;
    }
    if (query->variable) {
        free(query->variable);
        query->variable = NULL;
    }
    if (query->subject_key) {
        free(query->subject_key);
        query->subject_key = NULL;
    }
    if (query->date_created) {
        free(query->date_created);
        query->date_created = NULL;
    }
    if (query->date_modified) {
        free(query->date_modified);
        query->date_modified = NULL;
    }
    if (query->query_comments) {
        list_ForEach(listEntry, query->query_comments) {
            query_comment_free(listEntry->data);
        }
        list_freeList(query->query_comments);
        query->query_comments = NULL;
    }
    free(query);
}

cJSON *query_convertToJSON(query_t *query) {
    cJSON *item = cJSON_CreateObject();

    // query->study_key
    if(query->study_key) {
    if(cJSON_AddStringToObject(item, "studyKey", query->study_key) == NULL) {
    goto fail; //String
    }
    }


    // query->subject_id
    if(query->subject_id) {
    if(cJSON_AddNumberToObject(item, "subjectId", query->subject_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // query->subject_oid
    if(query->subject_oid) {
    if(cJSON_AddStringToObject(item, "subjectOid", query->subject_oid) == NULL) {
    goto fail; //String
    }
    }


    // query->annotation_type
    if(query->annotation_type) {
    if(cJSON_AddStringToObject(item, "annotationType", query->annotation_type) == NULL) {
    goto fail; //String
    }
    }


    // query->annotation_id
    if(query->annotation_id) {
    if(cJSON_AddNumberToObject(item, "annotationId", query->annotation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // query->type
    if(query->type) {
    if(cJSON_AddStringToObject(item, "type", query->type) == NULL) {
    goto fail; //String
    }
    }


    // query->description
    if(query->description) {
    if(cJSON_AddStringToObject(item, "description", query->description) == NULL) {
    goto fail; //String
    }
    }


    // query->record_id
    if(query->record_id) {
    if(cJSON_AddNumberToObject(item, "recordId", query->record_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // query->variable
    if(query->variable) {
    if(cJSON_AddStringToObject(item, "variable", query->variable) == NULL) {
    goto fail; //String
    }
    }


    // query->subject_key
    if(query->subject_key) {
    if(cJSON_AddStringToObject(item, "subjectKey", query->subject_key) == NULL) {
    goto fail; //String
    }
    }


    // query->date_created
    if(query->date_created) {
    if(cJSON_AddStringToObject(item, "dateCreated", query->date_created) == NULL) {
    goto fail; //String
    }
    }


    // query->date_modified
    if(query->date_modified) {
    if(cJSON_AddStringToObject(item, "dateModified", query->date_modified) == NULL) {
    goto fail; //String
    }
    }


    // query->query_comments
    if(query->query_comments) {
    cJSON *query_comments = cJSON_AddArrayToObject(item, "queryComments");
    if(query_comments == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *query_commentsListEntry;
    if (query->query_comments) {
    list_ForEach(query_commentsListEntry, query->query_comments) {
    cJSON *itemLocal = query_comment_convertToJSON(query_commentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(query_comments, itemLocal);
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

query_t *query_parseFromJSON(cJSON *queryJSON){

    query_t *query_local_var = NULL;

    // define the local list for query->query_comments
    list_t *query_commentsList = NULL;

    // query->study_key
    cJSON *study_key = cJSON_GetObjectItemCaseSensitive(queryJSON, "studyKey");
    if (cJSON_IsNull(study_key)) {
        study_key = NULL;
    }
    if (study_key) { 
    if(!cJSON_IsString(study_key) && !cJSON_IsNull(study_key))
    {
    goto end; //String
    }
    }

    // query->subject_id
    cJSON *subject_id = cJSON_GetObjectItemCaseSensitive(queryJSON, "subjectId");
    if (cJSON_IsNull(subject_id)) {
        subject_id = NULL;
    }
    if (subject_id) { 
    if(!cJSON_IsNumber(subject_id))
    {
    goto end; //Numeric
    }
    }

    // query->subject_oid
    cJSON *subject_oid = cJSON_GetObjectItemCaseSensitive(queryJSON, "subjectOid");
    if (cJSON_IsNull(subject_oid)) {
        subject_oid = NULL;
    }
    if (subject_oid) { 
    if(!cJSON_IsString(subject_oid) && !cJSON_IsNull(subject_oid))
    {
    goto end; //String
    }
    }

    // query->annotation_type
    cJSON *annotation_type = cJSON_GetObjectItemCaseSensitive(queryJSON, "annotationType");
    if (cJSON_IsNull(annotation_type)) {
        annotation_type = NULL;
    }
    if (annotation_type) { 
    if(!cJSON_IsString(annotation_type) && !cJSON_IsNull(annotation_type))
    {
    goto end; //String
    }
    }

    // query->annotation_id
    cJSON *annotation_id = cJSON_GetObjectItemCaseSensitive(queryJSON, "annotationId");
    if (cJSON_IsNull(annotation_id)) {
        annotation_id = NULL;
    }
    if (annotation_id) { 
    if(!cJSON_IsNumber(annotation_id))
    {
    goto end; //Numeric
    }
    }

    // query->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(queryJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // query->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(queryJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // query->record_id
    cJSON *record_id = cJSON_GetObjectItemCaseSensitive(queryJSON, "recordId");
    if (cJSON_IsNull(record_id)) {
        record_id = NULL;
    }
    if (record_id) { 
    if(!cJSON_IsNumber(record_id))
    {
    goto end; //Numeric
    }
    }

    // query->variable
    cJSON *variable = cJSON_GetObjectItemCaseSensitive(queryJSON, "variable");
    if (cJSON_IsNull(variable)) {
        variable = NULL;
    }
    if (variable) { 
    if(!cJSON_IsString(variable) && !cJSON_IsNull(variable))
    {
    goto end; //String
    }
    }

    // query->subject_key
    cJSON *subject_key = cJSON_GetObjectItemCaseSensitive(queryJSON, "subjectKey");
    if (cJSON_IsNull(subject_key)) {
        subject_key = NULL;
    }
    if (subject_key) { 
    if(!cJSON_IsString(subject_key) && !cJSON_IsNull(subject_key))
    {
    goto end; //String
    }
    }

    // query->date_created
    cJSON *date_created = cJSON_GetObjectItemCaseSensitive(queryJSON, "dateCreated");
    if (cJSON_IsNull(date_created)) {
        date_created = NULL;
    }
    if (date_created) { 
    if(!cJSON_IsString(date_created) && !cJSON_IsNull(date_created))
    {
    goto end; //String
    }
    }

    // query->date_modified
    cJSON *date_modified = cJSON_GetObjectItemCaseSensitive(queryJSON, "dateModified");
    if (cJSON_IsNull(date_modified)) {
        date_modified = NULL;
    }
    if (date_modified) { 
    if(!cJSON_IsString(date_modified) && !cJSON_IsNull(date_modified))
    {
    goto end; //String
    }
    }

    // query->query_comments
    cJSON *query_comments = cJSON_GetObjectItemCaseSensitive(queryJSON, "queryComments");
    if (cJSON_IsNull(query_comments)) {
        query_comments = NULL;
    }
    if (query_comments) { 
    cJSON *query_comments_local_nonprimitive = NULL;
    if(!cJSON_IsArray(query_comments)){
        goto end; //nonprimitive container
    }

    query_commentsList = list_createList();

    cJSON_ArrayForEach(query_comments_local_nonprimitive,query_comments )
    {
        if(!cJSON_IsObject(query_comments_local_nonprimitive)){
            goto end;
        }
        query_comment_t *query_commentsItem = query_comment_parseFromJSON(query_comments_local_nonprimitive);

        list_addElement(query_commentsList, query_commentsItem);
    }
    }


    query_local_var = query_create_internal (
        study_key && !cJSON_IsNull(study_key) ? strdup(study_key->valuestring) : NULL,
        subject_id ? subject_id->valuedouble : 0,
        subject_oid && !cJSON_IsNull(subject_oid) ? strdup(subject_oid->valuestring) : NULL,
        annotation_type && !cJSON_IsNull(annotation_type) ? strdup(annotation_type->valuestring) : NULL,
        annotation_id ? annotation_id->valuedouble : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        record_id ? record_id->valuedouble : 0,
        variable && !cJSON_IsNull(variable) ? strdup(variable->valuestring) : NULL,
        subject_key && !cJSON_IsNull(subject_key) ? strdup(subject_key->valuestring) : NULL,
        date_created && !cJSON_IsNull(date_created) ? strdup(date_created->valuestring) : NULL,
        date_modified && !cJSON_IsNull(date_modified) ? strdup(date_modified->valuestring) : NULL,
        query_comments ? query_commentsList : NULL
        );

    return query_local_var;
end:
    if (query_commentsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, query_commentsList) {
            query_comment_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(query_commentsList);
        query_commentsList = NULL;
    }
    return NULL;

}
