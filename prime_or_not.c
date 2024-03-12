#include <stdio.h>
#include <math.h>

int main(void){
    int num,i;
    printf("enter num: ");
    scanf("%d",&num);
    if ((num==0) ||  (num==1)){
        printf("not prime");
    }
    for(i=2; i*i<=num; i++){
        if(num%i == 0){
            printf("not prime");
            break;
        }
        else{
            printf("prime");
            break;
        }
    }
    return 0;
}