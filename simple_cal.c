#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero.");
                return 1;
            }
            break;
        default:
            printf("Error! Invalid operator.");
            return 1;
    }

    printf("Result: %lf %c %lf = %lf\n", num1, operator, num2, result);

    return 0;
}
