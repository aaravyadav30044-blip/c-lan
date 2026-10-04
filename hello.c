#include <stdio.h>
int index_cal(int a){
    int sum = 0;
    int i = 0;
    while(i<5){
        // this line is wrong because in the c langugae the power(^)is Treated as XOR
        // sum += (a%10^(i+1))/(10^i)); 
        sum += a%10; //extract the last number 
        //But we have the problem: we don't need the last number, but we also need the other numbers. 
        a = a/10; // so now the last number removed untill the loop stop 
        //like a = 10564 / 10 = 1056.4 = 1056
        // a = 1056 / 10 = 105.6 = 105 ......
        i++;
    }
    return sum;
}

int main(void){
    int a = 10564;
    printf("%d\n",(a%100000)/10000);
    printf("%d\n",(a%10000)/1000);
    printf("%d\n",(a%1000)/100);
    printf("%d\n",(a%100)/10);
    printf("%d\n",(a%10)/1);
    printf("%d",index_cal(a));
}