

# Interval


## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**studyKey** | **String** | Unique study key |  [optional] |
|**intervalId** | **Integer** | Unique system identifier for the interval (visit definition) |  [optional] |
|**intervalName** | **String** | Name of the interval (visit) as defined in the study |  [optional] |
|**intervalDescription** | **String** | Description of the interval (visit) |  [optional] |
|**intervalSequence** | **Integer** | Sequence number of the interval in the schedule |  [optional] |
|**intervalGroupId** | **Integer** | Identifier for the interval group (if intervals are grouped) |  [optional] |
|**intervalGroupName** | **String** | Name of the interval group |  [optional] |
|**timeline** | **String** | Type of interval visit window (e.g., None, Due Date, Start - End Date, Actual Date) |  [optional] |
|**definedUsingInterval** | **String** | Baseline interval used for calculating this interval’s dates |  [optional] |
|**windowCalculationForm** | **String** | Baseline form (name) from which the calculation date is taken |  [optional] |
|**windowCalculationDate** | **String** | Baseline field (variable name) from which the calculation date is taken |  [optional] |
|**actualDateForm** | **String** | Form used to capture the actual date for this interval |  [optional] |
|**actualDate** | **String** | Field (variable name) used to capture the actual date for this interval |  [optional] |
|**dueDateWillBeIn** | **Integer** | Number of days from the calculation date when the interval is due |  [optional] |
|**negativeSlack** | **Integer** | Number of days before the due date that are allowed (negative window) |  [optional] |
|**positiveSlack** | **Integer** | Number of days after the due date that are allowed (positive window) |  [optional] |
|**eproGracePeriod** | **Integer** | Number of days of grace period for ePRO completion after due date |  [optional] |
|**forms** | [**List&lt;ComponentsSchemasIntervalFormsItem&gt;**](ComponentsSchemasIntervalFormsItem.md) | List of forms that are scheduled in this interval |  [optional] |
|**disabled** | **Boolean** | Whether the interval is soft-deleted (disabled) |  [optional] |
|**dateCreated** | **String** | Date when this interval was created |  [optional] |
|**dateModified** | **String** | Date when this interval was last modified |  [optional] |



