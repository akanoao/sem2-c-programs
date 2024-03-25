#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10, num2 = 20;

    printf("Before swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    swapByValue(num1, num2);
    printf("After swapping by value:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2); // Values remain unchanged

    swapByReference(&num1, &num2);
    printf("After swapping by reference:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2); // Values are swapped

    return 0;
}
