#include <stdio.h>

// 8. Write a function to print the table of a given number.

void table(int a){
    for (int i=1; i<=10; i++){
        printf("%d * %d = %d\n",a,i,a*i);
    }
}

int main(){
    table(7);
}