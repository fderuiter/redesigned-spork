#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/inline_object.h"
#include "../model/inline_object_1.h"
#include "../model/inline_object_2.h"
#include "../model/inline_object_3.h"
#include "../model/inline_object_5.h"
#include "../model/record_revision_list.h"


// List record revisions (audit trail entries) in a study
//
record_revision_list_t*
RecordRevisionsAPI_listRecordRevisions(apiClient_t *apiClient, char *studyKey, int *page, int *size, char *sort, char *filter);


