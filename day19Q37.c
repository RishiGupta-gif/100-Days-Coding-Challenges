#include <stdio.h>

int main() {
    int a, b, tempA, tempB;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;
    
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }

    int gcd = tempA;
    int lcm = (a * b) / gcd;

    printf("LCM = %d\n", lcm);

    return 0;
}
