#ifndef user_list_TEST
#define user_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_list.h"
user_list_t* instantiate_user_list(int include_optional);

#include "test_metadata.c"
#include "test_pagination.c"


user_list_t* instantiate_user_list(int include_optional) {
  user_list_t* user_list = NULL;
  if (include_optional) {
    user_list = user_list_create(
       // false, not to have infinite recursion
      instantiate_metadata(0),
       // false, not to have infinite recursion
      instantiate_pagination(0),
      list_createList()
    );
  } else {
    user_list = user_list_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return user_list;
}


#ifdef user_list_MAIN

void test_user_list(int include_optional) {
    user_list_t* user_list_1 = instantiate_user_list(include_optional);

	cJSON* jsonuser_list_1 = user_list_convertToJSON(user_list_1);
	printf("user_list :\n%s\n", cJSON_Print(jsonuser_list_1));
	user_list_t* user_list_2 = user_list_parseFromJSON(jsonuser_list_1);
	cJSON* jsonuser_list_2 = user_list_convertToJSON(user_list_2);
	printf("repeating user_list:\n%s\n", cJSON_Print(jsonuser_list_2));
}

int main() {
  test_user_list(1);
  test_user_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_list_MAIN
#endif // user_list_TEST
