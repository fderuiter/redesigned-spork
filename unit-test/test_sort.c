#ifndef sort_TEST
#define sort_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sort_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sort.h"
sort_t* instantiate_sort(int include_optional);



sort_t* instantiate_sort(int include_optional) {
  sort_t* sort = NULL;
  if (include_optional) {
    sort = sort_create(
      "0",
      mednet_edc_api_sort_DIRECTION_ASC
    );
  } else {
    sort = sort_create(
      "0",
      mednet_edc_api_sort_DIRECTION_ASC
    );
  }

  return sort;
}


#ifdef sort_MAIN

void test_sort(int include_optional) {
    sort_t* sort_1 = instantiate_sort(include_optional);

	cJSON* jsonsort_1 = sort_convertToJSON(sort_1);
	printf("sort :\n%s\n", cJSON_Print(jsonsort_1));
	sort_t* sort_2 = sort_parseFromJSON(jsonsort_1);
	cJSON* jsonsort_2 = sort_convertToJSON(sort_2);
	printf("repeating sort:\n%s\n", cJSON_Print(jsonsort_2));
}

int main() {
  test_sort(1);
  test_sort(0);

  printf("Hello world \n");
  return 0;
}

#endif // sort_MAIN
#endif // sort_TEST
