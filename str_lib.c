#include <stdio.h>
#include <string.h>
int main(void){
    char str1[] = "hello";
    char str2[] = "world";
    printf("length of string is %d\n", strlen(str1));
    strcat(str1, str2);
    printf("%s\n", str1);
    printf("length of string is %d\n", strlen(str1));
    printf("%d\n", strcmp(str1, str2));
    return 0;
}