#include<stdio.h>

int main(){
    for (int i = 1; i < 50; i++)
    {
        
        if(i==25){
            continue;
        }
        printf("Number is :%d\n",i);
    }
    
    return 0;
}