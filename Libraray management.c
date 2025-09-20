#include <stdio.h>
#include <stdlib.h>//fopen, malloc
#include <string.h>//strcmp, strcpy.

#define MAX_BOOKS 100
#define MAX_USERS 50

typedef struct {
    int id;
    char title[100];
    char author[100];
    int quantity;
} Book;

typedef struct {
    int id;
    char name[20];
    char role[20];
    char pass[20];
} User;

typedef struct {
    int userId;
    int bookId;
} BorrowedBook;

Book books[MAX_BOOKS];
User users[MAX_USERS];
BorrowedBook borrowedBooks[MAX_BOOKS];
int bookCount = 0, userCount = 0, borrowCount = 0;

void saveData() {
    FILE *file = fopen("library_data.txt", "w");
    if (!file) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "%d\n", userCount);
    for (int i = 0; i < userCount; i++) {
        fprintf(file, "%d %s %s %s\n", users[i].id, users[i].name, users[i].role, users[i].pass);
    }
    fprintf(file, "%d\n", bookCount);
    for (int i = 0; i < bookCount; i++) {
        fprintf(file, "%d %s %s %d\n", books[i].id, books[i].title, books[i].author, books[i].quantity);
    }
    fprintf(file, "%d\n", borrowCount);
    for (int i = 0; i < borrowCount; i++) {
        fprintf(file, "%d %d\n", borrowedBooks[i].userId, borrowedBooks[i].bookId);
    }
    fclose(file);
}

void loadData() {
    FILE *file = fopen("library_data.txt", "r");
    if (!file) return;
    fscanf(file, "%d", &userCount);
    for (int i = 0; i < userCount; i++) {
        fscanf(file, "%d %s %s %s", &users[i].id, users[i].name, users[i].role, users[i].pass);
    }
    fscanf(file, "%d", &bookCount);
    for (int i = 0; i < bookCount; i++) {
        fscanf(file, "%d %[^] %[^] %d", &books[i].id, books[i].title, books[i].author, &books[i].quantity);
    }
    fscanf(file, "%d", &borrowCount);
    for (int i = 0; i < borrowCount; i++) {
        fscanf(file, "%d %d", &borrowedBooks[i].userId, &borrowedBooks[i].bookId);
    }
    fclose(file);
}

void registerUser() {
    if (userCount >= MAX_USERS) {
        printf("User limit reached!\n");
        return;
    }
    users[userCount].id = userCount + 1;
    printf("Enter name: ");
    scanf("%s", users[userCount].name);
    printf("Enter role (admin/student): ");
    scanf("%s", users[userCount].role);
    printf("Enter password: ");
    scanf("%s", users[userCount].pass);
    printf("User registered successfully! Your User ID is %d\n", users[userCount].id);
    userCount++;
    saveData();
}

int loginUser(int *userId, char role[]) {
    char name[20], pass[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter password: ");
    scanf("%s", pass);
    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].name, name) == 0 && strcmp(users[i].pass, pass) == 0) {
            *userId = users[i].id;
            strcpy(role, users[i].role);
            printf("Login successful!\n");
            return 1;
        }
    }
    printf("Invalid credentials.\n");
    return 0;
}

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full!\n");
        return;
    }
    books[bookCount].id = bookCount + 1;
    printf("Enter Book Title: ");
    scanf(" %[^]", books[bookCount].title);
    printf("Enter Author: ");
    scanf(" %[^]", books[bookCount].author);
    printf("Enter Quantity: ");
    scanf("%d", &books[bookCount].quantity);
    bookCount++;
    printf("Book added successfully!\n");
    saveData();
}

void viewBooks() {
    printf("Available Books:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d, Title: %s, Author: %s, Quantity: %d\n", books[i].id, books[i].title, books[i].author, books[i].quantity);
    }
}

int main() {
    loadData();
    int choice, userId;
    char role[20];
    while (1) {
        printf("1. Signup\n2. Login\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1) registerUser();
        else if (choice == 2 && loginUser(&userId, role)) break;
    }
    while (1) {
        printf("1. View Books\n");
        if (strcmp(role, "admin") == 0) {
            printf("2. Add Book\n3. View Borrowed Books\n4. Logout\n");
        } else {
            printf("2. Borrow Book\n3. View Borrowed Books\n4. Logout\n");
        }
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) viewBooks();
        else if (choice == 2 && strcmp(role, "admin") == 0) addBook();
        else if (choice == 2 && strcmp(role, "student") == 0) borrowBook(userId);
        else if (choice == 3) viewBorrowedBooks(userId, role);
        else if (choice == 4) break;
    }
    return 0;
}
