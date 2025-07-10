#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "StudiesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// List studies accessible by API key
//
study_list_t*
StudiesAPI_listStudies(apiClient_t *apiClient, int *page, int *size, char *sort, char *filter)
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
    char *localVarPath = strdup("/studies");





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
    //    printf("%s\n","Successful response with list of studies");
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
    study_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *StudiesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = study_list_parseFromJSON(StudiesAPIlocalVarJSON);
        cJSON_Delete(StudiesAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

