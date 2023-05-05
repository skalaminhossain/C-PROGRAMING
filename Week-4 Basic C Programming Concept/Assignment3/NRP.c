// 3.No Return + Parameter
#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i<size ; i++){
        scanf("%d",&arr[i]);
    }

    printArray(arr,size);
    return 0;
}
