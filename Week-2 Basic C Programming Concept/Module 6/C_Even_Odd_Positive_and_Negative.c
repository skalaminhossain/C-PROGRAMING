#include<stdio.h>
int main(){
    int n;
    scanf("&d",&n);
    int a;
    int even=0,odd=0,pos=0,neg=0;
    for(int i =1;i<=n;i++){
        scanf("%d",&a);
        if(a%2==0){
            even++;
        }else{
            odd++;
        }
        
        if(a>0){
            pos++;
        }else if(a<0){
            neg++;
        }
    }
    printf("Even: %d\nOdd: %dPositive: %d\nNegative: %d\n",even,odd,pos,neg);
}