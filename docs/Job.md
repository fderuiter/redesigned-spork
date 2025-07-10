# Job

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**JobId** | Pointer to **string** | Unique job identifier | [optional] 
**BatchId** | Pointer to **string** | Batch ID associated with the job (useful for linking with record creation requests) | [optional] 
**State** | Pointer to **string** | State of the job (e.g., completed, pending) | [optional] 
**DateCreated** | Pointer to **string** | Timestamp when the job was created | [optional] 
**DateStarted** | Pointer to **string** | Timestamp when the job started processing | [optional] 
**DateFinished** | Pointer to **string** | Timestamp when the job finished processing | [optional] 

## Methods

### NewJob

`func NewJob() *Job`

NewJob instantiates a new Job object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewJobWithDefaults

`func NewJobWithDefaults() *Job`

NewJobWithDefaults instantiates a new Job object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetJobId

`func (o *Job) GetJobId() string`

GetJobId returns the JobId field if non-nil, zero value otherwise.

### GetJobIdOk

`func (o *Job) GetJobIdOk() (*string, bool)`

GetJobIdOk returns a tuple with the JobId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetJobId

`func (o *Job) SetJobId(v string)`

SetJobId sets JobId field to given value.

### HasJobId

`func (o *Job) HasJobId() bool`

HasJobId returns a boolean if a field has been set.

### GetBatchId

`func (o *Job) GetBatchId() string`

GetBatchId returns the BatchId field if non-nil, zero value otherwise.

### GetBatchIdOk

`func (o *Job) GetBatchIdOk() (*string, bool)`

GetBatchIdOk returns a tuple with the BatchId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBatchId

`func (o *Job) SetBatchId(v string)`

SetBatchId sets BatchId field to given value.

### HasBatchId

`func (o *Job) HasBatchId() bool`

HasBatchId returns a boolean if a field has been set.

### GetState

`func (o *Job) GetState() string`

GetState returns the State field if non-nil, zero value otherwise.

### GetStateOk

`func (o *Job) GetStateOk() (*string, bool)`

GetStateOk returns a tuple with the State field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetState

`func (o *Job) SetState(v string)`

SetState sets State field to given value.

### HasState

`func (o *Job) HasState() bool`

HasState returns a boolean if a field has been set.

### GetDateCreated

`func (o *Job) GetDateCreated() string`

GetDateCreated returns the DateCreated field if non-nil, zero value otherwise.

### GetDateCreatedOk

`func (o *Job) GetDateCreatedOk() (*string, bool)`

GetDateCreatedOk returns a tuple with the DateCreated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateCreated

`func (o *Job) SetDateCreated(v string)`

SetDateCreated sets DateCreated field to given value.

### HasDateCreated

`func (o *Job) HasDateCreated() bool`

HasDateCreated returns a boolean if a field has been set.

### GetDateStarted

`func (o *Job) GetDateStarted() string`

GetDateStarted returns the DateStarted field if non-nil, zero value otherwise.

### GetDateStartedOk

`func (o *Job) GetDateStartedOk() (*string, bool)`

GetDateStartedOk returns a tuple with the DateStarted field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateStarted

`func (o *Job) SetDateStarted(v string)`

SetDateStarted sets DateStarted field to given value.

### HasDateStarted

`func (o *Job) HasDateStarted() bool`

HasDateStarted returns a boolean if a field has been set.

### GetDateFinished

`func (o *Job) GetDateFinished() string`

GetDateFinished returns the DateFinished field if non-nil, zero value otherwise.

### GetDateFinishedOk

`func (o *Job) GetDateFinishedOk() (*string, bool)`

GetDateFinishedOk returns a tuple with the DateFinished field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateFinished

`func (o *Job) SetDateFinished(v string)`

SetDateFinished sets DateFinished field to given value.

### HasDateFinished

`func (o *Job) HasDateFinished() bool`

HasDateFinished returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


