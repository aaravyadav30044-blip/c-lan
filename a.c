#include <stdio.h>
int main(void){
    int a ; 
    printf("enter the number: ");
    scanf("%d",&a);
    int fact = 1 ;
    while (a>1){
    fact = fact * a;
    a -=1;
    }
    printf("the factorial is:%d",fact);
    
}