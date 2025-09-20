#include <stdio.h>

void foo(int (*ptr)[5]) {
    printf("Address of pointer variable: %p\n", (void*)&ptr);
    printf("Value stored in pointer (address of array): %p\n", (void*)ptr);

    // Accessing array elements using pointer
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", (*ptr)[i]);  // Dereferencing pointer to access array
    }
    printf("\n");
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Initialize array
    foo(&arr);  // Pass address of the entire array
    return 0;
}
