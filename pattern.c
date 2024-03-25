#include <stdio.h>

int pattern1(void){
    int i, j;
    for(i = 1; i<=5; i++){
        for(j = 1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int pattern2(void){
    int i, j, k;
    for (i = 1; i<=5; i++){
        for (j = 1; j<=(5-i); j++){
            printf(" ");
        }
        for (k = 1; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int main(void){
    pattern1();
    pattern2();
    return 0;
}

