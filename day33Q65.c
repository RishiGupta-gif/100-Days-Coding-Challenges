#include <stdio.h>

int main() {
    int n, i, key, low, high, mid;
    int a[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);   // array must be sorted

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        }
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    printf("Not Found");

    return 0;
}
