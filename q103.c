#include <stdio.h>
int main()
{
    int arr[100];
    int n, pivot_index = -1, pivot, right_sum, left_sum;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    right_sum = 0;
    for (int i = 0; i < n; i++) {
        right_sum += arr[i];
    }
    left_sum = 0;
    for (int i = 0; i < n; i++) {
        right_sum -= arr[i];
        if (left_sum == right_sum) {
            pivot_index = i;
            break;
        }
        left_sum += arr[i];
    }
    if (pivot_index != -1) {
        pivot = arr[pivot_index];
        printf("Pivot element is %d at index %d\n", pivot, pivot_index);
    } else {
        printf("-1\n");
    }
    return 0;
}
        