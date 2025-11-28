#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    int a[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Found at index %d", i);
    else
        printf("Not Found");

    return 0;
}
