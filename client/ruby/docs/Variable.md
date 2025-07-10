# OpenapiClient::Variable

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Unique study key | [optional] |
| **variable_id** | **Integer** | Mednet variable ID | [optional] |
| **variable_type** | **String** | Type of the variable (field type), e.g., RADIO, TEXT, etc. | [optional] |
| **variable_name** | **String** | Name of the variable (question text or label) | [optional] |
| **sequence** | **Integer** | Sequence of the variable on the form | [optional] |
| **revision** | **Integer** | Number of modifications of the variable (via form metadata revisions) | [optional] |
| **disabled** | **Boolean** | Whether the variable is marked as disabled (deleted) | [optional] |
| **date_created** | **String** | Date when this variable was created | [optional] |
| **date_modified** | **String** | Date when this variable was last modified | [optional] |
| **form_id** | **Integer** | ID of the form that this variable belongs to | [optional] |
| **variable_oid** | **String** | Client-assigned variable OID | [optional] |
| **deleted** | **Boolean** | Whether the variable is marked as deleted | [optional] |
| **form_key** | **String** | Form key of the form that this variable belongs to | [optional] |
| **form_name** | **String** | Name of the form that this variable belongs to | [optional] |
| **label** | **String** | User-defined identifier (field name) for the variable | [optional] |
| **blinded** | **Boolean** | Whether the variable is flagged as blinded (hidden in certain contexts) | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Variable.new(
  study_key: null,
  variable_id: null,
  variable_type: null,
  variable_name: null,
  sequence: null,
  revision: null,
  disabled: null,
  date_created: null,
  date_modified: null,
  form_id: null,
  variable_oid: null,
  deleted: null,
  form_key: null,
  form_name: null,
  label: null,
  blinded: null
)
```

