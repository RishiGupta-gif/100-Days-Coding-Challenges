#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);


    for (int i = 0; i < n; ++i) {
        int prevGreater = -1;
        for (int j = i - 1; j >= 0; --j) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }
        if (i > 0) printf(",");
        printf("%d", prevGreater);
    }
    printf("\n");
    return 0;
}
