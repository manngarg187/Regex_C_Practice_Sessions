/*
8. Digital Clock Simulator

Problem Statement: Write a program to print all possible times in HH:MM format from 00:00 to 23:59.

Explanation: Use nested loops: outer for hours 0-23, inner for minutes 0-59. Print formatted output using if-else for leading zeros.

Examples:

Input: none        Output: Starts with 00:00, ends with 23:59
Input: none        Output: Prints all 1440 combinations
*/

#include <stdio.h>

int main(){
    for (int i=0; i<=23; i++){
        for (int j=1; j<=59; j++){
            if (i>=0 && i<=9){
                if (j>=0 && j<=9){
                    printf("0%d : 0%d\n",i,j);
                }
                else {
                    printf("0%d : %d\n",i,j);
                }
            }
            else {
                if (j>=0 && j<=9){
                    printf("%d : 0%d\n",i,j);
                }
                else {
                    printf("%d : %d\n",i,j);
                }
            }
        }
    }
}