#include<stdio.h>

int main(){
    for (int i = 1; i < 50; i++)
    {
        printf("Number is :%d\n",i);
        if(i==25){
            break;
        }
    }
    
    return 0;
}