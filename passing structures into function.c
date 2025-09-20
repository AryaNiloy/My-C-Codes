#include <stdio.h>
#include <string.h>
struct student {
    char name[100];
    int roll;
    float cgpa;
};
void printfinfo(struct student s);
int main() {
    struct student Niloy = {"Niloy", 51, 3.9};

    printfinfo(Niloy);
    return 0;
}
void printfinfo(struct student s) {
    printf("Your records are %s %d %.2f\n", s.name, s.roll, s.cgpa);
}
