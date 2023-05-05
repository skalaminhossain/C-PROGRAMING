// 2.Has Return + No Parameter

#include <stdio.h>
int dubble_money() {
    int taka;
    printf("Taka Din : ");
    scanf("%d", &taka);
    int dubble_taka = taka * 2;
    return dubble_taka;
}

int main() {
    printf("Congratulations Apnar Taka dubble Hoye Gase! : %d",dubble_money());
    return 0;
}
