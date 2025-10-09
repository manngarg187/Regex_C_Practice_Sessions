
// count odd and even numbers in the array.

#include <stdio.h>
int main(){
    int arr[5] = {1,2,4,7,3};
    int even = 0;
    int odd = 0;
    for (int i=0; i<5; i++){
        if (arr[i]%2==0){
            even = even + 1;
        }
        else{
            odd++;
        }
    }
    printf("Even count = %d\n",even);
    printf("Odd count = %d",odd);
}