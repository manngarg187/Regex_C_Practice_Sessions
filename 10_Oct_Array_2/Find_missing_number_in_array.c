
// Find the missing number in an array of 0 to n. where n is the number of element in the array.

#include <stdio.h>
int main(){
    int arr[4] = {0,1,2,4};
    int sum1 = 0;
    for (int i = 0 ; i <=4 ; i++){
        sum1 = sum1 + i;
    }
    int sum2 = 0;
    for (int i=0; i<4 ; i++){
        sum2 = sum2 + arr[i];
    }
    /*
    for (int i=0; i=4; i++){
        for (j=0; j= arr[i]; j++){
            if (i == arr[i))
        }
    }
    */
    printf("Answer is %d",sum1-sum2);
}