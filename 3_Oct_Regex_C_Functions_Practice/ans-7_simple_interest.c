#include <stdio.h>

// 7. Write a function to calculate the simple interest. (Formula: SI = (P × R × T) / 100)

int simple_interest(int p, int r, int t){
    return p*r*t/100;
}

int main(){
    printf("Simple interest is %d",simple_interest(1000,10,20));
}