#include <stdio.h>

int main(void){
    int year;
    printf("enter year: ");
    scanf("%d",&year);
    if (year%4==0){
        if ((year%100==0) && (year%400!=0)){
            printf("not a leap year");
        }
        else if (year%400==0){
            printf("leap year");
        }
        else{
            printf("leap year");
        }
    }
    else{
        printf("not a leap year");
    }
    return 0;
}