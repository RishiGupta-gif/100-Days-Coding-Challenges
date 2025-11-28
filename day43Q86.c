#include <stdio.h>

int main() {
    char s[200];
    int i = 0, j, len = 0, flag = 1;

    fgets(s, 200, stdin);

    while (s[len] != '\0') {
        len++;
    }

    len--; 

    j = len - 1;

    for (i = 0; i < j; i++, j--) {
        if (s[i] != s[j]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
