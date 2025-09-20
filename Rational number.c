#include <stdio.h>

typedef struct {
    int p;
    int q;
} Rational;

int sum(int p, int q) {
    return p + q;
}

int sub(int p, int q) {
    return p - q;
}

int mul(int p, int q) {
    return p * q;
}

int div(int p, int q) {
    if ((q != 0) && (q>=0)) {
        return p / q;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;  // Return 0 for division by zero
    }
}

int main() {
    Rational r;  // instance of Rational structure to access its members
    int op, result, con;

    while (1) {
        printf("Enter the value of p: ");
        scanf("%d", &r.p);

        printf("Enter the value of q: ");
        scanf("%d", &r.q);

            while (1) {
                printf("Choose operation: 1 for Sum, 2 for Subtraction, 3 for Multiplication, 4 for Division\n");
                scanf("%d", &op);

                switch (op) {
                    case 1:
                        result = sum(r.p, r.q);
                        printf("Summation of two numbers is %d\n", result);
                        break;
                    case 2:
                        result = sub(r.p, r.q);
                        printf("Subtraction of two numbers is %d\n", result);
                        break;
                    case 3:
                        result = mul(r.p, r.q);
                        printf("Product of two numbers is %d\n", result);
                        break;
                    case 4:
                        result = div(r.p, r.q);
                        if (r.q != 0) {
                            printf("Quotient of two numbers is %d\n", result);
                        }
                        break;
                    default:
                        printf("Not a valid input. Try again.\n");
                        continue;  // Re-prompt for operation only
                }
                break;  // Break out of operation loop if a valid option is selected
            }


        printf("Enter 1 to continue or 0 to exit: ");
        scanf("%d", &con);

        if (con == 0) {
            break;  // Exit the loop if user enters 0
        }
    }

    return 0;
}
