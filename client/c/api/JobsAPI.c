#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "JobsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Retrieve job status by batch ID
//
job_t*
JobsAPI_getJobStatus(apiClient_t *apiClient, char *studyKey, char *batchId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/studies/{studyKey}/jobs/{batchId}");

    if(!studyKey)
        goto end;
    if(!batchId)
        goto end;


    // Path Params
    long sizeOfPathParams_studyKey = strlen(studyKey)+3 + strlen(batchId)+3 + sizeof("{ studyKey }") - 1;
    if(studyKey == NULL) {
        goto end;
    }
    char* localVarToReplace_studyKey = malloc(sizeOfPathParams_studyKey);
    sprintf(localVarToReplace_studyKey, "{%s}", "studyKey");

    localVarPath = strReplace(localVarPath, localVarToReplace_studyKey, studyKey);

    // Path Params
    long sizeOfPathParams_batchId = strlen(studyKey)+3 + strlen(batchId)+3 + sizeof("{ batchId }") - 1;
    if(batchId == NULL) {
        goto end;
    }
    char* localVarToReplace_batchId = malloc(sizeOfPathParams_batchId);
    sprintf(localVarToReplace_batchId, "{%s}", "batchId");

    localVarPath = strReplace(localVarPath, localVarToReplace_batchId, batchId);


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
    //    printf("%s\n","Successful response with job status information");
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
    job_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *JobsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = job_parseFromJSON(JobsAPIlocalVarJSON);
        cJSON_Delete(JobsAPIlocalVarJSON);
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
    
    free(localVarPath);
    free(localVarToReplace_studyKey);
    free(localVarToReplace_batchId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

