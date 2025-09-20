#include <stdio.h>
#include <stdlib.h>

typedef struct students {
    char name[20];
    int roll;
    int cls;
    char sub[10];
} students;

void addStudent() {
    FILE *file = fopen("Student Record.txt", "a+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int n;
    printf("Enter the number of students to add: ");
    scanf("%d", &n);
    getchar(); // Consume newline after scanf

    students s; // Input for console
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s.name);
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Class: ");
        scanf("%d", &s.cls);
        getchar(); // Consume newline before next string input
        printf("Favorite Subject: ");
        scanf(" %[^\n]", s.sub);

        fprintf(file, "%s %d %d %s\n", s.name, s.roll, s.cls, s.sub);
    }

    fclose(file);
    printf("Students added successfully!\n");
}

void updateStudent() {
    FILE *file = fopen("Student Record.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    students studentList[100];
    int count = 0, target, found = 0;

    while (fscanf(file, "%s %d %d %s", studentList[count].name, &studentList[count].roll,
                  &studentList[count].cls, studentList[count].sub) != EOF) {
        count++;
    }
    fclose(file);

    printf("Enter the Roll Number of the student to update: ");
    scanf("%d", &target);

    for (int i = 0; i < count; i++) {
        if (studentList[i].roll == target) {
            printf("Enter new name: ");
            scanf(" %[^\n]", studentList[i].name);
            printf("Enter new class: ");
            scanf("%d", &studentList[i].cls);
            printf("Enter new favorite subject: ");
            scanf(" %[^\n]", studentList[i].sub);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with Roll Number %d not found!\n", target);
        return;
    }

    file = fopen("Student Record.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %d %d %s\n", studentList[i].name, studentList[i].roll, studentList[i].cls, studentList[i].sub);
    }
    fclose(file);

    printf("Student record updated successfully!\n");
}

void deleteStudent() {
    FILE *file = fopen("Student Record.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    students studentList[100];
    int count = 0, target, found = 0;

    while (fscanf(file, "%s %d %d %s", studentList[count].name, &studentList[count].roll,
                  &studentList[count].cls, studentList[count].sub) != EOF) {
        count++;
    }
    fclose(file);

    printf("Enter the Roll Number of the student to delete: ");
    scanf("%d", &target);

    for (int i = 0; i < count; i++) {
        if (studentList[i].roll == target) {
            found = 1;
            for (int j = i; j < count - 1; j++) {
                studentList[j] = studentList[j + 1];
            }
            count--;
            break;
        }
    }

    if (!found) {
        printf("Student with Roll Number %d not found!\n", target);
        return;
    }

    file = fopen("Student Record.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %d %d %s\n", studentList[i].name, studentList[i].roll, studentList[i].cls, studentList[i].sub);
    }
    fclose(file);

    printf("Student record deleted successfully!\n");
}

void viewStudents() {
    FILE *file = fopen("Student Record.txt", "r");
    if (file == NULL) {
        printf("No student records found!\n");
        return;
    }

    students s;
    printf("\n---- Student Records ----\n");
    printf("%-20s %-10s %-10s %-20s\n", "Name", "Roll", "Class", "Favorite Subject");
    printf("----------------------------------------------------------\n");

    int found = 0;
    while (fscanf(file, "%s %d %d %s", s.name, &s.roll, &s.cls, s.sub) != EOF) {
        printf("%-20s %-10d %-10d %-20s\n", s.name, s.roll, s.cls, s.sub);
        found = 1;
    }

    if (!found) {
        printf("No records found!\n");
    }

    fclose(file);
}
void searchStudent() {
    FILE *file = fopen("Student Record.txt", "r");
    if (file == NULL) {
        printf("Error opening file! The file may not exist.\n");
        return;
    }

    printf("Enter roll number to search: ");
    int target;
    scanf("%d", &target);

    students studentList[100];
    int count = 0, found = 0;

    // Read data from file into array
    while (fscanf(file, " %19[^\n] %d %d %9[^\n]", studentList[count].name,
                  &studentList[count].roll, &studentList[count].cls, studentList[count].sub) != EOF) {
        count++;
    }
    fclose(file); // Close file after reading

    // Search for the student
    for (int i = 0; i < count; i++) {
        if (studentList[i].roll == target) {
            printf("Student Found:\n");
            printf("Name: %s\nRoll: %d\nClass: %d\nFavorite Subject: %s\n",
                   studentList[i].name, studentList[i].roll, studentList[i].cls, studentList[i].sub);
            found = 1;
            break; // Stop searching after finding the student
        }
    }

    if (!found) {
        printf("Student with roll number %d not found!\n", target);
    }
}
void borrow()
{
    FILE *file=fopen("")
}

int main() {
    int choice;
    do {
        printf("\n----- Student Management System -----\n");
        printf("1. Add Student\n");
        printf("2. Update Student\n");
        printf("3. Delete Student\n");
        printf("4. View Students\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                updateStudent();
                break;
            case 3:
                deleteStudent();
                break;
            case 4:
                viewStudents();
                break;
            case 5:
                searchStudent();
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}
