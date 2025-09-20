#include <stdio.h>

int binarySearch(int array[], int left, int right, int key);

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 5;
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int result = binarySearch(numbers, 0, n - 1, key);
    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index: %d\n", result);
    }
    return 0;
}

int binarySearch(int array[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == key) {
            return mid;
        }
        if (array[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
