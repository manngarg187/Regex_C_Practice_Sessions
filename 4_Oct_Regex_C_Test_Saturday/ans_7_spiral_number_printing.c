/*
7. Spiral Number Printing (Without Arrays)

Problem Statement: Write a program to print numbers 1 to N^2 in a spiral form using loops and conditions only.

Explanation: Use nested loops with conditions to simulate spiral pattern. Handle top row, right column, bottom row, and left column step by step.

Examples:

Input: N = 3
Output:
1 2 3
8 9 4
7 6 5

Input: N = 2
Output:
1 2
4 3
*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);

    int sq;
    sq = a*a;
    int var;
    for (int i=1; i<=a; i++){
        if (i%2 != 0){
            for (int j = 1; j<=a; j++){
                var = j;
                printf("%d ",var);
        }   
        var = var + a + 1;
        else {
            for (int k =1 ; k<=a; k++){
                var = var - 1;
                printf("%d ",var);
            }
        var = var + a;
        }
        printf("\n");
    }
}