#include <stdio.h>

int main() {
    char s[200];
    int i = 0, vowels = 0, consonants = 0;

    fgets(s, 200, stdin);

    while (s[i] != '\0') {
        char ch = s[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

            
            if (ch >= 'A' && ch <= 'Z')
                ch = ch + 32;

            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels = %d\nConsonants = %d", vowels, consonants);

    return 0;
}
