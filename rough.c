#include <stdio.h>
#include <string.h>

struct nametype {
    char first[20];
    char last[20];
};

struct studenttype {
    int id;
    struct nametype name;
};

// Function that does NOT update the actual student
void inputStudentWrong(struct studenttype s, int i) {
    printf("Enter the ID for student %d: ", i + 1);
    scanf("%d", &s.id);
    printf("Enter the first name: ");
    scanf("%s", s.name.first);
    printf("Enter the last name: ");
    scanf("%s", s.name.last);
    printf("\n");
}

int main() {
    struct studenttype student[5];
    int n = 1;

    for (int i = 0; i < n; i++) {
        inputStudentWrong(student[i], i); // Passing by value
    }

    printf("Output:\n\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", student[i].id); // Will print garbage or 0
        printf("Name: %s %s\n", student[i].name.first, student[i].name.last); // Will be empty
    }

    return 0;
}
