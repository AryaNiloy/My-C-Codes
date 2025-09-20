#include<stdio.h>

// Define Date first
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Define Details struct that uses Date
typedef struct {
    char name[20];
    char father[20];
    char mother[20];
    Date birth;  // Use Date here
} Details;

int main() {
    Details p;

    // Input for the person's details
    printf("Enter the name of the person: ");
    gets(p.name);

    printf("Enter father's name: ");
    gets( p.father);

    printf("Enter mother's name: ");
    gets( p.mother);

    printf("Enter date of birth (day month year):\n ");
    scanf("%d %d %d", &p.birth.day, &p.birth.month, &p.birth.year);

    // Output the information in a formatted way
    printf("\nGovernment of Bangladesh\nNational ID card\n");
    printf("Name: %s\n", p.name);
    printf("Father: %s\n", p.father);
    printf("Mother: %s\n", p.mother);
    printf("Date of birth: %02d/%02d/%04d\n", p.birth.day, p.birth.month, p.birth.year);

    return 0;
}
