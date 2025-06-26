#include <stdio.h>

int main() {
    int ageInDays;
    scanf("%d", &ageInDays);

    int years = ageInDays / 365;
    ageInDays -= years * 365;

    int months = ageInDays / 30;
    ageInDays -= months * 30;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", ageInDays);
    
    return 0;
}