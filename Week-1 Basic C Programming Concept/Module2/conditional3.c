#include<stdio.h>
int main()
{
    int money;
    printf("Enter Your Monney");
    scanf("%d",&money);

    if(money >= 5000){
        printf("Cox Bazer jabo\n");
        if(money>=10000){
            printf("Saintmartain Jabo\n");
        }
        else{
            printf("Return Home\n");
        }
    }
    else{
        printf("TK na thakle kothao jawer dorkar nai");
    }
    return 0;
}