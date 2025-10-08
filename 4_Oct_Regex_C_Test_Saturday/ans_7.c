#include <stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);

    int sq;
    sq = a*a;
    int var;
    for (int i=1; i<=a; i++){
        if (i%2 != 0){
            for (int j = 1; j<=a; j++){
                var = j;
                printf("%d ",var);
        }   
        var = var + a + 1;
        else {
            for (int k =1 ; k<=a; k++){
                var = var - 1;
                printf("%d ",var);
            }
        var = var + a;
        }
        printf("\n");
    }
}