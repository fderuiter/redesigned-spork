# AdministrationAPI

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AdministrationAPI_listUsers**](AdministrationAPI.md#AdministrationAPI_listUsers) | **GET** /studies/{studyKey}/users | List users and their roles in a study


# **AdministrationAPI_listUsers**
```c
// List users and their roles in a study
//
user_list_t* AdministrationAPI_listUsers(apiClient_t *apiClient, char *studyKey, int *page, int *size, char *sort, int *includeInactive);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**studyKey** | **char \*** | Study key identifying the study context for the request | 
**page** | **int \*** | Page index to retrieve (0-based) | [optional] [default to 0]
**size** | **int \*** | Number of items to return per page (max 500) | [optional] [default to 25]
**sort** | **char \*** | Sorting criteria in the format &#x60;property,ASC&#x60; or &#x60;property,DESC&#x60;. Can be repeated. | [optional] 
**includeInactive** | **int \*** | For user listing, whether to include inactive users | [optional] [default to false]

### Return type

[user_list_t](user_list.md) *


### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

