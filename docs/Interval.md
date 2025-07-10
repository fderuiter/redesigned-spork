# Interval

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StudyKey** | Pointer to **string** | Unique study key | [optional] 
**IntervalId** | Pointer to **int32** | Unique system identifier for the interval (visit definition) | [optional] 
**IntervalName** | Pointer to **string** | Name of the interval (visit) as defined in the study | [optional] 
**IntervalDescription** | Pointer to **string** | Description of the interval (visit) | [optional] 
**IntervalSequence** | Pointer to **int32** | Sequence number of the interval in the schedule | [optional] 
**IntervalGroupId** | Pointer to **int32** | Identifier for the interval group (if intervals are grouped) | [optional] 
**IntervalGroupName** | Pointer to **string** | Name of the interval group | [optional] 
**Timeline** | Pointer to **string** | Type of interval visit window (e.g., None, Due Date, Start - End Date, Actual Date) | [optional] 
**DefinedUsingInterval** | Pointer to **string** | Baseline interval used for calculating this interval’s dates | [optional] 
**WindowCalculationForm** | Pointer to **string** | Baseline form (name) from which the calculation date is taken | [optional] 
**WindowCalculationDate** | Pointer to **string** | Baseline field (variable name) from which the calculation date is taken | [optional] 
**ActualDateForm** | Pointer to **string** | Form used to capture the actual date for this interval | [optional] 
**ActualDate** | Pointer to **string** | Field (variable name) used to capture the actual date for this interval | [optional] 
**DueDateWillBeIn** | Pointer to **int32** | Number of days from the calculation date when the interval is due | [optional] 
**NegativeSlack** | Pointer to **int32** | Number of days before the due date that are allowed (negative window) | [optional] 
**PositiveSlack** | Pointer to **int32** | Number of days after the due date that are allowed (positive window) | [optional] 
**EproGracePeriod** | Pointer to **int32** | Number of days of grace period for ePRO completion after due date | [optional] 
**Forms** | Pointer to [**[]ComponentsSchemasIntervalFormsItem**](ComponentsSchemasIntervalFormsItem.md) | List of forms that are scheduled in this interval | [optional] 
**Disabled** | Pointer to **bool** | Whether the interval is soft-deleted (disabled) | [optional] 
**DateCreated** | Pointer to **string** | Date when this interval was created | [optional] 
**DateModified** | Pointer to **string** | Date when this interval was last modified | [optional] 

## Methods

### NewInterval

`func NewInterval() *Interval`

NewInterval instantiates a new Interval object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewIntervalWithDefaults

`func NewIntervalWithDefaults() *Interval`

NewIntervalWithDefaults instantiates a new Interval object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStudyKey

`func (o *Interval) GetStudyKey() string`

GetStudyKey returns the StudyKey field if non-nil, zero value otherwise.

### GetStudyKeyOk

`func (o *Interval) GetStudyKeyOk() (*string, bool)`

GetStudyKeyOk returns a tuple with the StudyKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyKey

`func (o *Interval) SetStudyKey(v string)`

SetStudyKey sets StudyKey field to given value.

### HasStudyKey

`func (o *Interval) HasStudyKey() bool`

HasStudyKey returns a boolean if a field has been set.

### GetIntervalId

`func (o *Interval) GetIntervalId() int32`

GetIntervalId returns the IntervalId field if non-nil, zero value otherwise.

### GetIntervalIdOk

`func (o *Interval) GetIntervalIdOk() (*int32, bool)`

GetIntervalIdOk returns a tuple with the IntervalId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntervalId

`func (o *Interval) SetIntervalId(v int32)`

SetIntervalId sets IntervalId field to given value.

### HasIntervalId

`func (o *Interval) HasIntervalId() bool`

HasIntervalId returns a boolean if a field has been set.

### GetIntervalName

`func (o *Interval) GetIntervalName() string`

GetIntervalName returns the IntervalName field if non-nil, zero value otherwise.

