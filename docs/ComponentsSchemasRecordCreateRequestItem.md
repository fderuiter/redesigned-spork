# ComponentsSchemasRecordCreateRequestItem

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**FormKey** | **string** | Form key identifying the eCRF to create or update | 
**FormId** | Pointer to **int32** | Form ID identifying the eCRF to create or update (alternative to formKey) | [optional] 
**SiteName** | Pointer to **string** | Name of the site where the record should be created (for new subject registration) | [optional] 
**SiteId** | Pointer to **int32** | Site ID for the record (alternative to siteName) | [optional] 
**SubjectKey** | Pointer to **string** | Subject identifier (display ID) for which to create or update the record | [optional] 
**SubjectId** | Pointer to **int32** | Subject ID for which to create or update the record (alternative to subjectKey) | [optional] 
**SubjectOid** | Pointer to **string** | Subject OID for which to create or update the record (alternative to subjectKey) | [optional] 
**IntervalName** | Pointer to **string** | Name of the interval (visit) for a scheduled record update | [optional] 
**IntervalId** | Pointer to **int32** | Interval ID for a scheduled record update (alternative to intervalName) | [optional] 
**RecordId** | Pointer to **int32** | Record ID for updating an existing unscheduled record (if applicable) | [optional] 
**RecordOid** | Pointer to **string** | Record OID for updating an existing unscheduled record (if applicable) | [optional] 
**Data** | **map[string]interface{}** | Key-value pairs of field names and values for the record data | 

## Methods

### NewComponentsSchemasRecordCreateRequestItem

`func NewComponentsSchemasRecordCreateRequestItem(formKey string, data map[string]interface{}, ) *ComponentsSchemasRecordCreateRequestItem`

NewComponentsSchemasRecordCreateRequestItem instantiates a new ComponentsSchemasRecordCreateRequestItem object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewComponentsSchemasRecordCreateRequestItemWithDefaults

`func NewComponentsSchemasRecordCreateRequestItemWithDefaults() *ComponentsSchemasRecordCreateRequestItem`

NewComponentsSchemasRecordCreateRequestItemWithDefaults instantiates a new ComponentsSchemasRecordCreateRequestItem object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetFormKey

`func (o *ComponentsSchemasRecordCreateRequestItem) GetFormKey() string`

GetFormKey returns the FormKey field if non-nil, zero value otherwise.

### GetFormKeyOk

`func (o *ComponentsSchemasRecordCreateRequestItem) GetFormKeyOk() (*string, bool)`

GetFormKeyOk returns a tuple with the FormKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormKey

`func (o *ComponentsSchemasRecordCreateRequestItem) SetFormKey(v string)`

SetFormKey sets FormKey field to given value.


### GetFormId

`func (o *ComponentsSchemasRecordCreateRequestItem) GetFormId() int32`

GetFormId returns the FormId field if non-nil, zero value otherwise.

### GetFormIdOk

`func (o *ComponentsSchemasRecordCreateRequestItem) GetFormIdOk() (*int32, bool)`

GetFormIdOk returns a tuple with the FormId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormId

`func (o *ComponentsSchemasRecordCreateRequestItem) SetFormId(v int32)`

SetFormId sets FormId field to given value.

### HasFormId

`func (o *ComponentsSchemasRecordCreateRequestItem) HasFormId() bool`

HasFormId returns a boolean if a field has been set.

### GetSiteName

`func (o *ComponentsSchemasRecordCreateRequestItem) GetSiteName() string`

GetSiteName returns the SiteName field if non-nil, zero value otherwise.

### GetSiteNameOk

`func (o *ComponentsSchemasRecordCreateRequestItem) GetSiteNameOk() (*string, bool)`

GetSiteNameOk returns a tuple with the SiteName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSiteName

`func (o *ComponentsSchemasRecordCreateRequestItem) SetSiteName(v string)`

SetSiteName sets SiteName field to given value.

### HasSiteName

`func (o *ComponentsSchemasRecordCreateRequestItem) HasSiteName() bool`

HasSiteName returns a boolean if a field has been set.

### GetSiteId

`func (o *ComponentsSchemasRecordCreateRequestItem) GetSiteId() int32`

GetSiteId returns the SiteId field if non-nil, zero value otherwise.

### GetSiteIdOk

`func (o *ComponentsSchemasRecordCreateRequestItem) GetSiteIdOk() (*int32, bool)`

GetSiteIdOk returns a tuple with the SiteId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSiteId

`func (o *ComponentsSchemasRecordCreateRequestItem) SetSiteId(v int32)`

SetSiteId sets SiteId field to given value.

### HasSiteId

`func (o *ComponentsSchemasRecordCreateRequestItem) HasSiteId() bool`

HasSiteId returns a boolean if a field has been set.

### GetSubjectKey

`func (o *ComponentsSchemasRecordCreateRequestItem) GetSubjectKey() string`

GetSubjectKey returns the SubjectKey field if non-nil, zero value otherwise.

### GetSubjectKeyOk

`func (o *ComponentsSchemasRecordCreateRequestItem) GetSubjectKeyOk() (*string, bool)`

GetSubjectKeyOk returns a tuple with the SubjectKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectKey

