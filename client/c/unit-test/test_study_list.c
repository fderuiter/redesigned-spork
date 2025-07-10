#ifndef study_list_TEST
#define study_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define study_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/study_list.h"
study_list_t* instantiate_study_list(int include_optional);

#include "test_metadata.c"
#include "test_pagination.c"


study_list_t* instantiate_study_list(int include_optional) {
  study_list_t* study_list = NULL;
  if (include_optional) {
    study_list = study_list_create(
       // false, not to have infinite recursion
      instantiate_metadata(0),
       // false, not to have infinite recursion
      instantiate_pagination(0),
      list_createList()
    );
  } else {
    study_list = study_list_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return study_list;
}


#ifdef study_list_MAIN

void test_study_list(int include_optional) {
    study_list_t* study_list_1 = instantiate_study_list(include_optional);

	cJSON* jsonstudy_list_1 = study_list_convertToJSON(study_list_1);
	printf("study_list :\n%s\n", cJSON_Print(jsonstudy_list_1));
	study_list_t* study_list_2 = study_list_parseFromJSON(jsonstudy_list_1);
	cJSON* jsonstudy_list_2 = study_list_convertToJSON(study_list_2);
	printf("repeating study_list:\n%s\n", cJSON_Print(jsonstudy_list_2));
}

int main() {
  test_study_list(1);
  test_study_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // study_list_MAIN
#endif // study_list_TEST
