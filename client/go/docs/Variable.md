# Variable

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StudyKey** | Pointer to **string** | Unique study key | [optional] 
**VariableId** | Pointer to **int32** | Mednet variable ID | [optional] 
**VariableType** | Pointer to **string** | Type of the variable (field type), e.g., RADIO, TEXT, etc. | [optional] 
**VariableName** | Pointer to **string** | Name of the variable (question text or label) | [optional] 
**Sequence** | Pointer to **int32** | Sequence of the variable on the form | [optional] 
**Revision** | Pointer to **int32** | Number of modifications of the variable (via form metadata revisions) | [optional] 
**Disabled** | Pointer to **bool** | Whether the variable is marked as disabled (deleted) | [optional] 
**DateCreated** | Pointer to **string** | Date when this variable was created | [optional] 
**DateModified** | Pointer to **string** | Date when this variable was last modified | [optional] 
**FormId** | Pointer to **int32** | ID of the form that this variable belongs to | [optional] 
**VariableOid** | Pointer to **string** | Client-assigned variable OID | [optional] 
**Deleted** | Pointer to **bool** | Whether the variable is marked as deleted | [optional] 
**FormKey** | Pointer to **string** | Form key of the form that this variable belongs to | [optional] 
**FormName** | Pointer to **string** | Name of the form that this variable belongs to | [optional] 
**Label** | Pointer to **string** | User-defined identifier (field name) for the variable | [optional] 
**Blinded** | Pointer to **bool** | Whether the variable is flagged as blinded (hidden in certain contexts) | [optional] 

## Methods

### NewVariable

`func NewVariable() *Variable`

NewVariable instantiates a new Variable object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVariableWithDefaults

`func NewVariableWithDefaults() *Variable`

NewVariableWithDefaults instantiates a new Variable object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStudyKey

`func (o *Variable) GetStudyKey() string`

GetStudyKey returns the StudyKey field if non-nil, zero value otherwise.

### GetStudyKeyOk

`func (o *Variable) GetStudyKeyOk() (*string, bool)`

GetStudyKeyOk returns a tuple with the StudyKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyKey

`func (o *Variable) SetStudyKey(v string)`

SetStudyKey sets StudyKey field to given value.

### HasStudyKey

`func (o *Variable) HasStudyKey() bool`

HasStudyKey returns a boolean if a field has been set.

### GetVariableId

`func (o *Variable) GetVariableId() int32`

GetVariableId returns the VariableId field if non-nil, zero value otherwise.

### GetVariableIdOk

`func (o *Variable) GetVariableIdOk() (*int32, bool)`

GetVariableIdOk returns a tuple with the VariableId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVariableId

`func (o *Variable) SetVariableId(v int32)`

SetVariableId sets VariableId field to given value.

### HasVariableId

`func (o *Variable) HasVariableId() bool`

HasVariableId returns a boolean if a field has been set.

### GetVariableType

`func (o *Variable) GetVariableType() string`

GetVariableType returns the VariableType field if non-nil, zero value otherwise.

### GetVariableTypeOk

`func (o *Variable) GetVariableTypeOk() (*string, bool)`

GetVariableTypeOk returns a tuple with the VariableType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVariableType

`func (o *Variable) SetVariableType(v string)`

SetVariableType sets VariableType field to given value.

### HasVariableType

`func (o *Variable) HasVariableType() bool`

HasVariableType returns a boolean if a field has been set.

### GetVariableName

`func (o *Variable) GetVariableName() string`

GetVariableName returns the VariableName field if non-nil, zero value otherwise.

### GetVariableNameOk

`func (o *Variable) GetVariableNameOk() (*string, bool)`

GetVariableNameOk returns a tuple with the VariableName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVariableName

`func (o *Variable) SetVariableName(v string)`

SetVariableName sets VariableName field to given value.

### HasVariableName

`func (o *Variable) HasVariableName() bool`

HasVariableName returns a boolean if a field has been set.

### GetSequence

`func (o *Variable) GetSequence() int32`

GetSequence returns the Sequence field if non-nil, zero value otherwise.

### GetSequenceOk

`func (o *Variable) GetSequenceOk() (*int32, bool)`

GetSequenceOk returns a tuple with the Sequence field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSequence

`func (o *Variable) SetSequence(v int32)`

SetSequence sets Sequence field to given value.

### HasSequence

`func (o *Variable) HasSequence() bool`

HasSequence returns a boolean if a field has been set.

### GetRevision

`func (o *Variable) GetRevision() int32`

GetRevision returns the Revision field if non-nil, zero value otherwise.

### GetRevisionOk

`func (o *Variable) GetRevisionOk() (*int32, bool)`

GetRevisionOk returns a tuple with the Revision field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRevision

`func (o *Variable) SetRevision(v int32)`

SetRevision sets Revision field to given value.

### HasRevision

`func (o *Variable) HasRevision() bool`

HasRevision returns a boolean if a field has been set.

### GetDisabled

`func (o *Variable) GetDisabled() bool`

GetDisabled returns the Disabled field if non-nil, zero value otherwise.

