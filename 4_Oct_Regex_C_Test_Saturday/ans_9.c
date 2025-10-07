
// only for 2 digit numbers

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int sq;
    sq = a*a;
    int last;
    last = sq%100;
    if (a == last){
        printf("Automorphic");
    }
    else{
        printf("Not Automorphic");
    }
    
}