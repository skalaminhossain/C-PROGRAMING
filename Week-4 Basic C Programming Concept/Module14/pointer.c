#include<stdio.h>
int main(){
    int value = 10;
    printf("%p\n",&value);
    int * p = &value;
    printf("%p\n",p);
    printf("%d\n",*p);
    return 0;
}