### GetIntervalNameOk

`func (o *Interval) GetIntervalNameOk() (*string, bool)`

GetIntervalNameOk returns a tuple with the IntervalName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntervalName

`func (o *Interval) SetIntervalName(v string)`

SetIntervalName sets IntervalName field to given value.

### HasIntervalName

`func (o *Interval) HasIntervalName() bool`

HasIntervalName returns a boolean if a field has been set.

### GetIntervalDescription

`func (o *Interval) GetIntervalDescription() string`

GetIntervalDescription returns the IntervalDescription field if non-nil, zero value otherwise.

### GetIntervalDescriptionOk

`func (o *Interval) GetIntervalDescriptionOk() (*string, bool)`

GetIntervalDescriptionOk returns a tuple with the IntervalDescription field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntervalDescription

`func (o *Interval) SetIntervalDescription(v string)`

SetIntervalDescription sets IntervalDescription field to given value.

### HasIntervalDescription

`func (o *Interval) HasIntervalDescription() bool`

HasIntervalDescription returns a boolean if a field has been set.

### GetIntervalSequence

`func (o *Interval) GetIntervalSequence() int32`

GetIntervalSequence returns the IntervalSequence field if non-nil, zero value otherwise.

### GetIntervalSequenceOk

`func (o *Interval) GetIntervalSequenceOk() (*int32, bool)`

GetIntervalSequenceOk returns a tuple with the IntervalSequence field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntervalSequence

`func (o *Interval) SetIntervalSequence(v int32)`

SetIntervalSequence sets IntervalSequence field to given value.

### HasIntervalSequence

`func (o *Interval) HasIntervalSequence() bool`

HasIntervalSequence returns a boolean if a field has been set.

### GetIntervalGroupId

`func (o *Interval) GetIntervalGroupId() int32`

GetIntervalGroupId returns the IntervalGroupId field if non-nil, zero value otherwise.

### GetIntervalGroupIdOk

`func (o *Interval) GetIntervalGroupIdOk() (*int32, bool)`

GetIntervalGroupIdOk returns a tuple with the IntervalGroupId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntervalGroupId

`func (o *Interval) SetIntervalGroupId(v int32)`

SetIntervalGroupId sets IntervalGroupId field to given value.

### HasIntervalGroupId

`func (o *Interval) HasIntervalGroupId() bool`

HasIntervalGroupId returns a boolean if a field has been set.

### GetIntervalGroupName

`func (o *Interval) GetIntervalGroupName() string`

GetIntervalGroupName returns the IntervalGroupName field if non-nil, zero value otherwise.

### GetIntervalGroupNameOk

`func (o *Interval) GetIntervalGroupNameOk() (*string, bool)`

GetIntervalGroupNameOk returns a tuple with the IntervalGroupName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntervalGroupName

`func (o *Interval) SetIntervalGroupName(v string)`

SetIntervalGroupName sets IntervalGroupName field to given value.

### HasIntervalGroupName

`func (o *Interval) HasIntervalGroupName() bool`

HasIntervalGroupName returns a boolean if a field has been set.

### GetTimeline

`func (o *Interval) GetTimeline() string`

GetTimeline returns the Timeline field if non-nil, zero value otherwise.

### GetTimelineOk

`func (o *Interval) GetTimelineOk() (*string, bool)`

GetTimelineOk returns a tuple with the Timeline field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimeline

`func (o *Interval) SetTimeline(v string)`

SetTimeline sets Timeline field to given value.

### HasTimeline

`func (o *Interval) HasTimeline() bool`

HasTimeline returns a boolean if a field has been set.

### GetDefinedUsingInterval

`func (o *Interval) GetDefinedUsingInterval() string`

GetDefinedUsingInterval returns the DefinedUsingInterval field if non-nil, zero value otherwise.

### GetDefinedUsingIntervalOk

`func (o *Interval) GetDefinedUsingIntervalOk() (*string, bool)`

