#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void assert_int_equal(int expected, int actual, const char *test_name) {
    if (expected != actual) {
        printf("Test '%s' failed: expected %d, got %d\n", test_name, expected, actual);
    } else {
        printf("Test '%s' passed.\n", test_name);
    }
}

void assert_str_equal(const char *expected, const char *actual, const char *test_name) {
    if (strcmp(expected, actual) != 0) {
        printf("Test '%s' failed: expected '%s', got '%s'\n", test_name, expected, actual);
    } else {
        printf("Test '%s' passed.\n", test_name);
    }
}