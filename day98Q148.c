#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter details for Student 1 (name roll marks): ");
    scanf("%s %d %f", s1.name, &s1.roll_no, &s1.marks);

    printf("Enter details for Student 2 (name roll marks): ");
    scanf("%s %d %f", s2.name, &s2.roll_no, &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks)
    {
        printf("\nBoth structures are IDENTICAL\n");
    }
    else {
        printf("\nStructures are NOT identical\n");
    }

    return 0;
}
