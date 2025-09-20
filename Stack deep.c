#include <stdio.h>
#define MAX 5

typedef struct {
    int top;
    int array[MAX];
} stack;

void push(stack *s, int item) {
    if (s->top < MAX - 1) {
        s->top++;
        s->array[s->top] = item;
        printf("Item pushed is %d\n", item);
    } else {
        printf("Stack overflow.\nNo empty space\n");
    }
}

int pop(stack *s) {
    int item;
    if (s->top == -1) {
        printf("Stack empty.\nUnderflow\n");
        return -1;
    } else {
        item = s->array[s->top];
        s->top--;
        printf("Item popped is %d\n", item);
        return item;
    }
}

void display(stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack contents:\n");
        for (int i = s->top; i >= 0; i--) {
            printf("%d\n", s->array[i]);
        }
    }
}

int main() {
    int c, item;
    stack ms;
    ms.top = -1;

    while (1) {
        printf("\nEnter choice\n");
        printf("1 for display\n2 for push\n3 for pop\n4 for Exit\n");
        scanf("%d", &c);

        switch (c) {
            case 1:
                display(&ms);
                break;
            case 2:
                printf("Enter item: ");
                scanf("%d", &item);
                push(&ms, item);
                break;
            case 3:
                pop(&ms);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
