#include <stdio.h>

void bubbleSort(int array[], int n);
void printArray(int array[], int n);

int main() {
    int numbers[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    bubbleSort(numbers, n);

    printf("Sorted array: ");
    printArray(numbers, n);

    return 0;
}

void bubbleSort(int array[], int n) {
    int swapped;
    do {
        swapped = 0;
        for (int i = 1; i < n; i++) {
            if (array[i - 1] > array[i]) {
                int temp = array[i - 1];
                array[i - 1] = array[i];
                array[i] = temp;
                swapped = 1;
            }
        }
        n--;
    } while (swapped);
}

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
