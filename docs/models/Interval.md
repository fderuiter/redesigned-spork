# Org.OpenAPITools.Model.Interval

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StudyKey** | **string** | Unique study key | [optional] 
**IntervalId** | **int** | Unique system identifier for the interval (visit definition) | [optional] 
**IntervalName** | **string** | Name of the interval (visit) as defined in the study | [optional] 
**IntervalDescription** | **string** | Description of the interval (visit) | [optional] 
**IntervalSequence** | **int** | Sequence number of the interval in the schedule | [optional] 
**IntervalGroupId** | **int** | Identifier for the interval group (if intervals are grouped) | [optional] 
**IntervalGroupName** | **string** | Name of the interval group | [optional] 
**Timeline** | **string** | Type of interval visit window (e.g., None, Due Date, Start - End Date, Actual Date) | [optional] 
**DefinedUsingInterval** | **string** | Baseline interval used for calculating this interval’s dates | [optional] 
**WindowCalculationForm** | **string** | Baseline form (name) from which the calculation date is taken | [optional] 
**WindowCalculationDate** | **string** | Baseline field (variable name) from which the calculation date is taken | [optional] 
**ActualDateForm** | **string** | Form used to capture the actual date for this interval | [optional] 
**ActualDate** | **string** | Field (variable name) used to capture the actual date for this interval | [optional] 
**DueDateWillBeIn** | **int** | Number of days from the calculation date when the interval is due | [optional] 
**NegativeSlack** | **int** | Number of days before the due date that are allowed (negative window) | [optional] 
**PositiveSlack** | **int** | Number of days after the due date that are allowed (positive window) | [optional] 
**EproGracePeriod** | **int** | Number of days of grace period for ePRO completion after due date | [optional] 
**Forms** | [**List&lt;ComponentsSchemasIntervalFormsItem&gt;**](ComponentsSchemasIntervalFormsItem.md) | List of forms that are scheduled in this interval | [optional] 
**Disabled** | **bool** | Whether the interval is soft-deleted (disabled) | [optional] 
**DateCreated** | **string** | Date when this interval was created | [optional] 
**DateModified** | **string** | Date when this interval was last modified | [optional] 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)

