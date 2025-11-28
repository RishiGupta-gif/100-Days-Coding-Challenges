#include <stdio.h>

int main() {
    char s1[200], s2[200];
    int f1[256] = {0}, f2[256] = {0};
    int i = 0, flag = 1;

    fgets(s1, 200, stdin);
    fgets(s2, 200, stdin);

    while (s1[i] != '\0' && s1[i] != '\n') {
        f1[(int)s1[i]]++;
        i++;
    }

    i = 0;
    while (s2[i] != '\0' && s2[i] != '\n') {
        f2[(int)s2[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (f1[i] != f2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Anagrams");
    else
        printf("Not Anagrams");

    return 0;
}
