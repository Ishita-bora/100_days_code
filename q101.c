#include <stdio.h>
int main()
{
    int nums[100];
    int target, first_occurrence , last_occurrence, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter target element: ");
    scanf("%d", &target);
    first_occurrence = -1;
    last_occurrence = -1;
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first_occurrence == -1) {
                first_occurrence = i;
            }
            last_occurrence = i;
        }
    }
    if (first_occurrence != -1) {
        printf("First occurrence of %d is at index %d\n", target, first_occurrence);
        printf("Last occurrence of %d is at index %d\n", target, last_occurrence);
    } else {
        printf("-1, -1\n");
        return 0;
    }
}