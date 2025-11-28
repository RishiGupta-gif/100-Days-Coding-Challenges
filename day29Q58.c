#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int max, min;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Max = %d\nMin = %d", max, min);

    return 0;
}
