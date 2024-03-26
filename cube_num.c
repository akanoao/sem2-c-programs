#include <stdio.h>

double cube(double n){
    return n*n*n;
}

int main(void){
    double n = 9;
    printf("%lf",cube(n));
    return 0;
}