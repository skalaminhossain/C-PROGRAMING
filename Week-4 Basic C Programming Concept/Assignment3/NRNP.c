// 4.No Return + No Parameter

#include <stdio.h>
void starPattern() {
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    starPattern();
    return 0;
}
