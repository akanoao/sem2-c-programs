#include <stdio.h>

int main(void){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if (num>0){
        printf("your number is positive");
    }
    else if (num<0){
        printf("your number is negative");
    }
    else {
        printf("your number is zero");
    }
    return 0;
}