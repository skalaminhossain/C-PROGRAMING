#include<stdio.h>
int main(){
    int i = 10;
    // ++i;
    int x = i++;
    int z = ++i;
    printf("i = %d x = %d z = %d",i,x,z);
    return 0;
}