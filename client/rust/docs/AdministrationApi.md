# \AdministrationApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**list_users**](AdministrationApi.md#list_users) | **GET** /studies/{studyKey}/users | List users and their roles in a study



## list_users

> models::UserList list_users(study_key, page, size, sort, include_inactive)
List users and their roles in a study

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**study_key** | **String** | Study key identifying the study context for the request | [required] |
**page** | Option<**i32**> | Page index to retrieve (0-based) |  |[default to 0]
**size** | Option<**i32**> | Number of items to return per page (max 500) |  |[default to 25]
**sort** | Option<**String**> | Sorting criteria in the format `property,ASC` or `property,DESC`. Can be repeated. |  |
**include_inactive** | Option<**bool**> | For user listing, whether to include inactive users |  |[default to false]

### Return type

[**models::UserList**](UserList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

