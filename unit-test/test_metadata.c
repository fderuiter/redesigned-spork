#ifndef metadata_TEST
#define metadata_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define metadata_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/metadata.h"
metadata_t* instantiate_metadata(int include_optional);



metadata_t* instantiate_metadata(int include_optional) {
  metadata_t* metadata = NULL;
  if (include_optional) {
    metadata = metadata_create(
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  } else {
    metadata = metadata_create(
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  }

  return metadata;
}


#ifdef metadata_MAIN

void test_metadata(int include_optional) {
    metadata_t* metadata_1 = instantiate_metadata(include_optional);

	cJSON* jsonmetadata_1 = metadata_convertToJSON(metadata_1);
	printf("metadata :\n%s\n", cJSON_Print(jsonmetadata_1));
	metadata_t* metadata_2 = metadata_parseFromJSON(jsonmetadata_1);
	cJSON* jsonmetadata_2 = metadata_convertToJSON(metadata_2);
	printf("repeating metadata:\n%s\n", cJSON_Print(jsonmetadata_2));
}

int main() {
  test_metadata(1);
  test_metadata(0);

  printf("Hello world \n");
  return 0;
}

#endif // metadata_MAIN
#endif // metadata_TEST
