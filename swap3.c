#include <stdio.h>

int main(void){
    int a = 3;
    int b = 5;
    int c;
    printf("a = %d b = %d\n", a, b);
    c = a;
    a = b;
    b = a;
    printf("a = %d b = %d\n", a, b);
    return 0;
}