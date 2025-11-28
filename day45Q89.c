#include <stdio.h>

int main() {
    char s[200], ch;
    int i = 0, count = 0;

    fgets(s, 200, stdin);
    scanf("%c", &ch);

    while (s[i] != '\n' && s[i] != '\0') {
        if (s[i] == ch)
            count++;
        i++;
    }

    printf("%d", count);

    return 0;
}
