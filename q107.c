#include <stdio.h>
int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int prevGreater[n];

   
    for (int i = 0; i < n; i++) {
        prevGreater[i] = -1; 
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater[i] = arr[j];
                break;
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        printf("%d", prevGreater[i]);
        if (i != n - 1) printf(", ");
    }

    printf("\n");
    return 0;
}
