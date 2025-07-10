# Interval

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | Option<**String**> | Unique study key | [optional]
**interval_id** | Option<**i32**> | Unique system identifier for the interval (visit definition) | [optional]
**interval_name** | Option<**String**> | Name of the interval (visit) as defined in the study | [optional]
**interval_description** | Option<**String**> | Description of the interval (visit) | [optional]
**interval_sequence** | Option<**i32**> | Sequence number of the interval in the schedule | [optional]
**interval_group_id** | Option<**i32**> | Identifier for the interval group (if intervals are grouped) | [optional]
**interval_group_name** | Option<**String**> | Name of the interval group | [optional]
**timeline** | Option<**String**> | Type of interval visit window (e.g., None, Due Date, Start - End Date, Actual Date) | [optional]
**defined_using_interval** | Option<**String**> | Baseline interval used for calculating this interval’s dates | [optional]
**window_calculation_form** | Option<**String**> | Baseline form (name) from which the calculation date is taken | [optional]
**window_calculation_date** | Option<**String**> | Baseline field (variable name) from which the calculation date is taken | [optional]
**actual_date_form** | Option<**String**> | Form used to capture the actual date for this interval | [optional]
**actual_date** | Option<**String**> | Field (variable name) used to capture the actual date for this interval | [optional]
**due_date_will_be_in** | Option<**i32**> | Number of days from the calculation date when the interval is due | [optional]
**negative_slack** | Option<**i32**> | Number of days before the due date that are allowed (negative window) | [optional]
**positive_slack** | Option<**i32**> | Number of days after the due date that are allowed (positive window) | [optional]
**epro_grace_period** | Option<**i32**> | Number of days of grace period for ePRO completion after due date | [optional]
**forms** | Option<[**Vec<models::ComponentsSchemasIntervalFormsItem>**](components_schemas_Interval_forms_item.md)> | List of forms that are scheduled in this interval | [optional]
**disabled** | Option<**bool**> | Whether the interval is soft-deleted (disabled) | [optional]
**date_created** | Option<**String**> | Date when this interval was created | [optional]
**date_modified** | Option<**String**> | Date when this interval was last modified | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


