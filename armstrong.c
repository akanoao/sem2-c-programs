#include <stdio.h>
#include <math.h>

int main(void){
    int original_num = 0;
    printf("enter num: ");
    scanf("%d",&original_num);
    int num = original_num;
    int digit = 0 ;
    int sum_cube = 0 ;
    int length = (int)log10(num) + 1;

    for (int i = (length - 1); i>0; i--){
        digit = num/(int)pow(10,i);
        num = num%(int)pow(10,i);
        sum_cube += (int)pow(digit,length);
    }
    sum_cube += pow(num,length);
    if (sum_cube == original_num){
        printf("armstrong number");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}