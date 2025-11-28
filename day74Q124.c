#include <stdio.h>

int main() {
    char source[100], destination[100];

    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", destination);

    FILE *src = fopen(source, "r");
    if (src == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    FILE *dest = fopen(destination, "w");
    if (dest == NULL) {
        printf("Error: Could not open/create destination file.\n");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}
