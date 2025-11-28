#include <stdio.h>

int main() {
    int d, fine = 0;

    scanf("%d", &d);

    if (d <= 5)
        fine = d * 2;
    else if (d <= 10)
        fine = 5*2 + (d - 5)*4;
    else if (d <= 30)
        fine = 5*2 + 5*4 + (d - 10)*6;
    else {
        printf("Membership Cancelled\n");
        return 0;
    }

    printf("Fine = %d\n", fine);

    return 0;
}
