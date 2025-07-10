#ifndef components_schemas_record_create_request_item_TEST
#define components_schemas_record_create_request_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define components_schemas_record_create_request_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/components_schemas_record_create_request_item.h"
components_schemas_record_create_request_item_t* instantiate_components_schemas_record_create_request_item(int include_optional);



components_schemas_record_create_request_item_t* instantiate_components_schemas_record_create_request_item(int include_optional) {
  components_schemas_record_create_request_item_t* components_schemas_record_create_request_item = NULL;
  if (include_optional) {
    components_schemas_record_create_request_item = components_schemas_record_create_request_item_create(
      "0",
      56,
      "0",
      56,
      "0",
      56,
      "0",
      "0",
      56,
      56,
      "0",
      list_createList()
    );
  } else {
    components_schemas_record_create_request_item = components_schemas_record_create_request_item_create(
      "0",
      56,
      "0",
      56,
      "0",
      56,
      "0",
      "0",
      56,
      56,
      "0",
      list_createList()
    );
  }

  return components_schemas_record_create_request_item;
}


#ifdef components_schemas_record_create_request_item_MAIN

void test_components_schemas_record_create_request_item(int include_optional) {
    components_schemas_record_create_request_item_t* components_schemas_record_create_request_item_1 = instantiate_components_schemas_record_create_request_item(include_optional);

	cJSON* jsoncomponents_schemas_record_create_request_item_1 = components_schemas_record_create_request_item_convertToJSON(components_schemas_record_create_request_item_1);
	printf("components_schemas_record_create_request_item :\n%s\n", cJSON_Print(jsoncomponents_schemas_record_create_request_item_1));
	components_schemas_record_create_request_item_t* components_schemas_record_create_request_item_2 = components_schemas_record_create_request_item_parseFromJSON(jsoncomponents_schemas_record_create_request_item_1);
	cJSON* jsoncomponents_schemas_record_create_request_item_2 = components_schemas_record_create_request_item_convertToJSON(components_schemas_record_create_request_item_2);
	printf("repeating components_schemas_record_create_request_item:\n%s\n", cJSON_Print(jsoncomponents_schemas_record_create_request_item_2));
}

int main() {
  test_components_schemas_record_create_request_item(1);
  test_components_schemas_record_create_request_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // components_schemas_record_create_request_item_MAIN
#endif // components_schemas_record_create_request_item_TEST
