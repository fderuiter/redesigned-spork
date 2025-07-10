#ifndef visit_TEST
#define visit_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define visit_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/visit.h"
visit_t* instantiate_visit(int include_optional);



visit_t* instantiate_visit(int include_optional) {
  visit_t* visit = NULL;
  if (include_optional) {
    visit = visit_create(
      "0",
      56,
      56,
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0"
    );
  } else {
    visit = visit_create(
      "0",
      56,
      56,
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0"
    );
  }

  return visit;
}


#ifdef visit_MAIN

void test_visit(int include_optional) {
    visit_t* visit_1 = instantiate_visit(include_optional);

	cJSON* jsonvisit_1 = visit_convertToJSON(visit_1);
	printf("visit :\n%s\n", cJSON_Print(jsonvisit_1));
	visit_t* visit_2 = visit_parseFromJSON(jsonvisit_1);
	cJSON* jsonvisit_2 = visit_convertToJSON(visit_2);
	printf("repeating visit:\n%s\n", cJSON_Print(jsonvisit_2));
}

int main() {
  test_visit(1);
  test_visit(0);

  printf("Hello world \n");
  return 0;
}

#endif // visit_MAIN
#endif // visit_TEST
