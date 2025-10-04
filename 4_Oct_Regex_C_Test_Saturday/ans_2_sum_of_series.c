
// write a program to calculate the sum of series : 1 + 11 + 111 +... up to n terms

#include <stdio.h>
int main(){
    int a;
    int sum = 0;
    printf("Enter the value: ");
    scanf("%d",&a);
    for (int i=1; i<=a; i++){
        int temp = 0;
        for (int j=1; j<=i; j++){
            temp = temp*10 + 1;
        }
        sum = sum + temp;
    }
    printf("%d",sum);
}