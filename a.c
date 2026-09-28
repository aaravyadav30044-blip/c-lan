#include <stdio.h>

int main(void) {
    // 1. Pointer Walking Method
    int dataset[] = {10, 20, 30};
    int *ptr = dataset; 
    
    printf("--- Pointer Walking ---\n");
    for (int i = 0; i < 3; ++i) { //It will be executed three times because it starts from 0 and ends at 2. 
        printf("%d\n", *ptr); // The pointer will start from the index 0. That means 10. 
        ptr++; 
    }

    // 2. Normal Method (Array Indexing)
    int arr[] = {10, 20, 30};
    
    printf("\n--- Normal Method ---\n");
    // FIX: Moved 'i < 3' to the condition slot, and 'i++' to the increment slot
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
