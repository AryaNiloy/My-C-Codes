#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[20];
    char role[20];
    char pass[20];
} users;

int findUserById(int id, users u[], int count) {
    for (int i = 0; i < count; i++) {
        if (u[i].id == id) return i;
    }
    return -1;
}

// Signup
void signup() {
    users u[100];
    int count = 0;

    FILE *file = fopen("Library.txt", "r");
    if (file != NULL) {
        while (fscanf(file, "%d %s %s %s", &u[count].id, u[count].name, u[count].role, u[count].pass) == 4) {
            count++;
        }
        fclose(file);
    }

    users nuser;
    printf("Enter ID: ");
    scanf("%d", &nuser.id);

    if (findUserById(nuser.id, u, count) != -1) {
        printf("Error: User with ID %d already exists!\n", nuser.id);
        return;
    }

    printf("Enter Name: ");
    scanf("%s", nuser.name);
    printf("Enter Role: ");
    scanf("%s", nuser.role);
    printf("Enter Password: ");
    scanf("%s", nuser.pass);

    FILE *file_append = fopen("Library.txt", "a");
    if (file_append == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    fprintf(file_append, "%d %s %s %s\n", nuser.id, nuser.name, nuser.role, nuser.pass);
    fclose(file_append);

    printf("Signup successful!\n");
}

// Update User
void updateuser() {
    users a[100];
    int count = 0;

    FILE *file = fopen("Library.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file for reading.\n");
        return;
    }

    while (fscanf(file, "%d %s %s %s", &a[count].id, a[count].name, a[count].role, a[count].pass) == 4) {
        count++;
    }
    fclose(file);

    int target;
    printf("Enter user ID to update: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (a[i].id == target) {
            printf("User found. Enter new details:\n");
            printf("Enter Name: ");
            scanf("%s", a[i].name);
            printf("Enter Role: ");
            scanf("%s", a[i].role);
            printf("Enter Password: ");
            scanf("%s", a[i].pass);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("User with ID %d not found.\n", target);
        return;
    }

    FILE *nfile = fopen("Library.txt", "w");
    if (nfile == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(nfile, "%d %s %s %s\n", a[i].id, a[i].name, a[i].role, a[i].pass);
    }

    fclose(nfile);
    printf("Details updated successfully!\n");
}

// View All Users
void viewuser() {
    FILE *file = fopen("Library.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    users user;
    printf("\nAll Users:\n");
    while (fscanf(file, "%d %s %s %s", &user.id, user.name, user.role, user.pass) == 4) {
        printf("ID: %d | Name: %s | Role: %s | Password: %s\n", user.id, user.name, user.role, user.pass);
    }

    fclose(file);
}

// Dummy admin & student menus
void adminMenu() {
    int choice;
    while (1) {
        printf("\n--- Admin Menu ---\n");
        printf("1. View Users\n");
        printf("2. Update User\n");
        printf("3. Logout\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            viewuser();
        else if (choice == 2)
            updateuser();
        else if (choice == 3)
            break;
        else
            printf("Invalid choice!\n");
    }
}

void studentMenu() {
    printf("Welcome to the student menu (functionality to be added).\n");
}

// Login
void login() {
    int count = 0;
    users u[100];

    FILE *file = fopen("Library.txt", "r");
    if (file == NULL) {
        printf("Error: No users found! Please sign up first.\n");
        return;
    }

    while (fscanf(file, "%d %s %s %s", &u[count].id, u[count].name, u[count].role, u[count].pass) == 4) {
        count++;
    }
    fclose(file);

    printf("Enter ID: ");
    int id;
    scanf("%d", &id);

    int userIndex = findUserById(id, u, count);
    if (userIndex == -1) {
        printf("User not found! Please register first.\n");
        return;
    }

    int attempts = 0;
    while (attempts < 3) {
        printf("Enter Password: ");
        char inputPass[20];
        scanf("%s", inputPass);

        if (strcmp(inputPass, u[userIndex].pass) == 0) {
            printf("Login successful! Welcome, %s (%s)\n", u[userIndex].name, u[userIndex].role);

            if (strcmp(u[userIndex].role, "Admin") == 0) {
                adminMenu();
            } else {
                studentMenu();
            }
            return;
        } else {
            printf("Wrong password! Attempts left: %d\n", 2 - attempts);
        }
        attempts++;
    }

    printf("Too many failed attempts! Access denied.\n");
}

// Main
int main() {
    int choice;
    while (1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Sign Up\n");
        printf("2. Log In\n");
        printf("3. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: signup(); break;
            case 2: login(); break;
            case 3: printf("Exiting program...\n"); return 0;
            default: printf("Invalid option! Please try again.\n");
        }
    }
}
