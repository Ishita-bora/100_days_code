#include <stdio.h>
int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if(a % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    return 0;
}
    