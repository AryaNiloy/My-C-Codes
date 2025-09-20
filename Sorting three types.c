#include <stdio.h>
#include<time.h>
void insertion_sort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int item = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > item) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = item;
    }
    printf("Ascending order after Insertion Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubble_sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j + 1] < a[j]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("After Bubble Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selection_sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[max_index]) {  // ascending order
                max_index = j;
            }
        }
        if (max_index != i) {
            int temp = a[i];
            a[i] = a[max_index];
            a[max_index] = temp;
        }
    }
    printf("Descending order after Selection Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[11];  // Make room for one extra element
    int len = 10;

    printf("Enter 10 elements of array:\n");
    for (int i = 0; i < len; i++) {
        scanf("%d", &a[i]);
    }

    printf("Original Array:\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    clock_t t1s,t1e,t2s,t2e,t3s,t3e;
     t1s=clock();
    bubble_sort(a, len);
    t1e=clock();
    double time_taken = ((double)(t1e-t1s)) / CLOCKS_PER_SEC; // Time in seconds
    printf("Time taken: %lf seconds\n", time_taken);
    printf("Enter a new element to insert:\n");
    scanf("%d", &a[len]);
    len++;
     t2s=clock();
    selection_sort(a, len);
    t2e=clock();
    time_taken = ((double)(t2e-t2s)) / CLOCKS_PER_SEC; // Time in seconds
    printf("Time taken: %lf seconds\n", time_taken);
    t3s=clock();
    insertion_sort(a, len);
    t3e=clock();
    time_taken = ((double)(t3e-t3s)) / CLOCKS_PER_SEC; // Time in seconds
    printf("Time taken: %lf seconds\n", time_taken);

    return 0;
}

