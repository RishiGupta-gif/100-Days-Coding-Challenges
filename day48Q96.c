#include <stdio.h>

int main() {
    char s[300];
    int i = 0, start = 0, end, temp;

    fgets(s, 300, stdin);

    while (1) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            end = i - 1;

            while (start < end) {
                temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }

            if (s[i] == '\0' || s[i] == '\n')
                break;

            start = i + 1;
        }
        i++;
    }

    printf("%s", s);

    return 0;
}
