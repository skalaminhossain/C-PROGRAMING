#include<stdio.h>
int main(){
    int money;
    printf("Enter your money :");
    scanf("%d",&money);
    if(money >= 10000){
        printf("Gucci Bag\n");
        if(money >=20000){
            printf("Gucci Belt");
        }
    }
    else if(money >= 5000){
        printf("Levis Bag");
    }
    else{
        printf("Somethings");
    }
    return 0;
}