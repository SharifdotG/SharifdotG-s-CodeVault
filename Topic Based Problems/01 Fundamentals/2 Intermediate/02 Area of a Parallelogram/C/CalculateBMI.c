#include <stdio.h>

int main() {
    double weight, height;
    scanf("%lf %lf", &weight, &height);

    double bmi = weight / (height * height);

    printf("%lf\n", bmi);
    
    return 0;
}
