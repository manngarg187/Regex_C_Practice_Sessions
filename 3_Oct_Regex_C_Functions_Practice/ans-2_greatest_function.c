#include <stdio.h>

int greatest(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    printf("Greatest is %d",greatest(50,17));
}