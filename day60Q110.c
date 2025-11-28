#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 0;
    }

    int dq[n], front = 0, rear = -1;

   
    for (int i = 0; i < k; i++) {
        while (front <= rear && arr[dq[rear]] <= arr[i])
            rear--;
        dq[++rear] = i;
    }


    for (int i = k; i < n; i++) {
        printf("%d ", arr[dq[front]]); 

       
        while (front <= rear && dq[front] <= i - k)
            front++;


        while (front <= rear && arr[dq[rear]] <= arr[i])
            rear--;

        dq[++rear] = i;
    }

    
    printf("%d\n", arr[dq[front]]);

    return 0;
}
