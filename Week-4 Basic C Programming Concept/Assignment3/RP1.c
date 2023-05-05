// 1.Has Return + Parameter

#include<stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){
    int a , b;
    scanf("%d %d",&a,&b);
    int result = sum(a,b);
    printf("Jogfol => %d",result);
    return 0;
}