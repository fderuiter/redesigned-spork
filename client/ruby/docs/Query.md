# OpenapiClient::Query

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Unique study key | [optional] |
| **subject_id** | **Integer** | Mednet subject ID associated with the query (if applicable) | [optional] |
| **subject_oid** | **String** | Client-assigned subject OID (if applicable) | [optional] |
| **annotation_type** | **String** | Category/type of the query (e.g., subject, record, question) | [optional] |
| **annotation_id** | **Integer** | Unique system identifier for the query | [optional] |
| **type** | **String** | System text identifier for the query type/location (subject, record, question) | [optional] |
| **description** | **String** | Description of the query (e.g., reason or context) | [optional] |
| **record_id** | **Integer** | Record ID associated with the query (if applicable) | [optional] |
| **variable** | **String** | Variable name (field) associated with the query (if applicable) | [optional] |
| **subject_key** | **String** | Subject display ID associated with the query (if applicable) | [optional] |
| **date_created** | **String** | Date when the query was created | [optional] |
| **date_modified** | **String** | Date when the query was last modified | [optional] |
| **query_comments** | [**Array&lt;QueryComment&gt;**](QueryComment.md) | History of comments/actions on the query | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Query.new(
  study_key: null,
  subject_id: null,
  subject_oid: null,
  annotation_type: null,
  annotation_id: null,
  type: null,
  description: null,
  record_id: null,
  variable: null,
  subject_key: null,
  date_created: null,
  date_modified: null,
  query_comments: null
)
```

