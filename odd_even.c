#include <stdio.h>

int main(void){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if (num%2==0){
        printf("your number is even");
    }
    else if (num%2!=0){
        printf("your number is odd");
    }    
    return 0;
}