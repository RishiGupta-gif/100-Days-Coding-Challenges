#include <stdio.h>

int main() {
    int n, d;
    scanf("%d", &n);

    while (n != 0) {
        d = n % 10;
        if (d == 0)
            printf("1");
        else
            printf("0");
        n = n / 10;
    }

    return 0;
}
