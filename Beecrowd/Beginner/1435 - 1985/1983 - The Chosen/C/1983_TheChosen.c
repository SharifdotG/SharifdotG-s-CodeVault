#include <stdio.h>

int main() {
    int students;
    scanf("%d", &students);

    int student[students];
    double grade[students];

    for (int i = 0; i < students; i++) {
        scanf("%d %lf", &student[i], &grade[i]);
    }

    double highestGrade = grade[0];
    int highestGradeStudent = student[0];

    for (int i = 1; i < students; i++) {
        if (grade[i] > highestGrade) {
            highestGrade = grade[i];
            highestGradeStudent = student[i];
        }
    }

    if (highestGrade >= 8) {
        printf("%d\n", highestGradeStudent);
    } else {
        printf("Minimum note not reached\n");
    }

    return 0;
}
