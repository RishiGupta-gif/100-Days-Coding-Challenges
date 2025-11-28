#include <stdio.h>

enum Traffic { RED, YELLOW, GREEN };

int main() {
    enum Traffic signal;
    printf("Enter signal (0-RED, 1-YELLOW, 2-GREEN): ");
    scanf("%d", (int*)&signal);

    switch (signal) {
        case RED:    printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN:  printf("Go\n"); break;
        default:     printf("Invalid signal\n");
    }

    return 0;
}
