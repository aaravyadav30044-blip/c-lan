#include <stdio.h>
#include <stdlib.h> // 1. You MUST include this header to talk to the attendant

int main() {
    int cars = 3;   // How many spots we want to reserve

    // 2. ASK THE ATTENDANT FOR SPOTS
    // This reserves 3 integer spots side-by-side and writes the first spot's address into 'arr'
    int *arr = (int *)malloc(cars * sizeof(int));
    int *arr = (int *)calloc(car *sizeof(int));// If we don't give any value to the specific input, the space is set to 0 by default. 
    // It takes more time than `malloc`, but it is useful that it does not contain any garbage value. 

    // 3. PARK YOUR CARS (Put data into the spots)
    // You can use standard array brackets now!
    arr[0] = 10; // First spot
    arr[1] = 20; // Second spot
    arr[2] = 30; // Third spot

    // Print them out just to see they are safely parked
    for (int i = 0; i < cars; i++) {
        printf("Spot %d holds value: %d\n", i, arr[i]);
    }

    // 4. REMOVE THE RESERVATION CONES
    // Tells the attendant you are done with the spots so others can park here
    free(arr);

    return 0;
}
