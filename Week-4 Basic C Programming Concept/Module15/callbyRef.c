#include<stdio.h>

void value(int* p){
    printf("p er value -%p\n",p);
    *p = 500;
}
int main(){
    int x = 10;
    printf("X er address - %p\n",&x);
    value(&x);
    printf("%d\n",x);
    return 0;
}