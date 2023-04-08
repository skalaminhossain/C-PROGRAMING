#include<stdio.h>

int main(){
    char X;
    scanf("%c",&X);
    if(X>=97 && X<=122){
        int convertToBoro = X-32;
        printf("%c",convertToBoro);
    }else{
        int convertToSoto = X+32;
        printf("%c",convertToSoto);
    }
    return 0;
}