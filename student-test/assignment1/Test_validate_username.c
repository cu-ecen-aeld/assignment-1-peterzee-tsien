#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"

/**
* This function should:
*   1) Call the my_username() function in autotest-validate.c to get your hard coded username.
*   2) Obtain the value returned from function malloc_username_from_conf_file() in username-from-conf-file.h within
*       the assignment autotest submodule at assignment-autotest/test/assignment1/
*   3) Use unity assertion TEST_ASSERT_EQUAL_STRING_MESSAGE to verify the two strings are equal.  See
*       the [unity assertion reference](https://github.com/ThrowTheSwitch/Unity/blob/master/docs/UnityAssertionsReference.md)
*/
void test_validate_my_username()
{
    /**
     * TODO: Replace the line below with your code here as described above to verify your /conf/username.txt 
     * config file and my_username() functions are setup properly
     */
    /**
     * Step 1: Get the hardcoded username
     */
    const char *hardcoded_name = my_username();

    /**
     * Step 2: Obtain the value from the config file using the helper function
     */
    char *conf_name = malloc_username_from_conf_file();

    /**
     * Step 3: Verify the two strings are equal
     */
    TEST_ASSERT_EQUAL_STRING_MESSAGE(hardcoded_name, conf_name, "my_username() does not match the content of conf/username.txt");

    /**
     * cleanup: The function name 'malloc_...' implies it allocated memory.
     * In C, we should free this to avoid memory leaks.
     */
    free(conf_name);
}
