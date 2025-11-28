#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("\nStored Records:\n");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
