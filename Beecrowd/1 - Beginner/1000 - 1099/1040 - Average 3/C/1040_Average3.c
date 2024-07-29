#include <stdio.h>

int main() {
    double grade1, grade2, grade3, grade4;
    double average, exam;

    scanf("%lf %lf %lf %lf", &grade1, &grade2, &grade3, &grade4);

    average = (grade1 * 2 + grade2 * 3 + grade3 * 4 + grade4) / 10;

    printf("Media: %.1lf\n", average);

    if (average >= 7.0) printf("Aluno aprovado.\n");
    else if (average < 5.0) printf("Aluno reprovado.\n");
    else {
        printf("Aluno em exame.\n");
        
        scanf("%lf", &exam);

        printf("Nota do exame: %.1lf\n", exam);

        average = (average + exam) / 2;

        if (average >= 5.0) {
            printf("Aluno aprovado.\n");
        } else printf("Aluno reprovado.\n");
        
        printf("Media final: %.1lf\n", average);
    }
    
    return 0;
}
