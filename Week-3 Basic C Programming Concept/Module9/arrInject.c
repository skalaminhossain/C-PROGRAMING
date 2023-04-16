#include<stdio.h>
int main(){
    int arr[6] = {12, 34 , 34 , 53, 34};
    for(int i = 0 ; i<6 ; i++){
        printf("%d ",arr[i]);
    }
    int pos=1,val=100;

    for(int i = 6 ; i>=pos ; i--){
        arr[i] = arr[i-1];
    }

    for(int i = 0 ; i<6 ; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}