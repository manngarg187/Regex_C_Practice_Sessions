
// Write a program to check if a number is a Magic number.
// Keep summming digits until a single digit remains.
// If that digit is 1, it's magic.

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    sum = 0;
    int digit = 100;
    while (digit>1){
        while (digit > 1){
            int store = 0;
            store = a%10;
            a = a/10;
            sum = sum + store;
        }
        

    
    }
}