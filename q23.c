#include <stdio.h>
int main()
{
    int days;
    double fine;
    printf("Enter number of days the book is returned late: ");
    scanf("%d", &days);
    if (days <= 5) {
        fine = days * 2.00;
        printf("Fine: %.2lf\n", fine);
    } else if (days <= 10) {
        fine = (5 * 2.00) + ((days - 5) * 4.00);
        printf("Fine: %.2lf\n", fine);
    } else if (days <= 30) {
        fine = (5 * 2.00) + (15 * 4.00) + ((days - 20) * 6.00);
        printf("Fine: %.2lf\n", fine);
    } else {
        printf("Membership cancelled\n");
        return 0;  
    }
}