GetDefinedUsingIntervalOk returns a tuple with the DefinedUsingInterval field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDefinedUsingInterval

`func (o *Interval) SetDefinedUsingInterval(v string)`

SetDefinedUsingInterval sets DefinedUsingInterval field to given value.

### HasDefinedUsingInterval

`func (o *Interval) HasDefinedUsingInterval() bool`

HasDefinedUsingInterval returns a boolean if a field has been set.

### GetWindowCalculationForm

`func (o *Interval) GetWindowCalculationForm() string`

GetWindowCalculationForm returns the WindowCalculationForm field if non-nil, zero value otherwise.

### GetWindowCalculationFormOk

`func (o *Interval) GetWindowCalculationFormOk() (*string, bool)`

GetWindowCalculationFormOk returns a tuple with the WindowCalculationForm field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWindowCalculationForm

`func (o *Interval) SetWindowCalculationForm(v string)`

SetWindowCalculationForm sets WindowCalculationForm field to given value.

### HasWindowCalculationForm

`func (o *Interval) HasWindowCalculationForm() bool`

HasWindowCalculationForm returns a boolean if a field has been set.

### GetWindowCalculationDate

`func (o *Interval) GetWindowCalculationDate() string`

GetWindowCalculationDate returns the WindowCalculationDate field if non-nil, zero value otherwise.

### GetWindowCalculationDateOk

`func (o *Interval) GetWindowCalculationDateOk() (*string, bool)`

GetWindowCalculationDateOk returns a tuple with the WindowCalculationDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWindowCalculationDate

`func (o *Interval) SetWindowCalculationDate(v string)`

SetWindowCalculationDate sets WindowCalculationDate field to given value.

### HasWindowCalculationDate

`func (o *Interval) HasWindowCalculationDate() bool`

HasWindowCalculationDate returns a boolean if a field has been set.

### GetActualDateForm

`func (o *Interval) GetActualDateForm() string`

GetActualDateForm returns the ActualDateForm field if non-nil, zero value otherwise.

### GetActualDateFormOk

`func (o *Interval) GetActualDateFormOk() (*string, bool)`

GetActualDateFormOk returns a tuple with the ActualDateForm field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetActualDateForm

`func (o *Interval) SetActualDateForm(v string)`

SetActualDateForm sets ActualDateForm field to given value.

### HasActualDateForm

`func (o *Interval) HasActualDateForm() bool`

HasActualDateForm returns a boolean if a field has been set.

### GetActualDate

`func (o *Interval) GetActualDate() string`

GetActualDate returns the ActualDate field if non-nil, zero value otherwise.

### GetActualDateOk

`func (o *Interval) GetActualDateOk() (*string, bool)`

GetActualDateOk returns a tuple with the ActualDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetActualDate

`func (o *Interval) SetActualDate(v string)`

SetActualDate sets ActualDate field to given value.

### HasActualDate

`func (o *Interval) HasActualDate() bool`

HasActualDate returns a boolean if a field has been set.

### GetDueDateWillBeIn

`func (o *Interval) GetDueDateWillBeIn() int32`

GetDueDateWillBeIn returns the DueDateWillBeIn field if non-nil, zero value otherwise.

### GetDueDateWillBeInOk

`func (o *Interval) GetDueDateWillBeInOk() (*int32, bool)`

GetDueDateWillBeInOk returns a tuple with the DueDateWillBeIn field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDueDateWillBeIn

`func (o *Interval) SetDueDateWillBeIn(v int32)`

SetDueDateWillBeIn sets DueDateWillBeIn field to given value.

### HasDueDateWillBeIn

`func (o *Interval) HasDueDateWillBeIn() bool`

HasDueDateWillBeIn returns a boolean if a field has been set.

### GetNegativeSlack

`func (o *Interval) GetNegativeSlack() int32`

GetNegativeSlack returns the NegativeSlack field if non-nil, zero value otherwise.

### GetNegativeSlackOk

