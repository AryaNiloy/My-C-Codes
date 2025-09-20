#include <stdio.h>

void insertionSort(int array[], int n);
void printArray(int array[], int n);

int main() {
    int numbers[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    insertionSort(numbers, n);

    printf("Sorted array: ");
    printArray(numbers, n);

    return 0;
}

void insertionSort(int array[], int n) {
    for (int i = 1; i < n; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
