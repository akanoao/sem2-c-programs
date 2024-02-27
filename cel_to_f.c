#include <stdio.h>

int main(void){
    float celsius, farhen;
    printf("enter temperature in celsius: ");
    scanf("%f",&celsius);
    farhen = (celsius*(9/5)) + 32;
    printf("temperature in fahrenheit: %f", farhen);
    return 0;
}