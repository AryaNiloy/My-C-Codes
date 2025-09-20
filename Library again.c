#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[20];
    char role[20];
    char pass[20];
} users;

// Function to check if an ID exists
int findUserById(int id, users u[], int count) {
    for (int i = 0; i < count; i++) {
        if (u[i].id == id) return i;
    }
    return -1;  // User not found
}



// Signup function
void signup() {
    users u[100];
    int count = 0;

    // Open file in read mode to check existing users
    FILE *file = fopen("User.txt", "r");
    if (file != NULL) {
        while (fscanf(file, "%d %s %s %s", &u[count].id, u[count].name, u[count].role, u[count].pass) == 4) {
            count++;
        }
        fclose(file);
    }

    users newuser;
    printf("Enter ID: ");
    scanf("%d", &newuser.id);  // ✅ Fixed typo here

    // Check if ID already exists
    if (findUserById(newuser.id, u, count) != -1) {
        printf("Error: User with ID %d already exists!\n", newuser.id);
        return;
    }

    printf("Enter Name: ");
    scanf("%s", newuser.name);
    printf("Enter Role: ");
    scanf("%s", newuser.role);
    printf("Enter Password: ");
    scanf("%s", newuser.pass);

    // Open file in append mode for writing new user
    FILE *file_append = fopen("User.txt", "a");
    if (file_append == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    // Write new user data to file
    fprintf(file_append, "%d %s %s %s\n", newuser.id, newuser.name, newuser.role, newuser.pass);
    fclose(file_append);

    printf("Signup successful!\n");
}
// Login function
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
                adminMenu();  // Call admin menu
            } else {
                studentMenu();  // Call student menu
            }
            return;
        } else {
            printf("Wrong password! Attempts left: %d\n", 2 - attempts);
        }
        attempts++;
    }

    printf("Too many failed attempts! Access denied.\n");
}
typedef struct
{
    int id;
    char name[10];
    char author[10];
    int quantity;
}book;
void restockbooks() {
    book b[100]; // Array of books
    int count = 0;

    FILE *file = fopen("Books.txt", "r"); // Open in read mode
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }

    // Read all books from the file
    while (fscanf(file, "%d %s %s %d", &b[count].id, b[count].name, b[count].author, &b[count].quantity) == 4) {
        count++;
    }
    fclose(file);

    int n, tid;
    printf("Enter the ID of the book to restock: ");
    scanf("%d", &tid);
    printf("Enter the number of books to add: ");
    scanf("%d", &n);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (tid == b[i].id) {
            b[i].quantity += n;
            found = 1;
            printf("Book restocked successfully! New quantity: %d\n", b[i].quantity);
            break;
        }
    }

    if (!found) {
        printf("Book with ID %d not found!\n", tid);
        return;
    }

    // Write updated data back to the file
    file = fopen("Books.txt", "w"); // Open in write mode
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s %s %d\n", b[i].id, b[i].name, b[i].author, b[i].quantity);
    }

    fclose(file);
}

void viewbooks()
{    book b[100]; // Array of books
    int count = 0;

    FILE *file = fopen("Books.txt", "r"); // Open in read mode
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }

    // Read all books from the file
    while (fscanf(file, "%d %s %s %d", &b[count].id, b[count].name, b[count].author, &b[count].quantity) == 4) {
        count++;
    }
    fclose(file);
    for(int i=0;i<count;i++)
    {
        printf("%d %s %s %d\n",b[i].id, b[i].name, b[i].author, b[i].quantity);
    }

}
void borrows(int studentId, char studentName[]) {
    book b[];
    int count=0;
    FILE *file=fopen("Books.txt","r");
    while(fscanf(file, "%d %s %s %d", &b[count].id, b[count].name, b[count].author, &b[count].quantity) == 4)
    {
        count++;
    }
    for (int i=0;i<count;i++)
    {
        printf("%d %s %s %d\n",b[i].id,b[i].name,b[i].author,b[i].quantity);
    }
    fclose(file);
    printf("Enter the name of the book you want to borrow: ");
    scanf(" %[^\n]", bookName);  // to take full book name with spaces
    for(int i=0;i<count;i++)
    {
        if (b[i].name==bookName)
        { FILE *borrowFile = fopen("Borrow.txt", "a");
    if (borrowFile == NULL) {
        printf("Error: Could not open borrow file.\n");
        return;
    }

    fprintf(borrowFile, "%d %s %s\n", users[i].id,users[i].name,books[i].name);
    books[i].quantity-=;
    fclose(borrowFile);

    printf("Book '%s' borrowed successfully!\n", bookName);

        }
    }

}
void viewborrow()
{
    FILE *file=fopen("Borrow.txt","r");
    FILE *ufile=fopen("Users.txt","r");
    FILE *bfile=fopen("Book.txt");
    int count=0;
    book b[100];
    user u[100];
    while(fscanf(file,"%d %s %s",u[count].id,u[count].name,b[count].name)!=3)
    {
        count++;
    }
    for(int i=0;i<count;i++)
    {
      printf("%d %s %s\n",u[i].id,u[i].name,b[i].name);
    }


}

 adminMenu()
 {
     printf("Enter action");
     printf("1.View books\n2.Restock Books\n3.Viewborrow")
     int key;
     scanf("%d",&key);
     switch(key)
     {
         case 1:viewbooks();
         break;
         case 2:restockbooks();
         break;
         case 3: viewborrow();
         break;
     }
 }
studentMenu()
{
    printf("Enter action");
     printf("1.View books\n2.Borrow Books\n3.Viewborrow")
     int key;
     scanf("%d",&key);
     switch(key)
     {
         case 1:viewbooks();
         break;
         case 2:borrows();
         break;

     }

}
int main() {
    int key;
    while (1) {
        printf("1. Sign up\n2. Login\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &key);

        switch (key) {
            case 1:
                signup();
                break;
            case 2:
                login();
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                return 0; // Exit the program
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

