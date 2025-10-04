#include <stdio.h>

int Odd_Even(int a){
    if (a%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}

int main(){
    printf("%d",Odd_Even(34));
}