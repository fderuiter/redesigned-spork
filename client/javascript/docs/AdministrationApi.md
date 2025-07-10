# MednetEdcApi.AdministrationApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**listUsers**](AdministrationApi.md#listUsers) | **GET** /studies/{studyKey}/users | List users and their roles in a study



## listUsers

> UserList listUsers(studyKey, opts)

List users and their roles in a study

### Example

```javascript
import MednetEdcApi from 'mednet_edc_api';
let defaultClient = MednetEdcApi.ApiClient.instance;
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: securityKeyAuth
let securityKeyAuth = defaultClient.authentications['securityKeyAuth'];
securityKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//securityKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new MednetEdcApi.AdministrationApi();
let studyKey = "studyKey_example"; // String | Study key identifying the study context for the request
let opts = {
  'page': 0, // Number | Page index to retrieve (0-based)
  'size': 25, // Number | Number of items to return per page (max 500)
  'sort': "sort_example", // String | Sorting criteria in the format `property,ASC` or `property,DESC`. Can be repeated.
  'includeInactive': false // Boolean | For user listing, whether to include inactive users
};
apiInstance.listUsers(studyKey, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **studyKey** | **String**| Study key identifying the study context for the request | 
 **page** | **Number**| Page index to retrieve (0-based) | [optional] [default to 0]
 **size** | **Number**| Number of items to return per page (max 500) | [optional] [default to 25]
 **sort** | **String**| Sorting criteria in the format &#x60;property,ASC&#x60; or &#x60;property,DESC&#x60;. Can be repeated. | [optional] 
 **includeInactive** | **Boolean**| For user listing, whether to include inactive users | [optional] [default to false]

### Return type

[**UserList**](UserList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

