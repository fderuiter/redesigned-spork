#ifndef form_TEST
#define form_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define form_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/form.h"
form_t* instantiate_form(int include_optional);



form_t* instantiate_form(int include_optional) {
  form_t* form = NULL;
  if (include_optional) {
    form = form_create(
      "0",
      56,
      "0",
      "0",
      "0",
      56,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      "0",
      "0"
    );
  } else {
    form = form_create(
      "0",
      56,
      "0",
      "0",
      "0",
      56,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      "0",
      "0"
    );
  }

  return form;
}


#ifdef form_MAIN

void test_form(int include_optional) {
    form_t* form_1 = instantiate_form(include_optional);

	cJSON* jsonform_1 = form_convertToJSON(form_1);
	printf("form :\n%s\n", cJSON_Print(jsonform_1));
	form_t* form_2 = form_parseFromJSON(jsonform_1);
	cJSON* jsonform_2 = form_convertToJSON(form_2);
	printf("repeating form:\n%s\n", cJSON_Print(jsonform_2));
}

int main() {
  test_form(1);
  test_form(0);

  printf("Hello world \n");
  return 0;
}

#endif // form_MAIN
#endif // form_TEST
