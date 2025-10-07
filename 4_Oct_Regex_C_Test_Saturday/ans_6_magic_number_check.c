
// Write a program to check if a number is a Magic number.
// Keep summming digits until a single digit remains.
// If that digit is 1, it's magic.

// Example of Magic number are:
// 19 = 1 + 9 = 10 = 1 + 0 = 1
// 9865 = 9 + 8 + 6 + 5 = 28 = 2 + 8 = 10 = 1 + 0 = 1

// Example of Not magic number : 238 = 2 + 3 + 8 = 13 = 1 + 3 = 4 - As it didn't end up at 1 so it's not a magic number.

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int sum;
    while (a>=1){
        sum = 0;
        while (a >0){
            int store = 0;
            store = a%10;
            a = a/10;
            sum = sum + store;
        }
        int sum_1;
        sum_1 = sum;
        a = sum;
        int digit = 0;
        while (sum_1>0){
            sum_1 = sum_1/10;
            digit = digit + 1;
        }
        if (digit == 1){
            break;
        }
    }
    if (sum == 1){
        printf("Magic Number");
    }
    else{
        printf("Not Magic Number");
    }

    
}