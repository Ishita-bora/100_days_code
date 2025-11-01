Write a program to calculate the area and circumference of a circle given its radius.

    
#include <stdio.h>
int main () {
    int radius;
    float area, circumference;
    const float pi = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area: %.2f\nCircumference: %.2f\n", area, circumference);
    return 0;
}
