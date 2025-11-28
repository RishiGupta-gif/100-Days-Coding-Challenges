#include <stdio.h>

int main() {
    int total, h, m, s;

    scanf("%d", &total);

    h = total / 3600;
    total = total % 3600;

    m = total / 60;
    s = total % 60;

    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}
