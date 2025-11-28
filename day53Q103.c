#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];

    int leftSum = 0, pivot = -1;

    for (int i = 0; i < n; i++) {
        int rightSum = total - leftSum - arr[i];
        if (leftSum == rightSum) {
            pivot = i;
            break;
        }
        leftSum += arr[i];
    }

    printf("%d", pivot);
    return 0;
}
