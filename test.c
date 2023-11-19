#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

void test_add() {
    assert(add(1, 2) == 3);
    assert(add(-3, -4) == -7);
    assert(add(1, 0) == 0);
}

void test_subtract() {}

void test_multiply() {}

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