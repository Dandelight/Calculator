#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <operation> <operand1> <operand2>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int operand1 = atoi(argv[2]);
    int operand2 = atoi(argv[3]);

    if (strcmp(argv[1], "add") == 0) {
        printf("%d\n", add(operand1, operand2));
    } else if (strcmp(argv[1], "subtract") == 0) {
        printf("%d\n", subtract(operand1, operand2));
    } else if (strcmp(argv[1], "multiply") == 0) {
        printf("%d\n", multiply(operand1, operand2));
    } else if (strcmp(argv[1], "divide") == 0) {
        printf("%d\n", divide(operand1, operand2));
    } else {
        fprintf(stderr, "Error: Invalid operation\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}
