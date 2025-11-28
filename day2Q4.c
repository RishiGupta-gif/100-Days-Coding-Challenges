#include <stdio.h>

int main() {
    float r;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Area = %.2f\n", 3.14 * r * r);
    printf("Circumference = %.2f\n", 2 * 3.14 * r);

    return 0;
}
