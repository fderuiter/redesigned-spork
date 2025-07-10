# OpenapiClient::Interval

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Unique study key | [optional] |
| **interval_id** | **Integer** | Unique system identifier for the interval (visit definition) | [optional] |
| **interval_name** | **String** | Name of the interval (visit) as defined in the study | [optional] |
| **interval_description** | **String** | Description of the interval (visit) | [optional] |
| **interval_sequence** | **Integer** | Sequence number of the interval in the schedule | [optional] |
| **interval_group_id** | **Integer** | Identifier for the interval group (if intervals are grouped) | [optional] |
| **interval_group_name** | **String** | Name of the interval group | [optional] |
| **timeline** | **String** | Type of interval visit window (e.g., None, Due Date, Start - End Date, Actual Date) | [optional] |
| **defined_using_interval** | **String** | Baseline interval used for calculating this interval’s dates | [optional] |
| **window_calculation_form** | **String** | Baseline form (name) from which the calculation date is taken | [optional] |
| **window_calculation_date** | **String** | Baseline field (variable name) from which the calculation date is taken | [optional] |
| **actual_date_form** | **String** | Form used to capture the actual date for this interval | [optional] |
| **actual_date** | **String** | Field (variable name) used to capture the actual date for this interval | [optional] |
| **due_date_will_be_in** | **Integer** | Number of days from the calculation date when the interval is due | [optional] |
| **negative_slack** | **Integer** | Number of days before the due date that are allowed (negative window) | [optional] |
| **positive_slack** | **Integer** | Number of days after the due date that are allowed (positive window) | [optional] |
| **epro_grace_period** | **Integer** | Number of days of grace period for ePRO completion after due date | [optional] |
| **forms** | [**Array&lt;ComponentsSchemasIntervalFormsItem&gt;**](ComponentsSchemasIntervalFormsItem.md) | List of forms that are scheduled in this interval | [optional] |
| **disabled** | **Boolean** | Whether the interval is soft-deleted (disabled) | [optional] |
| **date_created** | **String** | Date when this interval was created | [optional] |
| **date_modified** | **String** | Date when this interval was last modified | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Interval.new(
  study_key: null,
  interval_id: null,
  interval_name: null,
  interval_description: null,
  interval_sequence: null,
  interval_group_id: null,
  interval_group_name: null,
  timeline: null,
  defined_using_interval: null,
  window_calculation_form: null,
  window_calculation_date: null,
  actual_date_form: null,
  actual_date: null,
  due_date_will_be_in: null,
  negative_slack: null,
  positive_slack: null,
  epro_grace_period: null,
  forms: null,
  disabled: null,
  date_created: null,
  date_modified: null
)
```