### GetDisabledOk

`func (o *Variable) GetDisabledOk() (*bool, bool)`

GetDisabledOk returns a tuple with the Disabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDisabled

`func (o *Variable) SetDisabled(v bool)`

SetDisabled sets Disabled field to given value.

### HasDisabled

`func (o *Variable) HasDisabled() bool`

HasDisabled returns a boolean if a field has been set.

### GetDateCreated

`func (o *Variable) GetDateCreated() string`

GetDateCreated returns the DateCreated field if non-nil, zero value otherwise.

### GetDateCreatedOk

`func (o *Variable) GetDateCreatedOk() (*string, bool)`

GetDateCreatedOk returns a tuple with the DateCreated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateCreated

`func (o *Variable) SetDateCreated(v string)`

SetDateCreated sets DateCreated field to given value.

### HasDateCreated

`func (o *Variable) HasDateCreated() bool`

HasDateCreated returns a boolean if a field has been set.

### GetDateModified

`func (o *Variable) GetDateModified() string`

GetDateModified returns the DateModified field if non-nil, zero value otherwise.

### GetDateModifiedOk

`func (o *Variable) GetDateModifiedOk() (*string, bool)`

GetDateModifiedOk returns a tuple with the DateModified field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateModified

`func (o *Variable) SetDateModified(v string)`

SetDateModified sets DateModified field to given value.

### HasDateModified

`func (o *Variable) HasDateModified() bool`

HasDateModified returns a boolean if a field has been set.

### GetFormId

`func (o *Variable) GetFormId() int32`

GetFormId returns the FormId field if non-nil, zero value otherwise.

### GetFormIdOk

`func (o *Variable) GetFormIdOk() (*int32, bool)`

GetFormIdOk returns a tuple with the FormId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormId

`func (o *Variable) SetFormId(v int32)`

SetFormId sets FormId field to given value.

### HasFormId

`func (o *Variable) HasFormId() bool`

HasFormId returns a boolean if a field has been set.

### GetVariableOid

`func (o *Variable) GetVariableOid() string`

GetVariableOid returns the VariableOid field if non-nil, zero value otherwise.

### GetVariableOidOk

`func (o *Variable) GetVariableOidOk() (*string, bool)`

GetVariableOidOk returns a tuple with the VariableOid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVariableOid

`func (o *Variable) SetVariableOid(v string)`

SetVariableOid sets VariableOid field to given value.

### HasVariableOid

`func (o *Variable) HasVariableOid() bool`

HasVariableOid returns a boolean if a field has been set.

### GetDeleted

`func (o *Variable) GetDeleted() bool`

GetDeleted returns the Deleted field if non-nil, zero value otherwise.

### GetDeletedOk

`func (o *Variable) GetDeletedOk() (*bool, bool)`

GetDeletedOk returns a tuple with the Deleted field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDeleted

`func (o *Variable) SetDeleted(v bool)`

SetDeleted sets Deleted field to given value.

### HasDeleted

`func (o *Variable) HasDeleted() bool`

HasDeleted returns a boolean if a field has been set.

### GetFormKey

`func (o *Variable) GetFormKey() string`

GetFormKey returns the FormKey field if non-nil, zero value otherwise.

### GetFormKeyOk

`func (o *Variable) GetFormKeyOk() (*string, bool)`

GetFormKeyOk returns a tuple with the FormKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormKey

`func (o *Variable) SetFormKey(v string)`

SetFormKey sets FormKey field to given value.

### HasFormKey

`func (o *Variable) HasFormKey() bool`

HasFormKey returns a boolean if a field has been set.

### GetFormName

`func (o *Variable) GetFormName() string`

GetFormName returns the FormName field if non-nil, zero value otherwise.

### GetFormNameOk

`func (o *Variable) GetFormNameOk() (*string, bool)`

GetFormNameOk returns a tuple with the FormName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormName

`func (o *Variable) SetFormName(v string)`

SetFormName sets FormName field to given value.

### HasFormName

`func (o *Variable) HasFormName() bool`

HasFormName returns a boolean if a field has been set.

### GetLabel

`func (o *Variable) GetLabel() string`

GetLabel returns the Label field if non-nil, zero value otherwise.

### GetLabelOk

`func (o *Variable) GetLabelOk() (*string, bool)`

GetLabelOk returns a tuple with the Label field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLabel

`func (o *Variable) SetLabel(v string)`

SetLabel sets Label field to given value.

### HasLabel

`func (o *Variable) HasLabel() bool`

HasLabel returns a boolean if a field has been set.

### GetBlinded

`func (o *Variable) GetBlinded() bool`

GetBlinded returns the Blinded field if non-nil, zero value otherwise.

### GetBlindedOk

`func (o *Variable) GetBlindedOk() (*bool, bool)`

GetBlindedOk returns a tuple with the Blinded field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBlinded

`func (o *Variable) SetBlinded(v bool)`

SetBlinded sets Blinded field to given value.

### HasBlinded

`func (o *Variable) HasBlinded() bool`

HasBlinded returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


