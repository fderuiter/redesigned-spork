#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/components_schemas_record_create_request_item.h"
#include "../model/inline_object.h"
#include "../model/inline_object_1.h"
#include "../model/inline_object_2.h"
#include "../model/inline_object_3.h"
#include "../model/inline_object_4.h"
#include "../model/inline_object_5.h"
#include "../model/record_job_status.h"
#include "../model/record_list.h"


// Add new record or update subject/record data
//
record_job_status_t*
RecordsAPI_createRecords(apiClient_t *apiClient, char *studyKey, list_t *components_schemas_record_create_request_item);


// List records (eCRF instances) in a study
//
record_list_t*
RecordsAPI_listRecords(apiClient_t *apiClient, char *studyKey, int *page, int *size, char *sort, char *filter, char *recordDataFilter);


