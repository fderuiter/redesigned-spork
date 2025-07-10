#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "query_comment.h"



static query_comment_t *query_comment_create_internal(
    int sequence,
    char *annotation_status,
    char *user,
    char *comment,
    int closed,
    char *date
    ) {
    query_comment_t *query_comment_local_var = malloc(sizeof(query_comment_t));
    if (!query_comment_local_var) {
        return NULL;
    }
    query_comment_local_var->sequence = sequence;
    query_comment_local_var->annotation_status = annotation_status;
    query_comment_local_var->user = user;
    query_comment_local_var->comment = comment;
    query_comment_local_var->closed = closed;
    query_comment_local_var->date = date;

    query_comment_local_var->_library_owned = 1;
    return query_comment_local_var;
}

__attribute__((deprecated)) query_comment_t *query_comment_create(
    int sequence,
    char *annotation_status,
    char *user,
    char *comment,
    int closed,
    char *date
    ) {
    return query_comment_create_internal (
        sequence,
        annotation_status,
        user,
        comment,
        closed,
        date
        );
}

void query_comment_free(query_comment_t *query_comment) {
    if(NULL == query_comment){
        return ;
    }
    if(query_comment->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "query_comment_free");
        return ;
    }
    listEntry_t *listEntry;
    if (query_comment->annotation_status) {
        free(query_comment->annotation_status);
        query_comment->annotation_status = NULL;
    }
    if (query_comment->user) {
        free(query_comment->user);
        query_comment->user = NULL;
    }
    if (query_comment->comment) {
        free(query_comment->comment);
        query_comment->comment = NULL;
    }
    if (query_comment->date) {
        free(query_comment->date);
        query_comment->date = NULL;
    }
    free(query_comment);
}

cJSON *query_comment_convertToJSON(query_comment_t *query_comment) {
    cJSON *item = cJSON_CreateObject();

    // query_comment->sequence
    if(query_comment->sequence) {
    if(cJSON_AddNumberToObject(item, "sequence", query_comment->sequence) == NULL) {
    goto fail; //Numeric
    }
    }


    // query_comment->annotation_status
    if(query_comment->annotation_status) {
    if(cJSON_AddStringToObject(item, "annotationStatus", query_comment->annotation_status) == NULL) {
    goto fail; //String
    }
    }


    // query_comment->user
    if(query_comment->user) {
    if(cJSON_AddStringToObject(item, "user", query_comment->user) == NULL) {
    goto fail; //String
    }
    }


    // query_comment->comment
    if(query_comment->comment) {
    if(cJSON_AddStringToObject(item, "comment", query_comment->comment) == NULL) {
    goto fail; //String
    }
    }


    // query_comment->closed
    if(query_comment->closed) {
    if(cJSON_AddBoolToObject(item, "closed", query_comment->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // query_comment->date
    if(query_comment->date) {
    if(cJSON_AddStringToObject(item, "date", query_comment->date) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

query_comment_t *query_comment_parseFromJSON(cJSON *query_commentJSON){

    query_comment_t *query_comment_local_var = NULL;

    // query_comment->sequence
    cJSON *sequence = cJSON_GetObjectItemCaseSensitive(query_commentJSON, "sequence");
    if (cJSON_IsNull(sequence)) {
        sequence = NULL;
    }
    if (sequence) { 
    if(!cJSON_IsNumber(sequence))
    {
    goto end; //Numeric
    }
    }

    // query_comment->annotation_status
    cJSON *annotation_status = cJSON_GetObjectItemCaseSensitive(query_commentJSON, "annotationStatus");
    if (cJSON_IsNull(annotation_status)) {
        annotation_status = NULL;
    }
    if (annotation_status) { 
    if(!cJSON_IsString(annotation_status) && !cJSON_IsNull(annotation_status))
    {
    goto end; //String
    }
    }

    // query_comment->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(query_commentJSON, "user");
    if (cJSON_IsNull(user)) {
        user = NULL;
    }
    if (user) { 
    if(!cJSON_IsString(user) && !cJSON_IsNull(user))
    {
    goto end; //String
    }
    }

    // query_comment->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(query_commentJSON, "comment");
    if (cJSON_IsNull(comment)) {
        comment = NULL;
    }
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // query_comment->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(query_commentJSON, "closed");
    if (cJSON_IsNull(closed)) {
        closed = NULL;
    }
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // query_comment->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(query_commentJSON, "date");
    if (cJSON_IsNull(date)) {
        date = NULL;
    }
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //String
    }
    }


    query_comment_local_var = query_comment_create_internal (
        sequence ? sequence->valuedouble : 0,
        annotation_status && !cJSON_IsNull(annotation_status) ? strdup(annotation_status->valuestring) : NULL,
        user && !cJSON_IsNull(user) ? strdup(user->valuestring) : NULL,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        closed ? closed->valueint : 0,
        date && !cJSON_IsNull(date) ? strdup(date->valuestring) : NULL
        );

    return query_comment_local_var;
end:
    return NULL;

}
