#include <stdio.h>
#include <math.h>

int main(void){
    int num,i;
    printf("enter num: ");
    scanf("%d",&num);
    if ((num==0) ||  (num==1)){
        printf("not prime");
    }
    else{
        int is_prime = 1;
        for(i=2; i<=sqrt(num); i++){
            if(num%i == 0){
                is_prime = 0;
            } 
        }
        if (is_prime) {
            printf("Prime\n");
        } 
        else {
            printf("Not prime\n");
        }
    }
    return 0;
}