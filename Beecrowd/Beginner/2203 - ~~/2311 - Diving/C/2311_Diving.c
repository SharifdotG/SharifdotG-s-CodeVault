#include <stdio.h>
#include <stdlib.h>

int main() {
    int divers;
    scanf("%d", &divers);

    while (divers--) {
        char name[50];
        scanf("%s", name);

        double difficulty;
        scanf("%lf", &difficulty);

        double grades[7];
        for (int i = 0; i < 7; i++) {
            scanf("%lf", &grades[i]);
        }

        for (int i = 0; i < 6; i++) {
            for (int j = i + 1; j < 7; j++) {
                if (grades[i] > grades[j]) {
                    double temp = grades[i];
                    grades[i] = grades[j];
                    grades[j] = temp;
                }
            }
        }

        double total = 0;
        for (int i = 1; i < 6; i++) {
            total += grades[i];
        }

        printf("%s %.2lf\n", name, total * difficulty);
    }

    return 0;
}
