#include <stdio.h>

int main() {
    int n, i, j, k, flag = 1;
    int a[100][100];

    scanf("%d", &n);  

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (k = i + 1; k < n; k++) {
            if (a[i][i] == a[k][k]) {
                flag = 0;
                break;
            }
        }
        if (!flag) break;
    }
    if (flag)
        printf("Distinct");
    else
        printf("Not Distinct");

    return 0;
}
