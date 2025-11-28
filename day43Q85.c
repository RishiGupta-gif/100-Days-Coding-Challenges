#include <stdio.h>

int main() {
    char s[200];
    int i = 0, j, len = 0, temp;

    fgets(s, 200, stdin);

    while (s[len] != '\0') {
        len++;
    }

    len--; 

    j = len - 1;

    for (i = 0; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    printf("%s", s);

    return 0;
}
