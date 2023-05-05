#include <stdio.h>
void changeNumber(int *x) {
    *x = 500;
}
int main() {
    int num = 5;
    printf("Function call korar ager value = %d\n", num);
    changeNumber(&num);
    printf("Function call korar porer value = %d\n", num);
    return 0;
}
