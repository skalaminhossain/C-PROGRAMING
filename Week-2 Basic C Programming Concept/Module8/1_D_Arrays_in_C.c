#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int arr[n];
    scanf("%d",&n);

    int sum = 0;
    for(int i = 0 ; i<n; i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
        
    }
    printf("%d", sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}