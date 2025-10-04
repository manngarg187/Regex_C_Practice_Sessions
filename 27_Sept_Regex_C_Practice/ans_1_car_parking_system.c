#include <stdio.h>

// Car Parking System

int main(){
    int num_veh;
    printf("Enter the no. of vehicle: ");
    scanf("%d",&num_veh);
    int r_bike = 20;
    int r_car = 50;
    int r_truck = 100;
    int total = 0;
    int max = 0;
    for(int i=1; i<=num_veh; i++){
        max = max +1;
        if (max>10){
            printf("Parkting Full - No More Entry\n");
            break;
        }
        char type;
        printf("Enter the type of vehicle being parked (for bike type 'b', for car type 'c', and for truck type 't': \n");
        scanf(" %c",&type);
        printf("Vehicle no.%d\n",i);
        if (type == 'b'){
            int b_hrs;
            printf("Enter the no. of hrs parked: ");
            scanf("%d",&b_hrs);
            int b_price;
            b_price = 20*b_hrs;
            if (b_price > 500){
                b_price = b_price*90/100;
                printf("Total parking cost of this vehicle is %d\n",b_price);
                total = total + b_price;
            }
            else {
                total = total + b_price;
                printf("Total parking cost of this vehicle is %d\n",b_price);
            }
            
        }
        else if (type == 'c'){
            int c_hrs;
            printf("Enter the no. of hrs parked: " );
            scanf("%d",&c_hrs);
            int c_price;
            c_price = 50*c_hrs;
            if (c_price > 500){
                c_price = c_price*90/100;
                total = total + c_price;
                printf("Total parking cost of this vehicle is %d\n",c_price);
            }
            else {
                total = total + c_price;
                printf("Total parking cost of this vehicle is %d\n",c_price);
            }
        }
        else if (type == 't'){
            int t_hrs;
            printf("Enter the no. of hrs parked: ");
            scanf("%d",&t_hrs);
            int t_price;
            t_price = 100*t_hrs;
            if (t_price > 500){
                t_price = t_price*90/100;
                total = total + t_price;
                printf("Total parking cost of this vehicle is %d\n",t_price);
            }
            else {
                total = total + t_price;
                printf("Total parking cost of this vehicle is %d\n",t_price);
            }
        }
    }
    printf("The total collection is %d\n", total);
}