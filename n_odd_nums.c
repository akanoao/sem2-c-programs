#include <stdio.h>

int main(void){
    int i,n, sum;
    sum = 0;
    printf("enter limit: ");
    scanf("%d",&n);
    for (i=1;i<n;i+=2){
        printf("%d ",i);
        sum +=i;
    }
    printf("sum is %d ",sum);
    return 0;
}