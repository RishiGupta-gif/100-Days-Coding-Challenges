#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r;
    printf("Enter role (0-ADMIN, 1-USER, 2-GUEST): ");
    scanf("%d", (int*)&r);

    switch (r) {
        case ADMIN: printf("Welcome, Admin! Full access granted.\n"); break;
        case USER:  printf("Welcome, User! Limited access granted.\n"); break;
        case GUEST: printf("Welcome, Guest! View-only access granted.\n"); break;
        default:    printf("Invalid role\n");
    }

    return 0;
}
