#include <stdio.h>
int main() {
    double principal, rate, time, simple_interest;
    printf("Enter principal amount, rate of interest, and time (in years): ");
    scanf("%lf %lf %lf", &principal, &rate, &time);
    simple_interest = (principal * rate * time) / 100.0;
    printf("Simple Interest: %.2f\n", simple_interest);
    return 0;
}