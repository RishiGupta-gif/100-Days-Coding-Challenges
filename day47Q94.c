#include <stdio.h>

int main() {
    char s[300], longest[100];
    int i = 0, j = 0, maxLen = 0, currLen = 0, start = 0, bestStart = 0;

    fgets(s, 300, stdin);

    while (s[i] != '\0') {
        if (s[i] != ' ' && s[i] != '\n') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                bestStart = start;
            }
            currLen = 0;
            start = i + 1;
        }
        i++;
    }

    for (i = 0; i < maxLen; i++) {
        longest[i] = s[bestStart + i];
    }
    longest[maxLen] = '\0';

    printf("%s", longest);

    return 0;
}
