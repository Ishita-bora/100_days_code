Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main()
{
    int n, digit, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0 && n % 2 != 0) {
        digit = n % 10;
        product *= digit;
        n /= 10;
    }
    printf("Product of odd digits: %d\n", product);
    return 0;
}