`func (o *Interval) GetNegativeSlackOk() (*int32, bool)`

GetNegativeSlackOk returns a tuple with the NegativeSlack field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNegativeSlack

`func (o *Interval) SetNegativeSlack(v int32)`

SetNegativeSlack sets NegativeSlack field to given value.

### HasNegativeSlack

`func (o *Interval) HasNegativeSlack() bool`

HasNegativeSlack returns a boolean if a field has been set.

### GetPositiveSlack

`func (o *Interval) GetPositiveSlack() int32`

GetPositiveSlack returns the PositiveSlack field if non-nil, zero value otherwise.

### GetPositiveSlackOk

`func (o *Interval) GetPositiveSlackOk() (*int32, bool)`

GetPositiveSlackOk returns a tuple with the PositiveSlack field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPositiveSlack

`func (o *Interval) SetPositiveSlack(v int32)`

SetPositiveSlack sets PositiveSlack field to given value.

### HasPositiveSlack

`func (o *Interval) HasPositiveSlack() bool`

HasPositiveSlack returns a boolean if a field has been set.

### GetEproGracePeriod

`func (o *Interval) GetEproGracePeriod() int32`

GetEproGracePeriod returns the EproGracePeriod field if non-nil, zero value otherwise.

### GetEproGracePeriodOk

`func (o *Interval) GetEproGracePeriodOk() (*int32, bool)`

GetEproGracePeriodOk returns a tuple with the EproGracePeriod field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEproGracePeriod

`func (o *Interval) SetEproGracePeriod(v int32)`

SetEproGracePeriod sets EproGracePeriod field to given value.

### HasEproGracePeriod

`func (o *Interval) HasEproGracePeriod() bool`

HasEproGracePeriod returns a boolean if a field has been set.

### GetForms

`func (o *Interval) GetForms() []ComponentsSchemasIntervalFormsItem`

GetForms returns the Forms field if non-nil, zero value otherwise.

### GetFormsOk

`func (o *Interval) GetFormsOk() (*[]ComponentsSchemasIntervalFormsItem, bool)`

GetFormsOk returns a tuple with the Forms field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetForms

`func (o *Interval) SetForms(v []ComponentsSchemasIntervalFormsItem)`

SetForms sets Forms field to given value.

### HasForms

`func (o *Interval) HasForms() bool`

HasForms returns a boolean if a field has been set.

### GetDisabled

`func (o *Interval) GetDisabled() bool`

GetDisabled returns the Disabled field if non-nil, zero value otherwise.

### GetDisabledOk

`func (o *Interval) GetDisabledOk() (*bool, bool)`

GetDisabledOk returns a tuple with the Disabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDisabled

`func (o *Interval) SetDisabled(v bool)`

SetDisabled sets Disabled field to given value.

### HasDisabled

`func (o *Interval) HasDisabled() bool`

HasDisabled returns a boolean if a field has been set.

### GetDateCreated

`func (o *Interval) GetDateCreated() string`

GetDateCreated returns the DateCreated field if non-nil, zero value otherwise.

### GetDateCreatedOk

`func (o *Interval) GetDateCreatedOk() (*string, bool)`

GetDateCreatedOk returns a tuple with the DateCreated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateCreated

`func (o *Interval) SetDateCreated(v string)`

SetDateCreated sets DateCreated field to given value.

### HasDateCreated

`func (o *Interval) HasDateCreated() bool`

HasDateCreated returns a boolean if a field has been set.

### GetDateModified

`func (o *Interval) GetDateModified() string`

GetDateModified returns the DateModified field if non-nil, zero value otherwise.

### GetDateModifiedOk

`func (o *Interval) GetDateModifiedOk() (*string, bool)`

GetDateModifiedOk returns a tuple with the DateModified field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateModified

`func (o *Interval) SetDateModified(v string)`

SetDateModified sets DateModified field to given value.

### HasDateModified

`func (o *Interval) HasDateModified() bool`

HasDateModified returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


