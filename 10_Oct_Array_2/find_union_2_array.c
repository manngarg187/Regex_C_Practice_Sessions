
// find the union of 2 array's

#include <stdio.h>
int main(){
    int arr1[3] = {1,2,3};
    int arr2[3] = {2,3,4};
    int i,j;

    for (i=0; i<3; i++){
        printf("%d ",arr1[i]);
    }

    for (i=0; i<3; i++){
        int found = 0;
        for (j=0; j<3; j++){
            if (arr2[i] == arr1[j]){
                found = 1;
                break;
            }
        }  
        if (found==0){
            printf("%d ",arr2[i]);
        }
    }
}