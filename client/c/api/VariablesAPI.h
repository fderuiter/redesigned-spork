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
#include "../model/variable_list.h"


// List variables (fields) in a study
//
variable_list_t*
VariablesAPI_listVariables(apiClient_t *apiClient, char *studyKey, int *page, int *size, char *sort, char *filter);


