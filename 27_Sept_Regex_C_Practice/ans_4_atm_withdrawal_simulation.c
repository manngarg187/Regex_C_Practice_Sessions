#include <stdio.h>
int main(){
    int total;
    printf("Enter the total amt present in your bank account: ");
    scanf("%d",&total);
    int n_trans;
    printf("No. of transactions happened: ");
    int n = 0;
    scanf("%d",&n_trans);
    for (int i=1; i<=n_trans; i++){
        n = n + 1;
        int to_withdraw;
        printf("Enter the amount you want to withdraw: ");
        scanf("%d",&to_withdraw);
        total = total - to_withdraw;
        if (total<0){
            printf("Insufficient Balance");
            break;
        }
        printf("Amount left in your account is %d\n",total);
    }
}