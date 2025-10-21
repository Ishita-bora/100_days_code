#include <stdio.h>
int main() {
    int unit;
    double bill;
    printf("Enter number of units consumed: ");
    scanf("%d", &unit);
    if (unit <= 100) {
        bill = unit * 5.00;
    } else if (unit <= 200) {
        bill = (100 * 5.00) + ((unit - 100) * 7.00);
    } else if (unit <= 300) {
        bill = (100 * 5.00) + (100 * 7.00) + ((unit - 200) * 10.00);
    } else {
        bill = (100 * 5.00) + (100 * 7.00) + (100 * 10.00) + ((unit - 300) * 12.00);
    }
    printf("Electricity Bill: %.2lf\n", bill);
    return 0;
}