#include <stdio.h>

int main(void){
    int integer;
    float decimal;
    char character;
    printf("%lu", sizeof(integer));
    printf("\n%lu", sizeof(decimal));
    printf("\n%lu", sizeof(character));
    return 0;
}