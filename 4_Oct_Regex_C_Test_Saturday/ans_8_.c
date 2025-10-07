#include <stdio.h>

int main(){
    for (int i=0; i<=23; i++){
        for (int j=1; j<=6; j++){
            if (i>=0 && i<=9){
                printf("0%d : %d\n",i,j*10);
            }
            else {
            printf("%d : %d\n",i, j*10);
            }
        }
    }
}