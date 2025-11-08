#include <stdio.h>
int main()
{
    int arr[100];
    int ceil, n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find the ceil: ");
    scanf("%d", &x);
    ceil = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceil = arr[i];
            break;
        }
    }
    if (ceil != -1) {
        printf("Ceil of %d is %d\n", x, ceil);
    } else {
        printf(" -1\n");
    }
    return 0;
}