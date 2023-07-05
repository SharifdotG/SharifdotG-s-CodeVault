#include <stdio.h>

int main() {
    float principal, time, rate_of_interest, simple_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time period in years: ");
    scanf("%f", &time);

    printf("Enter the interest rate: ");
    scanf("%f", &rate_of_interest);

    simple_interest = principal * time * rate_of_interest / 100;

    printf("The simple interest is: %f\n", simple_interest);

    return 0;
}