#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int lastIndex[256];  
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int start = 0;       
    int maxLen = 0;      
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
     
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        lastIndex[(unsigned char)s[i]] = i;

        int windowLen = i - start + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
    }

    printf("%d\n", maxLen);
    return 0;
}
