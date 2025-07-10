#ifndef subject_TEST
#define subject_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subject_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subject.h"
subject_t* instantiate_subject(int include_optional);



subject_t* instantiate_subject(int include_optional) {
  subject_t* subject = NULL;
  if (include_optional) {
    subject = subject_create(
      "0",
      56,
      "0",
      "0",
      "0",
      56,
      "0",
      1,
      "0",
      "0",
      "0",
      list_createList()
    );
  } else {
    subject = subject_create(
      "0",
      56,
      "0",
      "0",
      "0",
      56,
      "0",
      1,
      "0",
      "0",
      "0",
      list_createList()
    );
  }

  return subject;
}


#ifdef subject_MAIN

void test_subject(int include_optional) {
    subject_t* subject_1 = instantiate_subject(include_optional);

	cJSON* jsonsubject_1 = subject_convertToJSON(subject_1);
	printf("subject :\n%s\n", cJSON_Print(jsonsubject_1));
	subject_t* subject_2 = subject_parseFromJSON(jsonsubject_1);
	cJSON* jsonsubject_2 = subject_convertToJSON(subject_2);
	printf("repeating subject:\n%s\n", cJSON_Print(jsonsubject_2));
}

int main() {
  test_subject(1);
  test_subject(0);

  printf("Hello world \n");
  return 0;
}

#endif // subject_MAIN
#endif // subject_TEST
