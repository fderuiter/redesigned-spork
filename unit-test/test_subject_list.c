#ifndef subject_list_TEST
#define subject_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subject_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subject_list.h"
subject_list_t* instantiate_subject_list(int include_optional);

#include "test_metadata.c"
#include "test_pagination.c"


subject_list_t* instantiate_subject_list(int include_optional) {
  subject_list_t* subject_list = NULL;
  if (include_optional) {
    subject_list = subject_list_create(
       // false, not to have infinite recursion
      instantiate_metadata(0),
       // false, not to have infinite recursion
      instantiate_pagination(0),
      list_createList()
    );
  } else {
    subject_list = subject_list_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return subject_list;
}


#ifdef subject_list_MAIN

void test_subject_list(int include_optional) {
    subject_list_t* subject_list_1 = instantiate_subject_list(include_optional);

	cJSON* jsonsubject_list_1 = subject_list_convertToJSON(subject_list_1);
	printf("subject_list :\n%s\n", cJSON_Print(jsonsubject_list_1));
	subject_list_t* subject_list_2 = subject_list_parseFromJSON(jsonsubject_list_1);
	cJSON* jsonsubject_list_2 = subject_list_convertToJSON(subject_list_2);
	printf("repeating subject_list:\n%s\n", cJSON_Print(jsonsubject_list_2));
}

int main() {
  test_subject_list(1);
  test_subject_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // subject_list_MAIN
#endif // subject_list_TEST
