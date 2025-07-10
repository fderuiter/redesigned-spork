

# Variable


## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**studyKey** | **String** | Unique study key |  [optional] |
|**variableId** | **Integer** | Mednet variable ID |  [optional] |
|**variableType** | [**VariableTypeEnum**](#VariableTypeEnum) | Type of the variable (field type), e.g., RADIO, TEXT, etc. |  [optional] |
|**variableName** | **String** | Name of the variable (question text or label) |  [optional] |
|**sequence** | **Integer** | Sequence of the variable on the form |  [optional] |
|**revision** | **Integer** | Number of modifications of the variable (via form metadata revisions) |  [optional] |
|**disabled** | **Boolean** | Whether the variable is marked as disabled (deleted) |  [optional] |
|**dateCreated** | **String** | Date when this variable was created |  [optional] |
|**dateModified** | **String** | Date when this variable was last modified |  [optional] |
|**formId** | **Integer** | ID of the form that this variable belongs to |  [optional] |
|**variableOid** | **String** | Client-assigned variable OID |  [optional] |
|**deleted** | **Boolean** | Whether the variable is marked as deleted |  [optional] |
|**formKey** | **String** | Form key of the form that this variable belongs to |  [optional] |
|**formName** | **String** | Name of the form that this variable belongs to |  [optional] |
|**label** | **String** | User-defined identifier (field name) for the variable |  [optional] |
|**blinded** | **Boolean** | Whether the variable is flagged as blinded (hidden in certain contexts) |  [optional] |



## Enum: VariableTypeEnum

| Name | Value |
|---- | -----|
| TEXT | &quot;TEXT&quot; |
| TEXTAREA | &quot;TEXTAREA&quot; |
| RADIO | &quot;RADIO&quot; |
| CHECKBOX | &quot;CHECKBOX&quot; |
| DROPDOWN | &quot;DROPDOWN&quot; |
| DATE | &quot;DATE&quot; |
| NUMBER | &quot;NUMBER&quot; |



