#include <stdio.h>

int main() {
    char s1[200], s2[200], temp[400];
    int i = 0, j = 0, k = 0;

    fgets(s1, 200, stdin);
    fgets(s2, 200, stdin);

    
    while (s1[i] != '\0') {
        if (s1[i] == '\n') s1[i] = '\0';
        i++;
    }
    i = 0;
    while (s2[i] != '\0') {
        if (s2[i] == '\n') s2[i] = '\0';
        i++;
    }

    
    i = 0;
    while (s1[i] != '\0') {
        temp[k++] = s1[i];
        i++;
    }
    i = 0;
    while (s1[i] != '\0') {
        temp[k++] = s1[i];
        i++;
    }
    temp[k] = '\0';

 
    int found = 0;
    for (i = 0; temp[i] != '\0'; i++) {
        j = 0;
        while (temp[i + j] == s2[j] && s2[j] != '\0') {
            j++;
        }
        if (s2[j] == '\0') {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
