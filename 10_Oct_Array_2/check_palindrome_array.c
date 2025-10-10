#include <stdio.h>
int main() {
    int arr[5] = {1,2,2,2,1};
    int i=0;
    int j=4;
    while (i<j){
        if (arr[i]==arr[j]){
            i++;
            j--;
        }
        else {
            printf("Not palindrome");
            return 0;
        }
    }
    printf("palindrome");
}
