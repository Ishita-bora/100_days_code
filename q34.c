#include <stdio.h>
int main() {
    int n, prime = 1, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        prime = 0;
    } else {
        for(i=2; i*i<=n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }
    if (prime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}