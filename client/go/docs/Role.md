# Role

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**DateCreated** | Pointer to **[]int32** | Timestamp when the role assignment was created (as [year, month, day, hour, minute, second, nanosecond]) | [optional] 
**DateModified** | Pointer to **[]int32** | Timestamp when the role assignment was last modified | [optional] 
**RoleId** | Pointer to **string** | Unique role ID (UUID) | [optional] 
**CommunityId** | Pointer to **int32** | Community ID or level associated with the role | [optional] 
**Name** | Pointer to **string** | Name of the role | [optional] 
**Description** | Pointer to **string** | Description of the role | [optional] 
**Level** | Pointer to **int32** | Role level or hierarchy | [optional] 
**Type** | Pointer to **string** | Role type/category | [optional] 
**Inactive** | Pointer to **bool** | Whether the role is inactive | [optional] 

## Methods

### NewRole

`func NewRole() *Role`

NewRole instantiates a new Role object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRoleWithDefaults

`func NewRoleWithDefaults() *Role`

NewRoleWithDefaults instantiates a new Role object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDateCreated

`func (o *Role) GetDateCreated() []int32`

GetDateCreated returns the DateCreated field if non-nil, zero value otherwise.

### GetDateCreatedOk

`func (o *Role) GetDateCreatedOk() (*[]int32, bool)`

GetDateCreatedOk returns a tuple with the DateCreated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateCreated

`func (o *Role) SetDateCreated(v []int32)`

SetDateCreated sets DateCreated field to given value.

### HasDateCreated

`func (o *Role) HasDateCreated() bool`

HasDateCreated returns a boolean if a field has been set.

### GetDateModified

`func (o *Role) GetDateModified() []int32`

GetDateModified returns the DateModified field if non-nil, zero value otherwise.

### GetDateModifiedOk

`func (o *Role) GetDateModifiedOk() (*[]int32, bool)`

GetDateModifiedOk returns a tuple with the DateModified field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateModified

`func (o *Role) SetDateModified(v []int32)`

SetDateModified sets DateModified field to given value.

### HasDateModified

`func (o *Role) HasDateModified() bool`

HasDateModified returns a boolean if a field has been set.

### GetRoleId

`func (o *Role) GetRoleId() string`

GetRoleId returns the RoleId field if non-nil, zero value otherwise.

### GetRoleIdOk

`func (o *Role) GetRoleIdOk() (*string, bool)`

GetRoleIdOk returns a tuple with the RoleId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRoleId

`func (o *Role) SetRoleId(v string)`

SetRoleId sets RoleId field to given value.

### HasRoleId

`func (o *Role) HasRoleId() bool`

HasRoleId returns a boolean if a field has been set.

### GetCommunityId

`func (o *Role) GetCommunityId() int32`

GetCommunityId returns the CommunityId field if non-nil, zero value otherwise.

### GetCommunityIdOk

`func (o *Role) GetCommunityIdOk() (*int32, bool)`

GetCommunityIdOk returns a tuple with the CommunityId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCommunityId

`func (o *Role) SetCommunityId(v int32)`

SetCommunityId sets CommunityId field to given value.

### HasCommunityId

`func (o *Role) HasCommunityId() bool`

HasCommunityId returns a boolean if a field has been set.

### GetName

`func (o *Role) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *Role) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *Role) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *Role) HasName() bool`

HasName returns a boolean if a field has been set.

### GetDescription

`func (o *Role) GetDescription() string`

GetDescription returns the Description field if non-nil, zero value otherwise.

### GetDescriptionOk

`func (o *Role) GetDescriptionOk() (*string, bool)`

GetDescriptionOk returns a tuple with the Description field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDescription

`func (o *Role) SetDescription(v string)`

SetDescription sets Description field to given value.

### HasDescription

`func (o *Role) HasDescription() bool`

HasDescription returns a boolean if a field has been set.

### GetLevel

`func (o *Role) GetLevel() int32`

GetLevel returns the Level field if non-nil, zero value otherwise.

### GetLevelOk

`func (o *Role) GetLevelOk() (*int32, bool)`

GetLevelOk returns a tuple with the Level field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLevel

`func (o *Role) SetLevel(v int32)`

SetLevel sets Level field to given value.

### HasLevel

`func (o *Role) HasLevel() bool`

HasLevel returns a boolean if a field has been set.

### GetType

`func (o *Role) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *Role) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *Role) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *Role) HasType() bool`

HasType returns a boolean if a field has been set.

### GetInactive

`func (o *Role) GetInactive() bool`

GetInactive returns the Inactive field if non-nil, zero value otherwise.

### GetInactiveOk

`func (o *Role) GetInactiveOk() (*bool, bool)`

GetInactiveOk returns a tuple with the Inactive field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInactive

`func (o *Role) SetInactive(v bool)`

SetInactive sets Inactive field to given value.

### HasInactive

`func (o *Role) HasInactive() bool`

HasInactive returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


