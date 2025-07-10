# AdministrationApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**listUsers**](AdministrationApi.md#listUsers) | **GET** /studies/{studyKey}/users | List users and their roles in a study |


<a id="listUsers"></a>
# **listUsers**
> UserList listUsers(studyKey, page, size, sort, includeInactive)

List users and their roles in a study

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AdministrationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://edc.prod.imednetapi.com/api/v1/edc");
    
    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: securityKeyAuth
    ApiKeyAuth securityKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("securityKeyAuth");
    securityKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //securityKeyAuth.setApiKeyPrefix("Token");

    AdministrationApi apiInstance = new AdministrationApi(defaultClient);
    String studyKey = "studyKey_example"; // String | Study key identifying the study context for the request
    Integer page = 0; // Integer | Page index to retrieve (0-based)
    Integer size = 25; // Integer | Number of items to return per page (max 500)
    String sort = "sort_example"; // String | Sorting criteria in the format `property,ASC` or `property,DESC`. Can be repeated.
    Boolean includeInactive = false; // Boolean | For user listing, whether to include inactive users
    try {
      UserList result = apiInstance.listUsers(studyKey, page, size, sort, includeInactive);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AdministrationApi#listUsers");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **studyKey** | **String**| Study key identifying the study context for the request | |
| **page** | **Integer**| Page index to retrieve (0-based) | [optional] [default to 0] |
| **size** | **Integer**| Number of items to return per page (max 500) | [optional] [default to 25] |
| **sort** | **String**| Sorting criteria in the format &#x60;property,ASC&#x60; or &#x60;property,DESC&#x60;. Can be repeated. | [optional] |
| **includeInactive** | **Boolean**| For user listing, whether to include inactive users | [optional] [default to false] |

### Return type

[**UserList**](UserList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Successful response with list of users |  -  |
| **400** | Bad request (malformed or invalid input) |  -  |
| **401** | Authentication failed or was not provided |  -  |
| **403** | Authenticated but not allowed to access the resource |  -  |
| **404** | The requested resource was not found |  -  |
| **500** | Internal server error (unexpected condition encountered) |  -  |

