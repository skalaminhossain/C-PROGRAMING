#include<stdio.h>

int main(){
    int n;
    printf("Enter your value:");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Jogfol = %d",sum);
    
    return 0;
}