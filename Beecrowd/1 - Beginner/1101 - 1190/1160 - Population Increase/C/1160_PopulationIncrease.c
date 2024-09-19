#include <stdio.h>

int main() {
    int testCases, pa, pb;
    double g1, g2;

    scanf("%d", &testCases);

    while (testCases--) {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        int years = 0;

        while (pa <= pb) {
            pa += pa * (g1 / 100);
            pb += pb * (g2 / 100);
            years++;

            if (years > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (years <= 100) {
            printf("%d anos.\n", years);
        }
    }
    
    return 0;
}
