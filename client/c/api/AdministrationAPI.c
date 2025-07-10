#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "AdministrationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// List users and their roles in a study
//
user_list_t*
AdministrationAPI_listUsers(apiClient_t *apiClient, char *studyKey, int *page, int *size, char *sort, int *includeInactive)
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
    char *localVarPath = strdup("/studies/{studyKey}/users");

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
    char *keyQuery_includeInactive = NULL;
    char * valueQuery_includeInactive = NULL;
    keyValuePair_t *keyPairQuery_includeInactive = 0;
    if (includeInactive)
    {
        keyQuery_includeInactive = strdup("includeInactive");
        valueQuery_includeInactive = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_includeInactive, MAX_NUMBER_LENGTH, "%d", *includeInactive);
        keyPairQuery_includeInactive = keyValuePair_create(keyQuery_includeInactive, valueQuery_includeInactive);
        list_addElement(localVarQueryParameters,keyPairQuery_includeInactive);
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
    //    printf("%s\n","Successful response with list of users");
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
    user_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AdministrationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = user_list_parseFromJSON(AdministrationAPIlocalVarJSON);
        cJSON_Delete(AdministrationAPIlocalVarJSON);
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
    if(keyQuery_includeInactive){
        free(keyQuery_includeInactive);
        keyQuery_includeInactive = NULL;
    }
    if(valueQuery_includeInactive){
        free(valueQuery_includeInactive);
        valueQuery_includeInactive = NULL;
    }
    if(keyPairQuery_includeInactive){
        keyValuePair_free(keyPairQuery_includeInactive);
        keyPairQuery_includeInactive = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

