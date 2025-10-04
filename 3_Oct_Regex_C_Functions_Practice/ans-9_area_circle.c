#include <stdio.h>

// 9. Write a function to calculate the area of a circle. (Formula: Area = π × r × r)

float area_circle(int a){
    return 3.14*a*a;
}

int main(){
    printf("Area of circle %f",area_circle(8));
}