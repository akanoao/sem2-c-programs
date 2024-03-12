#include <stdio.h>

int main(void){
    int i,num;
    int fac = 1;
    printf("enter num: ");
    scanf("%d",&num);
    for(i=num; i>=1; i--){
        fac = fac*i;
    }
    printf("factorial of %d = %d",num,fac);
    return 0;
}