# OpenapiClient::RecordJobStatus

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **job_id** | **String** | Unique job identifier | [optional] |
| **batch_id** | **String** | Batch ID used to track the job (identical to jobId in most cases) | [optional] |
| **state** | **String** | Current state of the job (e.g., created, completed) | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RecordJobStatus.new(
  job_id: null,
  batch_id: null,
  state: null
)
```

