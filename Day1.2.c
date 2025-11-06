Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    float num1, num2;  
    float sum, diff, prod, quot;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    if (num2 != 0)
        quot = num1 / num2;
    else
        quot = 0; // or you could print a message for division by zero

    printf("\nResults:\n");
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", prod);

    if (num2 != 0)
        printf("Quotient = %.2f\n", quot);
    else
        printf("Division by zero is not allowed.\n");

    return 0;
}
