# OpenapiClient::Job

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **job_id** | **String** | Unique job identifier | [optional] |
| **batch_id** | **String** | Batch ID associated with the job (useful for linking with record creation requests) | [optional] |
| **state** | **String** | State of the job (e.g., completed, pending) | [optional] |
| **date_created** | **String** | Timestamp when the job was created | [optional] |
| **date_started** | **String** | Timestamp when the job started processing | [optional] |
| **date_finished** | **String** | Timestamp when the job finished processing | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Job.new(
  job_id: null,
  batch_id: null,
  state: null,
  date_created: null,
  date_started: null,
  date_finished: null
)
```

