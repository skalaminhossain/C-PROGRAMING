#include<stdio.h>

int main(){
    int value = 100;
    int * ptr = &value;

    printf("Ptr er value -%p\n",ptr);
    printf("ptr er address - %p\n",&ptr);
    printf("Value access by ptr - %d\n",*ptr);
    printf("size of pointer -%d\n",sizeof(ptr));

    return 0;
}