#include<stdio.h>

int main(){
    for (int i = 1; i <= 10; i++)
    {
        if(i%2==0){
            printf("%d is a Even Number\n",i);
        }
        else{
            printf("%d is a Odd Number\n",i);
        }
    }
    
    return 0;
}