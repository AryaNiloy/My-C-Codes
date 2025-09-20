#include <stdio.h>
#include <string.h>
#include<time.h>

enum COLOR { RED, BLUE, GREEN, YELLOW };

int main() {
    clock_t start, end;
    start=clock();
    enum COLOR col;
    char c[10];

    printf("Enter color name: ");
    scanf("%s", c);

    if (strcmp(c, "RED") == 0)
        col = RED;
    else if (strcmp(c, "BLUE") == 0)
        col = BLUE;
    else if (strcmp(c, "GREEN") == 0)
        col = GREEN;
    else if (strcmp(c, "YELLOW") == 0)
        col = YELLOW;
    else {
        printf("Unknown color\n");

    }

    switch (col) {
        case RED: printf("My second fav\n"); break;
        case GREEN: printf("Not fav\n"); break;
        case BLUE: printf("MY fav\n"); break;
        case YELLOW: printf("Looks good\n"); break;
    }


    end= clock();
    double time=end-start;
    printf("Time required for run %lf",time/CLOCKS_PER_SEC);
}
