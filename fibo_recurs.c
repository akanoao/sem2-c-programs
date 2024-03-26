#include <stdio.h>

int fibonacci(int n) {
    // Base cases
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the value of n to find the nth Fibonacci number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        printf("Fibonacci(%d) = %d\n", i, fibonacci(i));
    }
    return 0;
}
