#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;        
    struct Student *ptr;      

    ptr = &s;                  

   
    ptr->roll = 101;
    sprintf(ptr->name, "Rishi Gupta");
    ptr->marks = 89.5;

    
    printf("Student Details:\n");
    printf("Roll Number : %d\n", ptr->roll);
    printf("Name        : %s\n", ptr->name);
    printf("Marks       : %.2f\n", ptr->marks);

    return 0;
}
