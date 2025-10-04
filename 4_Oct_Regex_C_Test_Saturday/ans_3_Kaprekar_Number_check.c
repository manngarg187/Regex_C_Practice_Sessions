
// Write a program to check if a number is a Kaprekar number.
// A number is Kaprekar if its square can split into 2 parts that add up to the 
// orignal number.

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