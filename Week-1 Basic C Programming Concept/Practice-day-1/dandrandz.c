#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number :");
    scanf("%d", &num);


    if(num > 0){
        printf("Positive number");
    }
    else if(num < 0){
        printf("Negative Number");
    }
    else{
        printf("Zero");
    }
    return 0;
}