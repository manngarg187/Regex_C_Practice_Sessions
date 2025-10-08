
// only for 2 digit numbers

/*
9. Automorphic Number Check

Problem Statement: Write a program to check if a number is Automorphic. A number is Automorphic if its square ends with the same number.

Explanation: Find square, then check last digits using modulus operation. If they match the original number, automorphic.

Examples:
Input: 25    Output: Automorphic (625 ends with 25)
Input: 13    Output: Not Automorphic (169 does not end with 13)
*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int sq;
    sq = a*a;
    int last;
    last = sq%100;
    if (a == last){
        printf("Automorphic");
    }
    else{
        printf("Not Automorphic");
    }
    
}