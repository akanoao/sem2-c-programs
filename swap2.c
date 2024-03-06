#include <stdio.h>

int main(void){
    int a = 3;
    int b = 5;
    printf("a = %d b = %d\n", a, b);
    a = a+b; //a8
    b = a-b; //b3
    a = a-b; //a5
    printf("a = %d b = %d", a, b);
    return 0;
}