#include<stdio.h>
int main(){
    int num1 , num2;
    printf("Enter your number");
    scanf("%d %d",&num1,&num2);
    int add = num1+ num2;
    int sub = num1 - num2;
    int multiply = num1 * num2;
    float div = num1*1.0 / num2;

    printf("%d\n",add);
    printf("%d\n",sub);
    printf("%d\n",multiply);
    printf("%0.2f",div);
    return 0;
}