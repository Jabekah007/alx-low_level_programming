#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_valid_number(char* num) {
    /*
     * Returns 1 if num is a valid positive integer, 0 otherwise.
     */
    while (*num) {
        if (!isdigit(*num)) {
            return 0;
        }
        num++;
    }
    return 1;
}

int multiply(char* num1, char* num2) {
    /*
     * Returns the product of num1 and num2.
     */
    int n1 = atoi(num1);
    int n2 = atoi(num2);
    return n1 * n2;
}

int main(int argc, char** argv) {
    /*
     * The main function that processes the command line arguments and calls the appropriate functions.
     */
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char* num1 = argv[1];
    char* num2 = argv[2];

    if (!is_valid_number(num1) || !is_valid_number(num2)) {
        printf("Error\n");
        return 98;
    }

    int result = multiply(num1, num2);
    printf("%d\n", result);

    return 0;
}

