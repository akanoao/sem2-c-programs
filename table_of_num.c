#include <stdio.h>

int main(void){
    double num, multiple;
    int i,n;
    printf("enter num: ");
    scanf("%lf",&num);
    printf("enter limit: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        multiple = num*i;
        printf("%lf x %d = %lf\n",num,i,multiple);
    }
    return 0;
}