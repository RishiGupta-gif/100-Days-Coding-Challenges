#include <stdio.h>

int main() {
    char s[200];
    int i = 0, j = 0;
    char result[200];

    fgets(s, 200, stdin);

    while (s[i] != '\0') {
        char ch = s[i];

        
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u')
            result[j++] = s[i];

        i++;
    }

    result[j] = '\0';

    printf("%s", result);

    return 0;
}
