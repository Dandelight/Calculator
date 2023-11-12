#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

void test_add() {}

void test_subtract() {}

void test_multiply() {
    assert(multiply(1, 2) == 2);
    assert(multiply(-3, -4) == 12);
    assert(multiply(1, 0) == 0);
}

void test_divide() {}

int string_equals(const char *p, const char *q) {
    return strcmp(p, q) == 0;
}

int main(int argc, const char *argv[]) {
    assert(argc == 2);
    const char *command = argv[1];

    if (string_equals(command, "add")) {
        test_add();
    } else if (string_equals(command, "subtract")) {
        test_subtract();
    } else if (string_equals(command, "multiply")) {
        test_multiply();
    } else if (string_equals(command, "divide")) {
        test_divide();
    } else {
        fprintf(stderr, "No method found\n");
        exit(-1);
    }

    return 0;
}