#include <stdio.h>

void stringCopy(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main(void) {
    char source[] = "Hello, world!";
    char destination[100]; 

    stringCopy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}
