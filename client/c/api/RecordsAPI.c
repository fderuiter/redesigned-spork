#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "RecordsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Add new record or update subject/record data
//
record_job_status_t*
RecordsAPI_createRecords(apiClient_t *apiClient, char *studyKey, list_t *components_schemas_record_create_request_item)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/studies/{studyKey}/records");

    if(!studyKey)
        goto end;


    // Path Params
    long sizeOfPathParams_studyKey = strlen(studyKey)+3 + sizeof("{ studyKey }") - 1;
    if(studyKey == NULL) {
        goto end;
    }
    char* localVarToReplace_studyKey = malloc(sizeOfPathParams_studyKey);
    sprintf(localVarToReplace_studyKey, "{%s}", "studyKey");

    localVarPath = strReplace(localVarPath, localVarToReplace_studyKey, studyKey);



    // Body Param
    //notstring
    cJSON *localVar_components_schemas_record_create_request_item = NULL;
    cJSON *localVarItemJSON_components_schemas_record_create_request_item = NULL;
    cJSON *localVarSingleItemJSON_components_schemas_record_create_request_item = NULL;
    if (components_schemas_record_create_request_item != NULL)
    {
        localVarItemJSON_components_schemas_record_create_request_item = cJSON_CreateObject();
        localVarSingleItemJSON_components_schemas_record_create_request_item = cJSON_AddArrayToObject(localVarItemJSON_components_schemas_record_create_request_item, "components_schemas_record_create_request_item");
        if (localVarSingleItemJSON_components_schemas_record_create_request_item == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *components_schemas_record_create_request_itemBodyListEntry;
    list_ForEach(components_schemas_record_create_request_itemBodyListEntry, components_schemas_record_create_request_item)
    {
        localVar_components_schemas_record_create_request_item = components_schemas_record_create_request_item_convertToJSON(components_schemas_record_create_request_itemBodyListEntry->data);
        if(localVar_components_schemas_record_create_request_item == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_components_schemas_record_create_request_item, localVar_components_schemas_record_create_request_item);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_components_schemas_record_create_request_item);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 202) {
    //    printf("%s\n","Accepted request for record creation. Returns a job identifier to check status.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request (malformed or invalid input)");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Authentication failed or was not provided");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Authenticated but not allowed to access the resource");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The requested resource was not found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 429) {
    //    printf("%s\n","Too many requests (rate limit exceeded)");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal server error (unexpected condition encountered)");
    //}
    //nonprimitive not container
    record_job_status_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *RecordsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = record_job_status_parseFromJSON(RecordsAPIlocalVarJSON);
        cJSON_Delete(RecordsAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_studyKey);
    if (localVarItemJSON_components_schemas_record_create_request_item) {
        cJSON_Delete(localVarItemJSON_components_schemas_record_create_request_item);
        localVarItemJSON_components_schemas_record_create_request_item = NULL;
    }
    if (localVarSingleItemJSON_components_schemas_record_create_request_item) {
        cJSON_Delete(localVarSingleItemJSON_components_schemas_record_create_request_item);
        localVarSingleItemJSON_components_schemas_record_create_request_item = NULL;
    }
    if (localVar_components_schemas_record_create_request_item) {
        cJSON_Delete(localVar_components_schemas_record_create_request_item);
        localVar_components_schemas_record_create_request_item = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// List records (eCRF instances) in a study
//
record_list_t*
RecordsAPI_listRecords(apiClient_t *apiClient, char *studyKey, int *page, int *size, char *sort, char *filter, char *recordDataFilter)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/studies/{studyKey}/records");

    if(!studyKey)
        goto end;


    // Path Params
    long sizeOfPathParams_studyKey = strlen(studyKey)+3 + sizeof("{ studyKey }") - 1;
    if(studyKey == NULL) {
        goto end;
    }
    char* localVarToReplace_studyKey = malloc(sizeOfPathParams_studyKey);
    sprintf(localVarToReplace_studyKey, "{%s}", "studyKey");

    localVarPath = strReplace(localVarPath, localVarToReplace_studyKey, studyKey);



    // query parameters
    char *keyQuery_page = NULL;
    char * valueQuery_page = NULL;
    keyValuePair_t *keyPairQuery_page = 0;
    if (page)
    {
        keyQuery_page = strdup("page");
        valueQuery_page = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_page, MAX_NUMBER_LENGTH, "%d", *page);
        keyPairQuery_page = keyValuePair_create(keyQuery_page, valueQuery_page);
        list_addElement(localVarQueryParameters,keyPairQuery_page);
    }

    // query parameters
    char *keyQuery_size = NULL;
    char * valueQuery_size = NULL;
    keyValuePair_t *keyPairQuery_size = 0;
    if (size)
    {
        keyQuery_size = strdup("size");
        valueQuery_size = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_size, MAX_NUMBER_LENGTH, "%d", *size);
        keyPairQuery_size = keyValuePair_create(keyQuery_size, valueQuery_size);
        list_addElement(localVarQueryParameters,keyPairQuery_size);
    }

    // query parameters
    char *keyQuery_sort = NULL;
    char * valueQuery_sort = NULL;
    keyValuePair_t *keyPairQuery_sort = 0;
    if (sort)
    {
        keyQuery_sort = strdup("sort");
        valueQuery_sort = strdup((sort));
        keyPairQuery_sort = keyValuePair_create(keyQuery_sort, valueQuery_sort);
        list_addElement(localVarQueryParameters,keyPairQuery_sort);
    }

    // query parameters
    char *keyQuery_filter = NULL;
    char * valueQuery_filter = NULL;
    keyValuePair_t *keyPairQuery_filter = 0;
    if (filter)
    {
        keyQuery_filter = strdup("filter");
        valueQuery_filter = strdup((filter));
        keyPairQuery_filter = keyValuePair_create(keyQuery_filter, valueQuery_filter);
        list_addElement(localVarQueryParameters,keyPairQuery_filter);
    }

    // query parameters
    char *keyQuery_recordDataFilter = NULL;
    char * valueQuery_recordDataFilter = NULL;
    keyValuePair_t *keyPairQuery_recordDataFilter = 0;
    if (recordDataFilter)
    {
        keyQuery_recordDataFilter = strdup("recordDataFilter");
        valueQuery_recordDataFilter = strdup((recordDataFilter));
        keyPairQuery_recordDataFilter = keyValuePair_create(keyQuery_recordDataFilter, valueQuery_recordDataFilter);
        list_addElement(localVarQueryParameters,keyPairQuery_recordDataFilter);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response with list of records");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request (malformed or invalid input)");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Authentication failed or was not provided");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Authenticated but not allowed to access the resource");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The requested resource was not found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal server error (unexpected condition encountered)");
    //}
    //nonprimitive not container
    record_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *RecordsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = record_list_parseFromJSON(RecordsAPIlocalVarJSON);
        cJSON_Delete(RecordsAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_studyKey);
    if(keyQuery_page){
        free(keyQuery_page);
        keyQuery_page = NULL;
    }
    if(valueQuery_page){
        free(valueQuery_page);
        valueQuery_page = NULL;
    }
    if(keyPairQuery_page){
        keyValuePair_free(keyPairQuery_page);
        keyPairQuery_page = NULL;
    }
    if(keyQuery_size){
        free(keyQuery_size);
        keyQuery_size = NULL;
    }
    if(valueQuery_size){
        free(valueQuery_size);
        valueQuery_size = NULL;
    }
    if(keyPairQuery_size){
        keyValuePair_free(keyPairQuery_size);
        keyPairQuery_size = NULL;
    }
    if(keyQuery_sort){
        free(keyQuery_sort);
        keyQuery_sort = NULL;
    }
    if(valueQuery_sort){
        free(valueQuery_sort);
        valueQuery_sort = NULL;
    }
    if(keyPairQuery_sort){
        keyValuePair_free(keyPairQuery_sort);
        keyPairQuery_sort = NULL;
    }
    if(keyQuery_filter){
        free(keyQuery_filter);
        keyQuery_filter = NULL;
    }
    if(valueQuery_filter){
        free(valueQuery_filter);
        valueQuery_filter = NULL;
    }
    if(keyPairQuery_filter){
        keyValuePair_free(keyPairQuery_filter);
        keyPairQuery_filter = NULL;
    }
    if(keyQuery_recordDataFilter){
        free(keyQuery_recordDataFilter);
        keyQuery_recordDataFilter = NULL;
    }
    if(valueQuery_recordDataFilter){
        free(valueQuery_recordDataFilter);
        valueQuery_recordDataFilter = NULL;
    }
    if(keyPairQuery_recordDataFilter){
        keyValuePair_free(keyPairQuery_recordDataFilter);
        keyPairQuery_recordDataFilter = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

