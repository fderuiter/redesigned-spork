#ifndef study_TEST
#define study_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define study_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/study.h"
study_t* instantiate_study(int include_optional);



study_t* instantiate_study(int include_optional) {
  study_t* study = NULL;
  if (include_optional) {
    study = study_create(
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    study = study_create(
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return study;
}


#ifdef study_MAIN

void test_study(int include_optional) {
    study_t* study_1 = instantiate_study(include_optional);

	cJSON* jsonstudy_1 = study_convertToJSON(study_1);
	printf("study :\n%s\n", cJSON_Print(jsonstudy_1));
	study_t* study_2 = study_parseFromJSON(jsonstudy_1);
	cJSON* jsonstudy_2 = study_convertToJSON(study_2);
	printf("repeating study:\n%s\n", cJSON_Print(jsonstudy_2));
}

int main() {
  test_study(1);
  test_study(0);

  printf("Hello world \n");
  return 0;
}

#endif // study_MAIN
#endif // study_TEST
