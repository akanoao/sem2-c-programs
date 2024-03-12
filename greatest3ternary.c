#include <stdio.h>

int main(void){
    int a, b, c;
    int val;
    printf("enter 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    val  = a>b?(a>c?a:c):(b>c?b:c);
    printf("%d is greatest",val);
    return 0;
}