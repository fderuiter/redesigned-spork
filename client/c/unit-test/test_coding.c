#ifndef coding_TEST
#define coding_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define coding_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/coding.h"
coding_t* instantiate_coding(int include_optional);



coding_t* instantiate_coding(int include_optional) {
  coding_t* coding = NULL;
  if (include_optional) {
    coding = coding_create(
      "0",
      "0",
      56,
      56,
      "0",
      56,
      "0",
      "0",
      56,
      56,
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    coding = coding_create(
      "0",
      "0",
      56,
      56,
      "0",
      56,
      "0",
      "0",
      56,
      56,
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return coding;
}


#ifdef coding_MAIN

void test_coding(int include_optional) {
    coding_t* coding_1 = instantiate_coding(include_optional);

	cJSON* jsoncoding_1 = coding_convertToJSON(coding_1);
	printf("coding :\n%s\n", cJSON_Print(jsoncoding_1));
	coding_t* coding_2 = coding_parseFromJSON(jsoncoding_1);
	cJSON* jsoncoding_2 = coding_convertToJSON(coding_2);
	printf("repeating coding:\n%s\n", cJSON_Print(jsoncoding_2));
}

int main() {
  test_coding(1);
  test_coding(0);

  printf("Hello world \n");
  return 0;
}

#endif // coding_MAIN
#endif // coding_TEST
