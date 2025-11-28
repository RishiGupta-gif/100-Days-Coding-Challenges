#include <stdio.h>

int main() {
    int n, i, num = 1, den = 2;
    float sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (float)num / den;
        num += 2;
        den += 2;
    }

    printf("%.2f", sum);
    return 0;
}
