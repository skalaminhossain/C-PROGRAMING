#include<stdio.h>
int main()
{
    int num;
    printf("Enter Your Valid Number :");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("Even");
    }
    else{
        printf("odd");
    }
    return 0;
}