#include <stdio.h>

int fact(int i){
    if (i==0){
        return 1;
    }
    return i*fact(i-1);
}

int main(void){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}