#include <stdio.h>

int main() {
    char s[200];
    int freq[26] = {0};
    int i = 0;
    char ans = '\0';

    fgets(s, 200, stdin);

    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;

            if (freq[s[i] - 'a'] == 2) {
                ans = s[i];
                break;
            }
        }
        i++;
    }

    if (ans == '\0')
        printf("No repeating lowercase alphabet");
    else
        printf("%c", ans);

    return 0;
}
