#include <stdio.h>

int factorial(int a){
    int result = 1;
    for (int i=a; i>=1; i--){
        result = result*i;
    }
    return result;   // I earlier forgot to write return here!!
}

int main(){
    printf("Factorial of the number is %d",factorial(4));
}