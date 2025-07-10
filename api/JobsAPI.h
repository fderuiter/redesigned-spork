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
#include "../model/job.h"


// Retrieve job status by batch ID
//
job_t*
JobsAPI_getJobStatus(apiClient_t *apiClient, char *studyKey, char *batchId);


