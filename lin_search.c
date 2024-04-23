#include <stdio.h>

int main(void){
    int arr[5] = {6,3,9,4,5};
    int num_to_find = 4;
    for (int i=0; i<5; i++){
        if (arr[i]==num_to_find){
            printf("found number --> %d\n",arr[i]);
        }
    }
    return 0;
}