`func (o *ComponentsSchemasRecordCreateRequestItem) SetSubjectKey(v string)`

SetSubjectKey sets SubjectKey field to given value.

### HasSubjectKey

`func (o *ComponentsSchemasRecordCreateRequestItem) HasSubjectKey() bool`

HasSubjectKey returns a boolean if a field has been set.

### GetSubjectId

`func (o *ComponentsSchemasRecordCreateRequestItem) GetSubjectId() int32`

GetSubjectId returns the SubjectId field if non-nil, zero value otherwise.

### GetSubjectIdOk

`func (o *ComponentsSchemasRecordCreateRequestItem) GetSubjectIdOk() (*int32, bool)`

GetSubjectIdOk returns a tuple with the SubjectId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectId

`func (o *ComponentsSchemasRecordCreateRequestItem) SetSubjectId(v int32)`

SetSubjectId sets SubjectId field to given value.

### HasSubjectId

`func (o *ComponentsSchemasRecordCreateRequestItem) HasSubjectId() bool`

HasSubjectId returns a boolean if a field has been set.

### GetSubjectOid

`func (o *ComponentsSchemasRecordCreateRequestItem) GetSubjectOid() string`

GetSubjectOid returns the SubjectOid field if non-nil, zero value otherwise.

### GetSubjectOidOk

`func (o *ComponentsSchemasRecordCreateRequestItem) GetSubjectOidOk() (*string, bool)`

GetSubjectOidOk returns a tuple with the SubjectOid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectOid

`func (o *ComponentsSchemasRecordCreateRequestItem) SetSubjectOid(v string)`

SetSubjectOid sets SubjectOid field to given value.

### HasSubjectOid

`func (o *ComponentsSchemasRecordCreateRequestItem) HasSubjectOid() bool`

HasSubjectOid returns a boolean if a field has been set.

### GetIntervalName

`func (o *ComponentsSchemasRecordCreateRequestItem) GetIntervalName() string`

GetIntervalName returns the IntervalName field if non-nil, zero value otherwise.

### GetIntervalNameOk

`func (o *ComponentsSchemasRecordCreateRequestItem) GetIntervalNameOk() (*string, bool)`

GetIntervalNameOk returns a tuple with the IntervalName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntervalName

`func (o *ComponentsSchemasRecordCreateRequestItem) SetIntervalName(v string)`

SetIntervalName sets IntervalName field to given value.

### HasIntervalName

`func (o *ComponentsSchemasRecordCreateRequestItem) HasIntervalName() bool`

HasIntervalName returns a boolean if a field has been set.

### GetIntervalId

`func (o *ComponentsSchemasRecordCreateRequestItem) GetIntervalId() int32`

GetIntervalId returns the IntervalId field if non-nil, zero value otherwise.

### GetIntervalIdOk

`func (o *ComponentsSchemasRecordCreateRequestItem) GetIntervalIdOk() (*int32, bool)`

GetIntervalIdOk returns a tuple with the IntervalId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntervalId

`func (o *ComponentsSchemasRecordCreateRequestItem) SetIntervalId(v int32)`

SetIntervalId sets IntervalId field to given value.

### HasIntervalId

`func (o *ComponentsSchemasRecordCreateRequestItem) HasIntervalId() bool`

HasIntervalId returns a boolean if a field has been set.

### GetRecordId

`func (o *ComponentsSchemasRecordCreateRequestItem) GetRecordId() int32`

GetRecordId returns the RecordId field if non-nil, zero value otherwise.

### GetRecordIdOk

`func (o *ComponentsSchemasRecordCreateRequestItem) GetRecordIdOk() (*int32, bool)`

GetRecordIdOk returns a tuple with the RecordId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordId

`func (o *ComponentsSchemasRecordCreateRequestItem) SetRecordId(v int32)`

SetRecordId sets RecordId field to given value.

### HasRecordId

`func (o *ComponentsSchemasRecordCreateRequestItem) HasRecordId() bool`

HasRecordId returns a boolean if a field has been set.

### GetRecordOid

`func (o *ComponentsSchemasRecordCreateRequestItem) GetRecordOid() string`

GetRecordOid returns the RecordOid field if non-nil, zero value otherwise.

### GetRecordOidOk

`func (o *ComponentsSchemasRecordCreateRequestItem) GetRecordOidOk() (*string, bool)`

GetRecordOidOk returns a tuple with the RecordOid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordOid

`func (o *ComponentsSchemasRecordCreateRequestItem) SetRecordOid(v string)`

SetRecordOid sets RecordOid field to given value.

### HasRecordOid

`func (o *ComponentsSchemasRecordCreateRequestItem) HasRecordOid() bool`

HasRecordOid returns a boolean if a field has been set.

### GetData

`func (o *ComponentsSchemasRecordCreateRequestItem) GetData() map[string]interface{}`

GetData returns the Data field if non-nil, zero value otherwise.

### GetDataOk

`func (o *ComponentsSchemasRecordCreateRequestItem) GetDataOk() (*map[string]interface{}, bool)`

GetDataOk returns a tuple with the Data field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetData

`func (o *ComponentsSchemasRecordCreateRequestItem) SetData(v map[string]interface{})`

SetData sets Data field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


