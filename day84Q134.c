#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status s;
    printf("Enter status (0-SUCCESS, 1-FAILURE, 2-TIMEOUT): ");
    scanf("%d", (int*)&s);

    switch (s) {
        case SUCCESS: printf("Operation Successful\n"); break;
        case FAILURE: printf("Operation Failed\n"); break;
        case TIMEOUT: printf("Operation Timed Out\n"); break;
        default:      printf("Invalid Status\n");
    }

    return 0;
}
