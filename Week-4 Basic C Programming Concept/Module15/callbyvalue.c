#include<stdio.h>

void value(int x){
    printf("X er value -%d\n",x);
    printf("X er address -%p\n",&x);
}
int main(){
    int x = 10;
    value(x);
    printf("Main function er x er value - %d\n",x);
    printf("Main function er x er address - %p\n",&x);
    return 0;
}