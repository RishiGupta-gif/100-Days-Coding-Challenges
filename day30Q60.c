#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int pos = 0, neg = 0, zero = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] > 0)
            pos++;
        else if (a[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive = %d\nNegative = %d\nZero = %d", pos, neg, zero);

    return 0;
}
