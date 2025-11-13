// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int a, b;  // variables to store the two input numbers
    int sum, diff, product, quotient;

    // input two numbers
    scanf("%d %d", &a, &b);

    // perform calculations
    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;  // integer division

    // display results
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d", sum, diff, product, quotient);

    return 0;
}
