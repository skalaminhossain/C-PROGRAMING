#include<stdio.h>
int main()
{
    int a = 10 , b = 20;
    int sum = a + b;
    int mns = a - b;
    int gun = a * b;
    int baag = b/a;

    
    int num1 = 5 , num2 = 23;
    //float conversion
    float bagfol = num2*1.0/num1;

    printf("%d\n" , sum);
    printf("%d\n",mns);
    printf("%d\n", gun);
    printf("%d\n", baag);
    printf("%0.2f",bagfol);
    return 0;
}