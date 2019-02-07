#ifndef TEST_HELPERS_H
#define TEST_HELPERS_H

#include <stdio.h>
#include <stdlib.h>

/* Small library for functions to help unit tests.
 * Is not linked to copper language executable or libs, 
 * only tests.
 */

#ifdef __cplusplus
extern "C" {
#endif

extern const char* 
test_help_find_substr(const char* string, const char* substring);

#ifdef __cplusplus
}
#endif

#endif // TEST_HELPERS_H
