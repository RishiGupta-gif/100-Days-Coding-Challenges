#include <stdio.h>

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

    int negIndex[n]; 
    int front = 0, rear = -1;

    
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)
            negIndex[++rear] = i;
    }

  
    for (int i = k; i < n; i++) {

       
        if (front <= rear)
            printf("%d ", arr[negIndex[front]]);
        else
            printf("0 ");

       
        while (front <= rear && negIndex[front] <= i - k)
            front++;


        if (arr[i] < 0)
            negIndex[++rear] = i;
    }

   
    if (front <= rear)
        printf("%d\n", arr[negIndex[front]]);
    else
        printf("0\n");

    return 0;
}
