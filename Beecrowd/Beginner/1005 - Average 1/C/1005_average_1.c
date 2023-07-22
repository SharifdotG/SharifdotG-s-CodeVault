#include <stdio.h>

int main() {
    double first_number, second_number, average;

    scanf("%lf %lf", &first_number, &second_number);

    average = (first_number * 3.5 + second_number * 7.5) / (3.5 + 7.5);

    printf("MEDIA = %.5lf\n", average);
    
    return 0;
}