
// Sum of digits in array!!!

#include <stdio.h>
int main(){
    int arr_sum[5] = {1,2,3,4,5};
    int sum = 0;
    for (int i=0; i<5; i++){
        sum = sum + arr_sum[i];
    }
    printf("%d",sum);
}