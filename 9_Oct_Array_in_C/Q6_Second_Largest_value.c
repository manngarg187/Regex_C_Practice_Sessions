
// Find second largest value

#include <stdio.h>
int main(){
    int arr[6] = {1,3,9,7,9,4};
    int largest = 0;
    int second = 0;
    for (int i=0; i<6; i++){
        if (arr[i]>largest){
            second = largest;
            largest = arr[i];
        }
        else if (arr[i]<largest && arr[i]>second){
            second = arr[i];
        }
    }
    printf("%d",second);
}