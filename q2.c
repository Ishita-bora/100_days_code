Write a program to input two numbers and display their sum, difference, product, and quotient.

    
#include <stdio.h>
int main() {
    int sum , diff, num1, num2;
    double prod, quot;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    prod = (double)num1 * num2;
    if (num2 != 0) {
        quot = (double)num1 / num2;
        printf("Sum: %d\nDifference: %d\nProduct: %.2f\nQuotient: %.2f\n", sum, diff, prod, quot);
    } else {
        printf("Sum: %d\nDifference: %d\nProduct: %.2f\nQuotient: Undefined (division by zero)\n", sum, diff, prod);
    }
    return 0;
}
