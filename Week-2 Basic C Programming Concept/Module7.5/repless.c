#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            printf("%d ", arr[i]);
        }else{
            printf("%d ", arr[i]*-1);
        }
    }
    return 0;
}