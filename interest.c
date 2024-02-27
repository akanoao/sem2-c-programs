#include <stdio.h>
#include <math.h>

int main(void){
    float p, r, t, si, ci;
    int ch;
    printf("enter principle, rate, time\n");
    scanf("%f %f %f", &p, &r, &t);
    printf("what do you want to calculate\nsimple interest 1\ncompound interest 2\n");
    scanf("%d",&ch);
    if (ch==1){
        si = (p*r*t)/100;
        printf("simple interest is %f",si);
    }
    else if (ch==2){
        ci = (p*pow((1+(r/100)),t)) - p;
        printf("compound interest is %f",ci);
    }
    return 0;
}