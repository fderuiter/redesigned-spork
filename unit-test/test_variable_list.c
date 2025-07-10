#ifndef variable_list_TEST
#define variable_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variable_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variable_list.h"
variable_list_t* instantiate_variable_list(int include_optional);

#include "test_metadata.c"
#include "test_pagination.c"


variable_list_t* instantiate_variable_list(int include_optional) {
  variable_list_t* variable_list = NULL;
  if (include_optional) {
    variable_list = variable_list_create(
       // false, not to have infinite recursion
      instantiate_metadata(0),
       // false, not to have infinite recursion
      instantiate_pagination(0),
      list_createList()
    );
  } else {
    variable_list = variable_list_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return variable_list;
}


#ifdef variable_list_MAIN

void test_variable_list(int include_optional) {
    variable_list_t* variable_list_1 = instantiate_variable_list(include_optional);

	cJSON* jsonvariable_list_1 = variable_list_convertToJSON(variable_list_1);
	printf("variable_list :\n%s\n", cJSON_Print(jsonvariable_list_1));
	variable_list_t* variable_list_2 = variable_list_parseFromJSON(jsonvariable_list_1);
	cJSON* jsonvariable_list_2 = variable_list_convertToJSON(variable_list_2);
	printf("repeating variable_list:\n%s\n", cJSON_Print(jsonvariable_list_2));
}

int main() {
  test_variable_list(1);
  test_variable_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // variable_list_MAIN
#endif // variable_list_TEST
