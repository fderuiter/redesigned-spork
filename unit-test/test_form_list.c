#ifndef form_list_TEST
#define form_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define form_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/form_list.h"
form_list_t* instantiate_form_list(int include_optional);

#include "test_metadata.c"
#include "test_pagination.c"


form_list_t* instantiate_form_list(int include_optional) {
  form_list_t* form_list = NULL;
  if (include_optional) {
    form_list = form_list_create(
       // false, not to have infinite recursion
      instantiate_metadata(0),
       // false, not to have infinite recursion
      instantiate_pagination(0),
      list_createList()
    );
  } else {
    form_list = form_list_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return form_list;
}


#ifdef form_list_MAIN

void test_form_list(int include_optional) {
    form_list_t* form_list_1 = instantiate_form_list(include_optional);

	cJSON* jsonform_list_1 = form_list_convertToJSON(form_list_1);
	printf("form_list :\n%s\n", cJSON_Print(jsonform_list_1));
	form_list_t* form_list_2 = form_list_parseFromJSON(jsonform_list_1);
	cJSON* jsonform_list_2 = form_list_convertToJSON(form_list_2);
	printf("repeating form_list:\n%s\n", cJSON_Print(jsonform_list_2));
}

int main() {
  test_form_list(1);
  test_form_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // form_list_MAIN
#endif // form_list_TEST
