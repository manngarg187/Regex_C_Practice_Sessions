
// Write a program to check if a number is a Kaprekar number.
// A number is Kaprekar if its square can split into 2 parts that add up to the 
// orignal number.

/*
1: 1² = 1. Split into 0 and 1 (leading zeros are allowed), 0 + 1 = 1. 
9: 9² = 81. Split into 8 and 1, 8 + 1 = 9. 
45: 45² = 2025. Split into 20 and 25, 20 + 25 = 45. 
55: 55² = 3025. Split into 30 and 25, 30 + 25 = 55. 
99: 99² = 9801. Split into 98 and 01, 98 + 1 = 99. 
297: 297² = 88209. Split into 88 and 209, 88 + 209 = 297. 
*/

#include <stdio.h>
int main(){
    int a;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d",&a);
    int a_2 = a;
    int sq = a*a;
    printf("Square of a is %d\n",sq);
    int count = 0;
    while (a>0){
        a = a/10;
        count = count + 1;
    }
    int rev = 0;
    for (int i=1; i<=count; i++){
        rev = rev*10 + sq%10;
        sq = sq/10;
    }
    int left = sq;
    int right = 0;
    while (rev>0){
        right = right*10 + rev%10;
        rev = rev/10;
    }
    printf("Number of digits: %d\n",count);
    printf("%d\n",sq +right);
    if (a_2 == left + right){
        printf("It's a Kaprekar Number.");
    }
    else{
        printf("It's not a Kaprekar Number.");
    }
}