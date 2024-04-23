#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "samsung";
    int size = sizeof(str)/sizeof(char)-1;
    char rev[size];
    printf("%d\n",size); 

    for (int i=(size-1); i>=0;i--){
        rev[size-i-1] = str[i];
    }
    rev[size] = '\0';
    printf("reverse is \'%s\'",rev);
    return 0;
}