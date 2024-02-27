#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, c;
    float D, root1, root2;
    printf("enter coefficients:");
    scanf("%d %d %d", &a, &b, &c);
    D = (b*b)- 4*a*c;
    if (D >= 0){
        root1 = ((-b)+ pow(D, 0.5))/2*a;
        root2 = ((-b)- pow(D, 0.5))/2*a;
        printf("roots are %f and %f", root1, root2);
    }
    else{
        printf("no real roots");
    }
    return 0;
}