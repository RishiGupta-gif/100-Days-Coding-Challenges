#include <stdio.h>

int main() {
    char s[200];
    int i = 0, j, k, len = 0;

    fgets(s, 200, stdin);

    while (s[len] != '\0' && s[len] != '\n')
        len++;

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {

            for (k = i; k <= j; k++) {
                printf("%c", s[k]);
            }
            printf("\n");

        }
    }

    return 0;
}
