Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

    
#include <stdio.h>
int main() {
    int length, width, area, perimeter;
    printf("Enter length and width of the rectangle: ");
    scanf("%d %d", &length, &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area: %d\nPerimeter: %d\n", area, perimeter);
    return 0;
}
