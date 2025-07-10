#ifndef interval_TEST
#define interval_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define interval_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/interval.h"
interval_t* instantiate_interval(int include_optional);



interval_t* instantiate_interval(int include_optional) {
  interval_t* interval = NULL;
  if (include_optional) {
    interval = interval_create(
      "0",
      56,
      "0",
      "0",
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      list_createList(),
      1,
      "0",
      "0"
    );
  } else {
    interval = interval_create(
      "0",
      56,
      "0",
      "0",
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      list_createList(),
      1,
      "0",
      "0"
    );
  }

  return interval;
}


#ifdef interval_MAIN

void test_interval(int include_optional) {
    interval_t* interval_1 = instantiate_interval(include_optional);

	cJSON* jsoninterval_1 = interval_convertToJSON(interval_1);
	printf("interval :\n%s\n", cJSON_Print(jsoninterval_1));
	interval_t* interval_2 = interval_parseFromJSON(jsoninterval_1);
	cJSON* jsoninterval_2 = interval_convertToJSON(interval_2);
	printf("repeating interval:\n%s\n", cJSON_Print(jsoninterval_2));
}

int main() {
  test_interval(1);
  test_interval(0);

  printf("Hello world \n");
  return 0;
}

#endif // interval_MAIN
#endif // interval_TEST
