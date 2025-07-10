

# Record


## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**studyKey** | **String** | Unique study key |  [optional] |
|**intervalId** | **Integer** | Interval ID (visit definition) that this record is associated with |  [optional] |
|**formId** | **Integer** | Form ID of the form this record instance belongs to |  [optional] |
|**formKey** | **String** | Form key of the form for this record instance |  [optional] |
|**siteId** | **Integer** | Site ID associated with the record |  [optional] |
|**recordId** | **Integer** | Unique record ID |  [optional] |
|**recordOid** | **String** | Client-assigned record OID |  [optional] |
|**recordType** | **String** | Type of record (e.g., SUBJECT for subject-related forms) |  [optional] |
|**recordStatus** | **String** | Current status of the record (e.g., Record Incomplete, Record Complete) |  [optional] |
|**deleted** | **Boolean** | Whether the record is marked as deleted |  [optional] |
|**dateCreated** | **String** | Date when this record was created |  [optional] |
|**dateModified** | **String** | Date when this record was last modified |  [optional] |
|**subjectId** | **Integer** | Mednet subject ID that this record is associated with |  [optional] |
|**subjectOid** | **String** | Client-assigned subject OID for the subject this record is associated with |  [optional] |
|**subjectKey** | **String** | Subject display ID that this record is associated with |  [optional] |
|**visitId** | **Integer** | Visit instance ID that this record is associated with (if applicable) |  [optional] |
|**parentRecordId** | **Integer** | Record ID of the parent record if this record is a subrecord (if applicable) |  [optional] |
|**keywords** | [**List&lt;Keyword&gt;**](Keyword.md) | List of keywords associated with the record |  [optional] |
|**recordData** | **Map&lt;String, Object&gt;** | Data fields and values captured in this record. The structure is dynamic, with keys corresponding to variable names. |  [optional] |



