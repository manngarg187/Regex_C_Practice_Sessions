
// Write a program in C to check whether a given number has repeating digits or not.
// You are not allowed to use arrays or strings, only loops and if-else.

#include <stdio.h>
int main(){
    int a;
    int check = 0;
    printf("Enter the number: ");
    scanf("%d",&a);
    while(a>0){
        check = a%10;
        a = a/10;
        if (a%10 == check){
            printf("Yes, digits repeat");
            return 0;   // Keep this in mind that we can use return 0 like this also.
        }
    }
    printf("No, all digits are unique");
}