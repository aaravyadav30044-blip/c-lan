#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {//for not passing the parameter
    int a;//for the integer data
    if (scanf("%d",&a) != 1 || a <= 0){
        return 1;//for checking if the data enter is correct or not
    }//The written one is used for telling the machine that the code has some error. 
    int arr[a];// we can also write the arr[] = {0}for not storing the garbage value
    for(int i = 0 ; i < a; i++){
        scanf("%d",&arr[i]);//for storing the data index wise
    }
    int *ptr = arr;//pointing the array
    int sum = 0;//making the variable of the sum
    while(ptr < arr + a){//as we know the length of the array if we dont know the length of the array 
    //we can use the sizeof(arr)//sizeof(arr[0])
        sum = sum + *ptr;//this will add the exiting value of the sum to index value of the pointer pointing towards the array index
        ptr++;//Increment by 1. 
    }
    printf("%d",sum);//print the output. 
    return 0; //for telling the machine that code has run smoothly and error-free 
}