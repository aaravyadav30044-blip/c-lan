//  the exchange of the two number using the bitwise and the Arithmetic operation 
#include <stdio.h>
// the XOR method
void swapXOR(int *a , int *b){
    // we make the copies of the real value so there is the no change of the real value in the function 
    *a = *a ^ *b ; //we are using the XOR method first
    // the same = 0 and the different = 1  
    *b = *a ^ *b ; // in this the (*a = *a ^ *b) at the place of the *a =((*a ^ *b) ^ *b) = (*a ^ *b ^ *b)= *a ^ 0 = *a the order does not matter in the *aOR 
    // in *b = *a and in *a = *a ^ *b
    *a = *a ^ *b ; // *a = ((*a ^ *b) ^ *a) = *a ^ *b ^ *a = *a ^ *a ^ *b = 0 ^ *b = *b
    // *a =  *b and *b = *a the order does not matter 
    // the result of the *a ^ *b =  the result of the bit addition in the column and the row wise 
    printf("after %d %d\n", *a,*b);
}
// the Arithmetic method 
void swap(int *a, int *b){//We use *a and *b so it can encode the memor*b address which we get 
    *a = *a + *b;  // *a = 30 total
    *b = *a - *b ; // *b = 30 - 20 = 10
    *a = *a - *b; // *a = 30-10 = 20 
    printf("after %d %d\n", *a,*b);
}
int main(void){
    int a = 10 , b = 20 ;
    printf("befor a = 10 , b = 20\n");
    swapXOR(&a,&b); // updating the values again to check the function
    a = 10; 
    b = 20;
    swap(&a,&b);
}