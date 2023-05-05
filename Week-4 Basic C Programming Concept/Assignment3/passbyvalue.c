#include <stdio.h>
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("x = %d, y = %d\n", x, y);
}

int main() {
    int num1 = 100;
    int num2 = 200;
    swap(num1, num2);
    return 0;
}
