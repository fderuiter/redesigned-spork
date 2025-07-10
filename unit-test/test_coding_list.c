#ifndef coding_list_TEST
#define coding_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define coding_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/coding_list.h"
coding_list_t* instantiate_coding_list(int include_optional);

#include "test_metadata.c"
#include "test_pagination.c"


coding_list_t* instantiate_coding_list(int include_optional) {
  coding_list_t* coding_list = NULL;
  if (include_optional) {
    coding_list = coding_list_create(
       // false, not to have infinite recursion
      instantiate_metadata(0),
       // false, not to have infinite recursion
      instantiate_pagination(0),
      list_createList()
    );
  } else {
    coding_list = coding_list_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return coding_list;
}


#ifdef coding_list_MAIN

void test_coding_list(int include_optional) {
    coding_list_t* coding_list_1 = instantiate_coding_list(include_optional);

	cJSON* jsoncoding_list_1 = coding_list_convertToJSON(coding_list_1);
	printf("coding_list :\n%s\n", cJSON_Print(jsoncoding_list_1));
	coding_list_t* coding_list_2 = coding_list_parseFromJSON(jsoncoding_list_1);
	cJSON* jsoncoding_list_2 = coding_list_convertToJSON(coding_list_2);
	printf("repeating coding_list:\n%s\n", cJSON_Print(jsoncoding_list_2));
}

int main() {
  test_coding_list(1);
  test_coding_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // coding_list_MAIN
#endif // coding_list_TEST
