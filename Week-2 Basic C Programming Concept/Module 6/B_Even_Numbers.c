#include<stdio.h>

int main(){
    int n;
    int count = 0;
    scanf("%d",&n);
    for(int i = 2; i<=n; i+=2){
        printf("%d\n",i);
        count = 1;
    }
    if(!count){
        printf("-1\n");
    }
    return 0;
}