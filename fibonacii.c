#include <stdio.h>

int main(void){
    unsigned long long a, b, summ , n;
    printf("enter limit ");
    scanf("%llu",&n);
    a = 0;
    b = 1;
    printf("%llu %llu ", a, b);
    n -= 2;
    while (n>0){
        summ = a+b;
        printf("%llu\n", summ);
        a = b;
        b = summ;
        n--;
    }
    return 0;
}