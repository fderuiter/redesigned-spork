#ifndef variable_TEST
#define variable_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variable_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variable.h"
variable_t* instantiate_variable(int include_optional);



variable_t* instantiate_variable(int include_optional) {
  variable_t* variable = NULL;
  if (include_optional) {
    variable = variable_create(
      "0",
      56,
      mednet_edc_api_variable_VARIABLETYPE_TEXT,
      "0",
      56,
      56,
      1,
      "0",
      "0",
      56,
      "0",
      1,
      "0",
      "0",
      "0",
      1
    );
  } else {
    variable = variable_create(
      "0",
      56,
      mednet_edc_api_variable_VARIABLETYPE_TEXT,
      "0",
      56,
      56,
      1,
      "0",
      "0",
      56,
      "0",
      1,
      "0",
      "0",
      "0",
      1
    );
  }

  return variable;
}


#ifdef variable_MAIN

void test_variable(int include_optional) {
    variable_t* variable_1 = instantiate_variable(include_optional);

	cJSON* jsonvariable_1 = variable_convertToJSON(variable_1);
	printf("variable :\n%s\n", cJSON_Print(jsonvariable_1));
	variable_t* variable_2 = variable_parseFromJSON(jsonvariable_1);
	cJSON* jsonvariable_2 = variable_convertToJSON(variable_2);
	printf("repeating variable:\n%s\n", cJSON_Print(jsonvariable_2));
}

int main() {
  test_variable(1);
  test_variable(0);

  printf("Hello world \n");
  return 0;
}

#endif // variable_MAIN
#endif // variable_TEST
