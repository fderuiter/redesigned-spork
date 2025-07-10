# variable_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | **char \*** | Unique study key | [optional] 
**variable_id** | **int** | Mednet variable ID | [optional] 
**variable_type** | **mednet_edc_api_variable_VARIABLETYPE_e** | Type of the variable (field type), e.g., RADIO, TEXT, etc. | [optional] 
**variable_name** | **char \*** | Name of the variable (question text or label) | [optional] 
**sequence** | **int** | Sequence of the variable on the form | [optional] 
**revision** | **int** | Number of modifications of the variable (via form metadata revisions) | [optional] 
**disabled** | **int** | Whether the variable is marked as disabled (deleted) | [optional] 
**date_created** | **char \*** | Date when this variable was created | [optional] 
**date_modified** | **char \*** | Date when this variable was last modified | [optional] 
**form_id** | **int** | ID of the form that this variable belongs to | [optional] 
**variable_oid** | **char \*** | Client-assigned variable OID | [optional] 
**deleted** | **int** | Whether the variable is marked as deleted | [optional] 
**form_key** | **char \*** | Form key of the form that this variable belongs to | [optional] 
**form_name** | **char \*** | Name of the form that this variable belongs to | [optional] 
**label** | **char \*** | User-defined identifier (field name) for the variable | [optional] 
**blinded** | **int** | Whether the variable is flagged as blinded (hidden in certain contexts) | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


