
// find the intersection of 2 arrays

#include <stdio.h>
int main(){
    int arr1[3] = {1,2,3};
    int arr2[3] = {2,3,4};
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (arr1[i] == arr2[j]){
                printf("%d ",arr1[i]);
            }
        }
    }
}