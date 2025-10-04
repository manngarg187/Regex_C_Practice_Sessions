#include <stdio.h>

// 6. Write a function to swap two numbers using call by value.

void swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function: a=%d b=%d\n",a,b);
}

int main(){
    int x=8, y=5;
    swapByValue(x,y);
    printf("In main: x=%d y=%d", x, y);
}