#include <stdio.h>

int main() {
    double weight, height;
    
    printf("Enter your weight in kilogram: ");
    scanf("%lf", &weight);

    printf("Enter your height in meter: ");
    scanf("%lf", &height);

    double bmi = weight / (height * height);

    printf("Your BMI is %.2f\n", bmi);
    
    return 0;
}
