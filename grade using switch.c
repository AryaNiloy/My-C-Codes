#include <stdio.h>
char calculateGrade(int marks) {
    char grade;
    switch(marks / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }
    return grade;
}
int main() {
    int studentMarks; printf("Enter marks "); scanf("%d",&studentMarks);
    char grade = calculateGrade(studentMarks);
    printf("Grade: %c\n", grade);
    return 0;
}

