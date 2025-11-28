#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

   
    for (int i = 0; s[i] != '\0'; i++)
        s[i] = tolower(s[i]);

   
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            s[i] = toupper(s[i]);
            break;
        }
    }

    printf("%s", s);
    return 0;
}
