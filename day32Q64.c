#include <stdio.h>

int main() {
    int n, d;
    int freq[10] = {0};
    int maxDigit = 0, maxCount = 0;

    scanf("%d", &n);

    if (n < 0) n = -n;  // handle negative numbers

    while (n > 0) {
        d = n % 10;
        freq[d]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    printf("Most frequent digit = %d", maxDigit);

    return 0;
}
