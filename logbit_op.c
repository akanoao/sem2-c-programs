#include <stdio.h>

void logical_operators_example(int a, int b) {
    printf("Logical AND operator (a && b): %d\n", a && b);
    printf("Logical OR operator (a || b): %d\n", a || b);
    printf("Logical NOT operator (!a): %d\n", !a);
}

void bitwise_operators_example(int a, int b) {
    // Bitwise AND operator
    printf("Bitwise AND operator (a & b): %d\n", a & b);
    // Bitwise OR operator
    printf("Bitwise OR operator (a | b): %d\n", a | b);
    // Bitwise XOR operator
    printf("Bitwise XOR operator (a ^ b): %d\n", a ^ b);
    // Bitwise NOT operator
    printf("Bitwise NOT operator (~a): %d\n", ~a);
    // Bitwise left shift operator
    printf("Bitwise left shift operator (a << 1): %d\n", a << 1);
    // Bitwise right shift operator
    printf("Bitwise right shift operator (b >> 1): %d\n", b >> 1);
}

int main() {
    // Example values
    int a = 5;
    int b = 3;
    printf("Logical Operators Example:\n");
    logical_operators_example(a, b);
    printf("\n");
    printf("Bitwise Operators Example:\n");
    bitwise_operators_example(a, b);
    return 0;
}
