#include <stdio.h>

int main() {
    char s[200];
    int i = 0, lastSpace = -1;

    fgets(s, 200, stdin);


    while (s[i] != '\0') {
        if (s[i] == ' ')
            lastSpace = i;
        i++;
    }

   
    printf("%c ", s[0]);

    for (i = 1; i < lastSpace; i++) {
        if (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\n')
            printf("%c ", s[i+1]);
    }

    
    for (i = lastSpace + 1; s[i] != '\n' && s[i] != '\0'; i++) {
        printf("%c", s[i]);
    }

    return 0;
}
