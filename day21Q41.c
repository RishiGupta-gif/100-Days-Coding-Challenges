#include <stdio.h>

int main() {
    int n, temp, last, first, pow = 1, num;
    scanf("%d", &n);

    num = n;
    last = n % 10;

    while (num >= 10) {
        num /= 10;
        pow *= 10;
    }
    first = num;

    temp = n % pow;           
    temp = temp / 10;        

    int result = last * pow + temp * 10 + first;

    printf("%d", result);
    return 0;
}
