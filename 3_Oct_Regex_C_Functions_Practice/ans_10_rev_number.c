#include <stdio.h>

// 10. Write a function to reverse a given number.

int rev_num(int a){
    int rev = 0;
    while (a>0){
        rev = rev*10 + a%10;
        a = a/10;
    }
    return rev;
}

int main(){
    printf("Reverse of the number is %d.",rev_num(4827));
}