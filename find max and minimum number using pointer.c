#include <stdio.h>
void findMinMax(int arr[], int size, int *max, int *min) {
    *max = *min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        } else if (arr[i] < *min) {
            *min = arr[i];
        }}}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int numbers[size];
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    int max, min;

    findMinMax(numbers, size, &max, &min);
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);
    return 0;
}
