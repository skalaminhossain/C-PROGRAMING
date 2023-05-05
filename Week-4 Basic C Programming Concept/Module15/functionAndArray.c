#include<stdio.h>

void printIt(int arr[], int s){
    for(int i = 0; i < s; i++){
        printf("%d ",arr[i]);
    }
}

int main(){

    int arr[5] = {10,20,30,40,50};
    printIt(arr,5);
    return 0;
}