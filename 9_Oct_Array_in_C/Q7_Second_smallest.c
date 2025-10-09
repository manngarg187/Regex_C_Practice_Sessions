
// Find second smallest value

#include <stdio.h>
int main(){
    int arr[6] = {1,6,9,4,1,3};
    int smallest = 100;
    int second_small = 100;
    for (int i=0; i<6; i++){
        if (arr[i]<smallest){
            second_small = smallest;
            smallest = arr[i];
        }
        else if (smallest<arr[i] && arr[i]<second_small){
            second_small = arr[i];
        }
    }
    printf("%d",second_small);
}
