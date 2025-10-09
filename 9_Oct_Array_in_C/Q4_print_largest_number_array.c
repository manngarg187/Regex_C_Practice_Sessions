
// Print largest number in the array

#include <stdio.h>
int main(){
    int arr_large[5] = {3,6,9,4,11};
    int large = 0;
    for (int i=0; i<5;i++){
        if (arr_large[i]>large){
            large = arr_large[i];
        }
    }
    printf("%d",large);
}