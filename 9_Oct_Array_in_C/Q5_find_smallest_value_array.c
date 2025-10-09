
// find smallest value within the array

#include <stdio.h>
int main(){
    int arr_small[5] = {3,6,9,4,11};
    int smallest = 1000;
    for (int i=0; i<5;i++){
        if (arr_small[i]<smallest){
            smallest = arr_small[i];
        }
    }
    printf("%d",smallest);
}