#include <stdio.h>

// Zomato's Food Ordering System

int main(){
    int total = 0;
    printf("1. Pizza - Rs 200\n");
    printf("2. Burger - Rs 100\n");
    printf("3. Momos - Rs 80\n");
    printf("4. Coffee - Rs 120\n");
    int t_items;
    printf("How many items do you want to order: ");
    scanf("%d",&t_items);
    
    for (int i=1; i<=t_items; i++){
        int quantity;
        int a;
        printf("Enter item_n: ");
        scanf("%d",&a);
        printf("Enter quantity: ");
        scanf("%d",&quantity);
        int Price=0;
        if (a==1){
            Price = 200;
        }
        else if (a==2){
            Price = 100;
            
        }
        else if (a==3){
            Price = 80;
        }
        else if (a==4){
            Price = 120;
        }
        int cal;
        cal = Price*quantity;
        total = total + cal;
        if (t_items == 1 && a==4){
            total = total - total*20/100;
            break;
        }
    }
    if (total > 500){
        printf("Free Delivery (for orders above Rs 500)! Enjoy!\n");
        printf("Your final bill is %d\n",total);
    }
    else{
        total = total + 50;
        printf("Extra Rs 50 on orders below 500.\n");
        printf("Your final bill is %d\n",total);
    }
}