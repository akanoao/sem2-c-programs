#include <stdio.h>

int main(void){
    int index, ch;
    char character;
    printf("1.convert ascii value to characters\n2.convert character to ascii value\n");
    scanf("%d",&ch);
    if (ch==1){
        printf("enter ascii value: ");
        scanf("%d",&index);
        printf("the character with ascii value %d is %c",index, index);
    }
    else if (ch==2){
        printf("enter character:");
        scanf("%c",&character);
        printf("the ascii value of %c is %d", character, character);
    }
    return 0;
}