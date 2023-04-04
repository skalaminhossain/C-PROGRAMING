#include<stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum = sum + i;
        //sum behind the seen
        printf("Number is: %d\n",sum);
    }
    printf("%d",sum);
    
    return 0;
}