#include <stdio.h>
int main(){
    int total_c;
    printf("Enter the no. of customers: ");
    scanf("%d",&total_c);
    int units;
    for (int i=1; i <= total_c; i++){
        char name[100];
        printf("Enter the name of customer: \n");
        scanf("%s",&name);
        printf("Enter the units consumed by customer: \n");
        scanf("%d",&units);
        int per_unit;
        per_unit = 0;
        if (units <= 100){
            per_unit = 5;
            
        }
        else if (units>100 && units <=300){
            per_unit = 7;
            
        }
        else if (units>300){
            per_unit = 10;
        }
        int u_total;
        u_total = per_unit*units;
        if (u_total>2000){
            u_total = u_total + u_total*5/100;
        }
        printf("Name is %s\n",&name);
        printf("No. of units consumed are %d\n",units);
        printf("Total bill %d\n",u_total);
        
    }
}