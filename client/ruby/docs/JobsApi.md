# OpenapiClient::JobsApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**get_job_status**](JobsApi.md#get_job_status) | **GET** /studies/{studyKey}/jobs/{batchId} | Retrieve job status by batch ID |


## get_job_status

> <Job> get_job_status(study_key, batch_id)

Retrieve job status by batch ID

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

api_instance = OpenapiClient::JobsApi.new
study_key = 'study_key_example' # String | Study key identifying the study context for the request
batch_id = 'batch_id_example' # String | Batch ID of the job to retrieve

begin
  # Retrieve job status by batch ID
  result = api_instance.get_job_status(study_key, batch_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling JobsApi->get_job_status: #{e}"
end
```

#### Using the get_job_status_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Job>, Integer, Hash)> get_job_status_with_http_info(study_key, batch_id)

```ruby
begin
  # Retrieve job status by batch ID
  data, status_code, headers = api_instance.get_job_status_with_http_info(study_key, batch_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Job>
rescue OpenapiClient::ApiError => e
  puts "Error when calling JobsApi->get_job_status_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Study key identifying the study context for the request |  |
| **batch_id** | **String** | Batch ID of the job to retrieve |  |

### Return type

[**Job**](Job.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

