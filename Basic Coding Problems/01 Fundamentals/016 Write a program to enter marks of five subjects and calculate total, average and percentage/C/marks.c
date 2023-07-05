#include <stdio.h>

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    int total;
    float average;
    float percentage;

    printf("Enter the marks of the subjects: ");
    scanf("%d %d %d %d %d", &subject1, &subject2, &subject3, &subject4, &subject5);

    total = subject1 + subject2 + subject3 + subject4 + subject5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("The total marks of the subjects is: %d\n", total);
    printf("The average marks of the subjects is: %.2f\n", average);
    printf("The percentage of the total marks of the subjects is: %.2f%%\n", percentage);

    return 0;
}