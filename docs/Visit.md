# Visit

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StudyKey** | Pointer to **string** | Unique study key | [optional] 
**VisitId** | Pointer to **int32** | Unique system identifier for the subject visit instance | [optional] 
**IntervalId** | Pointer to **int32** | Unique system identifier of the interval definition for this visit | [optional] 
**IntervalName** | Pointer to **string** | Name of the interval (visit) for this visit instance | [optional] 
**SubjectId** | Pointer to **int32** | Mednet subject ID of the subject | [optional] 
**SubjectKey** | Pointer to **string** | Protocol-assigned subject identifier | [optional] 
**StartDate** | Pointer to **string** | Start date of the visit window (in YYYY-MM-DD format) | [optional] 
**EndDate** | Pointer to **string** | End date of the visit window (in YYYY-MM-DD format) | [optional] 
**DueDate** | Pointer to **string** | Due date of the visit (in YYYY-MM-DD format), if applicable | [optional] 
**VisitDate** | Pointer to **string** | Actual date the visit took place (in YYYY-MM-DD format) | [optional] 
**VisitDateForm** | Pointer to **string** | Name of the form used to capture the actual visit date | [optional] 
**VisitDateQuestion** | Pointer to **string** | Variable name of the field capturing the actual visit date | [optional] 
**Deleted** | Pointer to **bool** | Whether the visit instance is marked as deleted | [optional] 
**DateCreated** | Pointer to **string** | Date when this visit record was created | [optional] 
**DateModified** | Pointer to **string** | Date when this visit record was last modified | [optional] 

## Methods

### NewVisit

`func NewVisit() *Visit`

NewVisit instantiates a new Visit object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVisitWithDefaults

`func NewVisitWithDefaults() *Visit`

NewVisitWithDefaults instantiates a new Visit object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStudyKey

`func (o *Visit) GetStudyKey() string`

GetStudyKey returns the StudyKey field if non-nil, zero value otherwise.

### GetStudyKeyOk

`func (o *Visit) GetStudyKeyOk() (*string, bool)`

GetStudyKeyOk returns a tuple with the StudyKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyKey

`func (o *Visit) SetStudyKey(v string)`

SetStudyKey sets StudyKey field to given value.

### HasStudyKey

`func (o *Visit) HasStudyKey() bool`

HasStudyKey returns a boolean if a field has been set.

### GetVisitId

`func (o *Visit) GetVisitId() int32`

GetVisitId returns the VisitId field if non-nil, zero value otherwise.

### GetVisitIdOk

`func (o *Visit) GetVisitIdOk() (*int32, bool)`

GetVisitIdOk returns a tuple with the VisitId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVisitId

`func (o *Visit) SetVisitId(v int32)`

SetVisitId sets VisitId field to given value.

### HasVisitId

`func (o *Visit) HasVisitId() bool`

HasVisitId returns a boolean if a field has been set.

### GetIntervalId

`func (o *Visit) GetIntervalId() int32`

GetIntervalId returns the IntervalId field if non-nil, zero value otherwise.

### GetIntervalIdOk

`func (o *Visit) GetIntervalIdOk() (*int32, bool)`

GetIntervalIdOk returns a tuple with the IntervalId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntervalId

`func (o *Visit) SetIntervalId(v int32)`

SetIntervalId sets IntervalId field to given value.

### HasIntervalId

`func (o *Visit) HasIntervalId() bool`

HasIntervalId returns a boolean if a field has been set.

### GetIntervalName

`func (o *Visit) GetIntervalName() string`

GetIntervalName returns the IntervalName field if non-nil, zero value otherwise.

### GetIntervalNameOk

`func (o *Visit) GetIntervalNameOk() (*string, bool)`

GetIntervalNameOk returns a tuple with the IntervalName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntervalName

`func (o *Visit) SetIntervalName(v string)`

SetIntervalName sets IntervalName field to given value.

### HasIntervalName

`func (o *Visit) HasIntervalName() bool`

HasIntervalName returns a boolean if a field has been set.

### GetSubjectId

`func (o *Visit) GetSubjectId() int32`

GetSubjectId returns the SubjectId field if non-nil, zero value otherwise.

### GetSubjectIdOk

`func (o *Visit) GetSubjectIdOk() (*int32, bool)`

GetSubjectIdOk returns a tuple with the SubjectId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectId

`func (o *Visit) SetSubjectId(v int32)`

SetSubjectId sets SubjectId field to given value.

### HasSubjectId

`func (o *Visit) HasSubjectId() bool`

HasSubjectId returns a boolean if a field has been set.

### GetSubjectKey

`func (o *Visit) GetSubjectKey() string`

GetSubjectKey returns the SubjectKey field if non-nil, zero value otherwise.

### GetSubjectKeyOk

`func (o *Visit) GetSubjectKeyOk() (*string, bool)`

GetSubjectKeyOk returns a tuple with the SubjectKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectKey

`func (o *Visit) SetSubjectKey(v string)`

SetSubjectKey sets SubjectKey field to given value.

### HasSubjectKey

`func (o *Visit) HasSubjectKey() bool`

