

# RecordRevision


## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**studyKey** | **String** | Unique study key |  [optional] |
|**recordRevisionId** | **Integer** | Unique system identifier for the record revision |  [optional] |
|**recordId** | **Integer** | Unique system identifier of the related record |  [optional] |
|**recordOid** | **String** | Client-assigned record OID (if any) |  [optional] |
|**recordRevision** | **Integer** | Revision number of the record (version of the record status) |  [optional] |
|**dataRevision** | **Integer** | Revision number of the data within the record |  [optional] |
|**recordStatus** | **String** | Status of the record at this revision (user-defined status label) |  [optional] |
|**subjectId** | **Integer** | Mednet subject ID related to the record |  [optional] |
|**subjectOid** | **String** | Client-assigned subject OID related to the record |  [optional] |
|**subjectKey** | **String** | Subject display ID related to the record |  [optional] |
|**siteId** | **Integer** | Site ID related to the record |  [optional] |
|**formKey** | **String** | Form key of the form that the record belongs to |  [optional] |
|**intervalId** | **Integer** | Interval ID (visit definition) related to the record |  [optional] |
|**role** | **String** | Role name of the user who saved the record revision |  [optional] |
|**user** | **String** | Username of the user who saved the record revision |  [optional] |
|**reasonForChange** | **String** | Reason for change, if provided (for audit trail) |  [optional] |
|**deleted** | **Boolean** | Whether the record was deleted in this revision |  [optional] |
|**dateCreated** | **String** | Date when this record revision was created |  [optional] |



