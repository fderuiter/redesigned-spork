# RecordJobStatus

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**JobId** | Pointer to **string** | Unique job identifier | [optional] 
**BatchId** | Pointer to **string** | Batch ID used to track the job (identical to jobId in most cases) | [optional] 
**State** | Pointer to **string** | Current state of the job (e.g., created, completed) | [optional] 

## Methods

### NewRecordJobStatus

`func NewRecordJobStatus() *RecordJobStatus`

NewRecordJobStatus instantiates a new RecordJobStatus object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRecordJobStatusWithDefaults

`func NewRecordJobStatusWithDefaults() *RecordJobStatus`

NewRecordJobStatusWithDefaults instantiates a new RecordJobStatus object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetJobId

`func (o *RecordJobStatus) GetJobId() string`

GetJobId returns the JobId field if non-nil, zero value otherwise.

### GetJobIdOk

`func (o *RecordJobStatus) GetJobIdOk() (*string, bool)`

GetJobIdOk returns a tuple with the JobId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetJobId

`func (o *RecordJobStatus) SetJobId(v string)`

SetJobId sets JobId field to given value.

### HasJobId

`func (o *RecordJobStatus) HasJobId() bool`

HasJobId returns a boolean if a field has been set.

### GetBatchId

`func (o *RecordJobStatus) GetBatchId() string`

GetBatchId returns the BatchId field if non-nil, zero value otherwise.

### GetBatchIdOk

`func (o *RecordJobStatus) GetBatchIdOk() (*string, bool)`

GetBatchIdOk returns a tuple with the BatchId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBatchId

`func (o *RecordJobStatus) SetBatchId(v string)`

SetBatchId sets BatchId field to given value.

### HasBatchId

`func (o *RecordJobStatus) HasBatchId() bool`

HasBatchId returns a boolean if a field has been set.

### GetState

`func (o *RecordJobStatus) GetState() string`

GetState returns the State field if non-nil, zero value otherwise.

### GetStateOk

`func (o *RecordJobStatus) GetStateOk() (*string, bool)`

GetStateOk returns a tuple with the State field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetState

`func (o *RecordJobStatus) SetState(v string)`

SetState sets State field to given value.

### HasState

`func (o *RecordJobStatus) HasState() bool`

HasState returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