HasSubjectKey returns a boolean if a field has been set.

### GetStartDate

`func (o *Visit) GetStartDate() string`

GetStartDate returns the StartDate field if non-nil, zero value otherwise.

### GetStartDateOk

`func (o *Visit) GetStartDateOk() (*string, bool)`

GetStartDateOk returns a tuple with the StartDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStartDate

`func (o *Visit) SetStartDate(v string)`

SetStartDate sets StartDate field to given value.

### HasStartDate

`func (o *Visit) HasStartDate() bool`

HasStartDate returns a boolean if a field has been set.

### GetEndDate

`func (o *Visit) GetEndDate() string`

GetEndDate returns the EndDate field if non-nil, zero value otherwise.

### GetEndDateOk

`func (o *Visit) GetEndDateOk() (*string, bool)`

GetEndDateOk returns a tuple with the EndDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEndDate

`func (o *Visit) SetEndDate(v string)`

SetEndDate sets EndDate field to given value.

### HasEndDate

`func (o *Visit) HasEndDate() bool`

HasEndDate returns a boolean if a field has been set.

### GetDueDate

`func (o *Visit) GetDueDate() string`

GetDueDate returns the DueDate field if non-nil, zero value otherwise.

### GetDueDateOk

`func (o *Visit) GetDueDateOk() (*string, bool)`

GetDueDateOk returns a tuple with the DueDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDueDate

`func (o *Visit) SetDueDate(v string)`

SetDueDate sets DueDate field to given value.

### HasDueDate

`func (o *Visit) HasDueDate() bool`

HasDueDate returns a boolean if a field has been set.

### GetVisitDate

`func (o *Visit) GetVisitDate() string`

GetVisitDate returns the VisitDate field if non-nil, zero value otherwise.

### GetVisitDateOk

`func (o *Visit) GetVisitDateOk() (*string, bool)`

GetVisitDateOk returns a tuple with the VisitDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVisitDate

`func (o *Visit) SetVisitDate(v string)`

SetVisitDate sets VisitDate field to given value.

### HasVisitDate

`func (o *Visit) HasVisitDate() bool`

HasVisitDate returns a boolean if a field has been set.

### GetVisitDateForm

`func (o *Visit) GetVisitDateForm() string`

GetVisitDateForm returns the VisitDateForm field if non-nil, zero value otherwise.

### GetVisitDateFormOk

`func (o *Visit) GetVisitDateFormOk() (*string, bool)`

GetVisitDateFormOk returns a tuple with the VisitDateForm field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVisitDateForm

`func (o *Visit) SetVisitDateForm(v string)`

SetVisitDateForm sets VisitDateForm field to given value.

### HasVisitDateForm

`func (o *Visit) HasVisitDateForm() bool`

HasVisitDateForm returns a boolean if a field has been set.

### GetVisitDateQuestion

`func (o *Visit) GetVisitDateQuestion() string`

GetVisitDateQuestion returns the VisitDateQuestion field if non-nil, zero value otherwise.

### GetVisitDateQuestionOk

`func (o *Visit) GetVisitDateQuestionOk() (*string, bool)`

GetVisitDateQuestionOk returns a tuple with the VisitDateQuestion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVisitDateQuestion

`func (o *Visit) SetVisitDateQuestion(v string)`

SetVisitDateQuestion sets VisitDateQuestion field to given value.

### HasVisitDateQuestion

`func (o *Visit) HasVisitDateQuestion() bool`

HasVisitDateQuestion returns a boolean if a field has been set.

### GetDeleted

`func (o *Visit) GetDeleted() bool`

GetDeleted returns the Deleted field if non-nil, zero value otherwise.

### GetDeletedOk

`func (o *Visit) GetDeletedOk() (*bool, bool)`

GetDeletedOk returns a tuple with the Deleted field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDeleted

`func (o *Visit) SetDeleted(v bool)`

SetDeleted sets Deleted field to given value.

### HasDeleted

`func (o *Visit) HasDeleted() bool`

HasDeleted returns a boolean if a field has been set.

### GetDateCreated

`func (o *Visit) GetDateCreated() string`

GetDateCreated returns the DateCreated field if non-nil, zero value otherwise.

### GetDateCreatedOk

`func (o *Visit) GetDateCreatedOk() (*string, bool)`

GetDateCreatedOk returns a tuple with the DateCreated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateCreated

`func (o *Visit) SetDateCreated(v string)`

SetDateCreated sets DateCreated field to given value.

### HasDateCreated

`func (o *Visit) HasDateCreated() bool`

HasDateCreated returns a boolean if a field has been set.

### GetDateModified

`func (o *Visit) GetDateModified() string`

GetDateModified returns the DateModified field if non-nil, zero value otherwise.

### GetDateModifiedOk

`func (o *Visit) GetDateModifiedOk() (*string, bool)`

GetDateModifiedOk returns a tuple with the DateModified field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateModified

`func (o *Visit) SetDateModified(v string)`

SetDateModified sets DateModified field to given value.

### HasDateModified

`func (o *Visit) HasDateModified() bool`

HasDateModified returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


