#include<stdio.h>
int main(){
    int momey;
    printf("Enter your money :");
    scanf("%d",&momey);

    if(momey >= 100){
        printf("Burgar Khabo");
    }else if(momey >= 50){
        printf("Fuska Khabo");
    }else{
        printf("TK na thakle ki ar khabo !");
    }
    return 0;
}