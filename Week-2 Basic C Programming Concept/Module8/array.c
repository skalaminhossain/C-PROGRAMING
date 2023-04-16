#include<stdio.h>
int main() {

    int n;
    int index, value;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&index,&value);
    for(int i = 0; i<n ; i++){
        if(i == index){
            arr[i] = value;
        }
    }
    for(int i = n-1; i>=0 ; i--){
        printf("%d ",arr[i]);
    }

    
    return 0;
}
