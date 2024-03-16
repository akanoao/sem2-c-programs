#include <stdio.h>

int main(void){
    int limit,i,j;
    printf("enter limit: ");
    scanf("%d",&limit);
    i = 1;
    while (i<=limit){
        int is_prime = 1;
        for(int j=2;j*j<=i;j++){
            if (i%j==0){
                is_prime = 0;
            }
        }
        if (is_prime) {
            printf("%d\n",i);
        } 
        i++;
    }
    return 0;
}