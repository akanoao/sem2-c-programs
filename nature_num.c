#include <stdio.h>

int main(void){
    int i, n;
    printf("enter limit: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("%d\n",i);
    }
    return 0;
}