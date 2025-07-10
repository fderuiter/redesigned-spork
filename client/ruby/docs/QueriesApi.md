# OpenapiClient::QueriesApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**list_queries**](QueriesApi.md#list_queries) | **GET** /studies/{studyKey}/queries | List data queries in a study |


## list_queries

> <QueryList> list_queries(study_key, opts)

List data queries in a study

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['x-api-key'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['x-api-key'] = 'Bearer'

  # Configure API key authorization: securityKeyAuth
  config.api_key['x-imn-security-key'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['x-imn-security-key'] = 'Bearer'
end

api_instance = OpenapiClient::QueriesApi.new
study_key = 'study_key_example' # String | Study key identifying the study context for the request
opts = {
  page: 0, # Integer | Page index to retrieve (0-based)
  size: 25, # Integer | Number of items to return per page (max 500)
  sort: 'sort_example', # String | Sorting criteria in the format `property,ASC` or `property,DESC`. Can be repeated.
  filter: 'filter_example' # String | Optional filter criteria to apply, in the format `attribute==value` with support for >, >=, <, <=, !=. Multiple criteria can be combined with `;` (AND) or `,` (OR).
}

begin
  # List data queries in a study
  result = api_instance.list_queries(study_key, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling QueriesApi->list_queries: #{e}"
end
```

#### Using the list_queries_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<QueryList>, Integer, Hash)> list_queries_with_http_info(study_key, opts)

```ruby
begin
  # List data queries in a study
  data, status_code, headers = api_instance.list_queries_with_http_info(study_key, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <QueryList>
rescue OpenapiClient::ApiError => e
  puts "Error when calling QueriesApi->list_queries_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Study key identifying the study context for the request |  |
| **page** | **Integer** | Page index to retrieve (0-based) | [optional][default to 0] |
| **size** | **Integer** | Number of items to return per page (max 500) | [optional][default to 25] |
| **sort** | **String** | Sorting criteria in the format &#x60;property,ASC&#x60; or &#x60;property,DESC&#x60;. Can be repeated. | [optional] |
| **filter** | **String** | Optional filter criteria to apply, in the format &#x60;attribute&#x3D;&#x3D;value&#x60; with support for &gt;, &gt;&#x3D;, &lt;, &lt;&#x3D;, !&#x3D;. Multiple criteria can be combined with &#x60;;&#x60; (AND) or &#x60;,&#x60; (OR). | [optional] |

### Return type

[**QueryList**](QueryList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

