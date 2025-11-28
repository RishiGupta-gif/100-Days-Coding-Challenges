#include <stdio.h>

int main() {
    char filename[100];
    char buffer[200];
    FILE *fp;

    printf("Enter filename: ");
    scanf("%s", filename);


    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

  
    printf("\n--- File Content ---\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
