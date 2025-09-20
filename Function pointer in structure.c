#include <stdio.h>

typedef struct box {
    int w, h;
    int (*display)(struct box*);
    int (*area)(struct box*);
    int (*set)(struct box*, int, int);
} box;

// Function to calculate area
int area(box* r) {
    return r->w * r->h;
}

// Function to display width and height
int display(box* r) {
    printf("Width is %d, Height is %d\n", r->w, r->h);
    return 0;
}

// Function to set width and height
int set(box* r, int w, int h) {
    r->w = w;
    r->h = h;
    return 0;
}

// Constructor function to initialize function pointers
void consbox(box* r) {
    r->w = 0;
    r->h = 0;
    r->set = set;
    r->area = area;
    r->display = display;
}

int main() {
    box r;
    consbox(&r);  // Initialize struct

    r.set(&r, 10, 5);  // Set width and height
    r.display(&r);  // Display width and height
    printf("The area of the rectangle is %d\n", r.area(&r));  // Calculate area

    return 0;
}
