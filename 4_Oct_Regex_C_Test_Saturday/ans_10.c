#include <stdio.h>

int main(){
    int Choice;
    printf("Choice: ");
    scanf("%d",&Choice);
    if (Choice == 1){
        int R_start, R_end;
        printf("Range: ");
        scanf("%d %d",&R_start,&R_end);
        while (R_end>=R_start){
            int count=0;
            num = R_end;
            while (num>0){
                num = num/10;
                count = count + 1;
            }
            for (i=1; i<=count; i++){
                // complete the code
            }
        }
    }
    else {
        int limit;
        printf("Limit: ");
        scanf("%d %d");
    }
}