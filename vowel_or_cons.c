#include <stdio.h>

int main(void){
    char ascii;
    printf("enter character:");
    scanf("%c",&ascii);
    if (ascii == 65 || ascii == 97 || ascii == 69 || ascii == 101 || ascii == 73 || ascii == 105 
        || ascii == 79 || ascii == 111 || ascii == 85 || ascii == 117){
        printf("it is a vowel");
    }
    else if (ascii >= 65 && ascii <= 90 || ascii >= 97 && ascii <= 122){
        printf("it is a consonant");
    }
    else if (ascii >= 48 && ascii <= 57){
        printf("it is a number");
    }
    return 0;
}