#include<stdio.h>

int main(){
    int num;

    printf("Enter an integer : ");
    scanf("%d",&num);
    
    if(num >= 0){
        printf("%d is a positive number", num);
    } else{
        printf("%d is a negative number" , num);
    }

    return 0;
}