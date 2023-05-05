#include <stdio.h>
#include <string.h>
int is_palindrome(char *str) {
    char *s = str;
    char *e = str+strlen(str)-1;
    while (s < e) {
        if (*s != *e) {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
int main() {
    char str[10];
    scanf("%s", str);
    if(is_palindrome(str)) {
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
    return 0;
}
