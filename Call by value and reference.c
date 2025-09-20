#include<stdio.h>

void plus_ten1(int a) // Call by value
{
    a = a + 10;
}
// Explanation:
// When the variable 'a' is declared in the main function and passed to 'plus_ten1',
// the value of 'a' is copied into the parameter of the function. This is known as "call by value".
// Since a copy is made, any changes to 'a' inside the function only affect the copy, not the original variable.
// Therefore, the original 'a' in the main function remains unchanged after the function call.

void plus_ten2(int *a) // Call by reference
{
    *a = (*a) + 10;
}
// Explanation:
// When the address of the variable 'a' (i.e., &a) is passed as an argument to 'plus_ten2',
// the function can access and modify the original variable directly. This is called "call by reference".
// By dereferencing the pointer using *a, the function changes the value stored at the address of 'a' in the main function.

int main()
{
    int a;
    a = 5;

    plus_ten1(a);
    // Call by value: this does not modify 'a' in the main function
    printf("a = %d\n", a); // Output: 5

    plus_ten2(&a);
    // Call by reference: this modifies 'a' in the main function
    printf("a = %d\n", a); // Output: 15
}
