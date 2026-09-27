#include <stdio.h>
int main(void){
    char arr[5] = {1,2,3,4,5};
    printf("the array first type of the pointer: %d\n",arr[3]);
    printf("the pointer in the array the advance method: %d\n",*(arr + 2));
    if (arr[4] == *(arr + 4)){
        printf("equal\n");
    }
    else{
        printf("not equal\n");
    }
    return 0 ;
}