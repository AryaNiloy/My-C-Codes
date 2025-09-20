#include <stdio.h>

int main() {
    int total_marks[] = {56, 62, 74, 66, 65, 81, 70, 62, 63, 78, 66, 68, 82, 73, 68, 92, 72, 62, 56, 88, 67, 65, 77, 94, 61, 72, 72, 58, 84, 80, 68, 76, 70};
    int marks_count[101]; // Assuming the maximum marks can be 100

    for (int i = 0; i <= 100; i++) {
        marks_count[i] = 0;
    }

    for (int i = 0; i < 30; i++) {
        int marks = total_marks[i];
        marks_count[marks]++;
    }

    for (int i = 50; i <= 100; i++) {
        printf("Marks %d is %d times\n", i, marks_count[i]);
    }

    return 0;
}
