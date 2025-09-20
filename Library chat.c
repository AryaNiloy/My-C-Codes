#include <stdio.h>
#include <string.h>

// User structure
typedef struct {
    int id;
    char name[20];
    char role[20];
    char pass[20];
} users;

// Book structure
typedef struct {
    int id;
    char name[50];
    char author[50];
    int quantity;
} books;

// Borrowed book structure
typedef struct {
    int userId;
    int bookId;
} borrowed;

// Function prototypes
void signup();
void login();
int findUserById(int id, users u[], int count);
int findBookById(int id, books b[], int count);
void adminMenu();
void studentMenu(int userId);
void addNewBook();
void restockBooks();
void viewBooks();
void borrowBook(int userId);
void viewBorrowedBooks();
void viewBorrowedList();

// Main function
int main() {
    int choice;

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Signup\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: signup(); break;
            case 2: login(); break;
            case 3: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}

int findUserById(int id, users u[], int count) {
    for (int i = 0; i < count; i++) {
        if (u[i].id == id) return i;
    }
    return -1;
}

int findBookById(int id, books b[], int count) {
    for (int i = 0; i < count; i++) {
        if (b[i].id == id) return i;
    }
    return -1;
}

void signup() {
    users u[100];
    int count = 0;

    FILE *file = fopen("User.txt", "r");
    if (file != NULL) {
        while (fscanf(file, "%d %s %s %s", &u[count].id, u[count].name, u[count].role, u[count].pass) == 4) {
            count++;
        }
        fclose(file);
    }

    users newuser;
    printf("Enter ID: ");
    scanf("%d", &newuser.id);

    if (findUserById(newuser.id, u, count) != -1) {
        printf("Error: User with ID %d already exists!\n", newuser.id);
        return;
    }

    printf("Enter Name: ");
    scanf("%s", newuser.name);
    printf("Enter Role (Admin/Student): ");
    scanf("%s", newuser.role);
    printf("Enter Password: ");
    scanf("%s", newuser.pass);

    FILE *file_append = fopen("User.txt", "a");
    if (file_append == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    fprintf(file_append, "%d %s %s %s\n", newuser.id, newuser.name, newuser.role, newuser.pass);
    fclose(file_append);

    printf("Signup successful!\n");
}

void login() {
    int count = 0;
    users u[100];
    FILE *file = fopen("User.txt", "r");

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
                studentMenu(u[userIndex].id);
            }
            return;
        } else {
            printf("Wrong password! Attempts left: %d\n", 2 - attempts);
        }
        attempts++;
    }

    printf("Too many failed attempts! Access denied.\n");
}

void adminMenu() {
    int choice;
    while (1) {
        printf("\nAdmin Menu\n");
        printf("1. Add New Book\n");
        printf("2. Restock Books\n");
        printf("3. View Books\n");
        printf("4. View Borrowed Books\n");
        printf("5. View Borrowed List\n");
        printf("6. Logout\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addNewBook(); break;
            case 2: restockBooks(); break;
            case 3: viewBooks(); break;
            case 4: viewBorrowedBooks(); break;
            case 5: viewBorrowedList(); break;
            case 6: return;
            default: printf("Invalid choice!\n");
        }
    }
}

void studentMenu(int userId) {
    int choice;
    while (1) {
        printf("\nStudent Menu\n");
        printf("1. View Books\n");
        printf("2. Borrow Book\n");
        printf("3. Logout\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: viewBooks(); break;
            case 2: borrowBook(userId); break;
            case 3: return;
            default: printf("Invalid choice!\n");
        }
    }
}

void addNewBook() {
    books b;
    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    printf("Enter Book Name: ");
    scanf(" %[^]s", b.name);
    printf("Enter Author Name: ");
    scanf(" %[^]s", b.author);
    printf("Enter Quantity: ");
    scanf("%d", &b.quantity);

    FILE *file = fopen("Books.txt", "a");
    if (file == NULL) {
        printf("Error opening book file!\n");
        return;
    }

    fprintf(file, "%d %s %s %d\n", b.id, b.name, b.author, b.quantity);
    fclose(file);

    printf("Book added successfully!\n");
}

void restockBooks() {
    books b[100];
    int count = 0;

    FILE *file = fopen("Books.txt", "r");
    if (file == NULL) {
        printf("Error: No books found!\n");
        return;
    }

    while (fscanf(file, "%d %s %s %d", &b[count].id, b[count].name, b[count].author, &b[count].quantity) == 4) {
        count++;
    }
    fclose(file);

    int bookId, addQuantity;
    printf("Enter Book ID to restock: ");
    scanf("%d", &bookId);

    int index = findBookById(bookId, b, count);
    if (index == -1) {
        printf("Book not found!\n");
        return;
    }

    printf("Enter quantity to add: ");
    scanf("%d", &addQuantity);
    b[index].quantity += addQuantity;

    file = fopen("Books.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s %s %d\n", b[i].id, b[i].name, b[i].author, b[i].quantity);
    }
    fclose(file);

    printf("Book restocked successfully!\n");
}

void viewBooks() {
    books b;
    FILE *file = fopen("Books.txt", "r");
    if (file == NULL) {
        printf("No books available!\n");
        return;
    }

    printf("\nAvailable Books:\n");
    printf("ID Name Author Quantity\n");
    while (fscanf(file, "%d %s %s %d", &b.id, b.name, b.author, &b.quantity) == 4) {
        printf("%d %s %s %d\n", b.id, b.name, b.author, b.quantity);
    }
    fclose(file);
}

void borrowBook(int userId) {
    books b[100];
    int count = 0;

    FILE *file = fopen("Books.txt", "r");
    if (file == NULL) {
        printf("No books available!\n");
        return;
    }

    while (fscanf(file, "%d %s %s %d", &b[count].id, b[count].name, b[count].author, &b[count].quantity) == 4) {
        count++;
    }
    fclose(file);

    int bookId;
    printf("Enter Book ID to borrow: ");
    scanf("%d", &bookId);

    int index = findBookById(bookId, b, count);
    if (index == -1 || b[index].quantity <= 0) {
        printf("Book not available!\n");
        return;
    }

    b[index].quantity--;

    file = fopen("Books.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s %s %d\n", b[i].id, b[i].name, b[i].author, b[i].quantity);
    }
    fclose(file);

    FILE *borrowFile = fopen("Borrowed.txt", "a");
    fprintf(borrowFile, "%d %d\n", userId, bookId);
    fclose(borrowFile);

    printf("Book borrowed successfully!\n");
}

void viewBorrowedBooks() {
    borrowed br;
    FILE *file = fopen("Borrowed.txt", "r");
    if (file == NULL) {
        printf("No borrowed books!\n");
        return;
    }

    printf("\nBorrowed Books (User ID - Book ID):\n");
    while (fscanf(file, "%d %d", &br.userId, &br.bookId) == 2) {
        printf("%d - %d\n", br.userId, br.bookId);
    }
    fclose(file);
}

void viewBorrowedList() {
    viewBorrowedBooks();
}
