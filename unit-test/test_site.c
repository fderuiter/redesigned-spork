#ifndef site_TEST
#define site_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define site_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/site.h"
site_t* instantiate_site(int include_optional);



site_t* instantiate_site(int include_optional) {
  site_t* site = NULL;
  if (include_optional) {
    site = site_create(
      "0",
      56,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    site = site_create(
      "0",
      56,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return site;
}


#ifdef site_MAIN

void test_site(int include_optional) {
    site_t* site_1 = instantiate_site(include_optional);

	cJSON* jsonsite_1 = site_convertToJSON(site_1);
	printf("site :\n%s\n", cJSON_Print(jsonsite_1));
	site_t* site_2 = site_parseFromJSON(jsonsite_1);
	cJSON* jsonsite_2 = site_convertToJSON(site_2);
	printf("repeating site:\n%s\n", cJSON_Print(jsonsite_2));
}

int main() {
  test_site(1);
  test_site(0);

  printf("Hello world \n");
  return 0;
}

#endif // site_MAIN
#endif // site_TEST
