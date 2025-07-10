#ifndef components_schemas_metadata_error_TEST
#define components_schemas_metadata_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define components_schemas_metadata_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/components_schemas_metadata_error.h"
components_schemas_metadata_error_t* instantiate_components_schemas_metadata_error(int include_optional);



components_schemas_metadata_error_t* instantiate_components_schemas_metadata_error(int include_optional) {
  components_schemas_metadata_error_t* components_schemas_metadata_error = NULL;
  if (include_optional) {
    components_schemas_metadata_error = components_schemas_metadata_error_create(
      "0"
    );
  } else {
    components_schemas_metadata_error = components_schemas_metadata_error_create(
      "0"
    );
  }

  return components_schemas_metadata_error;
}


#ifdef components_schemas_metadata_error_MAIN

void test_components_schemas_metadata_error(int include_optional) {
    components_schemas_metadata_error_t* components_schemas_metadata_error_1 = instantiate_components_schemas_metadata_error(include_optional);

	cJSON* jsoncomponents_schemas_metadata_error_1 = components_schemas_metadata_error_convertToJSON(components_schemas_metadata_error_1);
	printf("components_schemas_metadata_error :\n%s\n", cJSON_Print(jsoncomponents_schemas_metadata_error_1));
	components_schemas_metadata_error_t* components_schemas_metadata_error_2 = components_schemas_metadata_error_parseFromJSON(jsoncomponents_schemas_metadata_error_1);
	cJSON* jsoncomponents_schemas_metadata_error_2 = components_schemas_metadata_error_convertToJSON(components_schemas_metadata_error_2);
	printf("repeating components_schemas_metadata_error:\n%s\n", cJSON_Print(jsoncomponents_schemas_metadata_error_2));
}

int main() {
  test_components_schemas_metadata_error(1);
  test_components_schemas_metadata_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // components_schemas_metadata_error_MAIN
#endif // components_schemas_metadata_error_TEST
