#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int visited[n]; 
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            printf("%d\n", arr[i]);
            return 0;   
        }
        visited[arr[i]] = 1;
    }

    printf("No duplicate found\n");
    return 0;
}
