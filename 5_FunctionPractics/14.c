#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

void storeRecord(struct Student s[], int n);
void printRecord(struct Student s[], int n);
int main() {
    struct Student students[10]; 

    printf("--- Enter Details for 10 Students ---\n");
    storeRecord(students, 10);

    printf("\n--- Student Records ---\n");
    printRecord(students, 10);
    printf("Ayush Kumar\n");
    printf("25SCSE2030146\n");

    return 0;
}
void storeRecord(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
}
void printRecord(struct Student s[], int n) {
    printf("Roll No\tName\t\tMarks\n");
    printf("-----------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }
}