#include <stdio.h>
//We always make sure that our code will not break if there is any Other value given to the code .
int main(void) {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr = arr;//creating the pointer
    int length = sizeof(arr) / sizeof(arr[0]);//it will Automatically calculate the length of the area. 
    // Why don't you make the function and use this? ###
    // If we use this in a function, the function is very clever. They never copy the whole array.
    //  They will only copy the memory address of the array, and this will give the error if we use it in a function. 
    int target;
    
    printf("the array is: ");
    //We are using the second pointer There should not be a problem with the shadowing variable. 
    for (int *ptr1 = arr; ptr1 < arr + length; ptr1++) {//(arr+length)==the last Stopping point. 
        printf("%d ", *ptr1);
    }

    printf("\nenter the number from which do you want to found the index: ");
    scanf("%d", &target);
    
    while (ptr < arr + length) {
        if (target == *ptr) {
            // Fix: Explicitly cast to (int) to pass through -Werror seamlessly
            printf("the index is: %d\n", (int)(ptr - arr));//We are telling the computer that the calculation will return the integer-type data. 
            break;
        }
        ptr++;
    }
    
    // Elite Practice: Check the condition OUTSIDE the loop to save CPU cycles
    if (ptr == arr + length) {
        printf("You have entered the wrong number.\n");
    }
    
    return 0;
}
