#include <math.h>
#include <stdio.h>

int main() {
    double ev1, ev2, at, d;
    while (scanf("%lf %lf %lf %lf", &ev1, &ev2, &at, &d) == 4 && ev1) {
        double n1 = ceil(ev1 / d);
        double n2 = ceil(ev2 / d);

        double answer, p;

        if (at == 3) {
            answer = n1 / (n1 + n2);
        } else {
            p = at / 6.0;
            answer =
                (1 - pow((1 - p) / p, n1)) / (1 - pow((1 - p) / p, n1 + n2));
        }

        printf("%.1f\n", answer * 100);
    }

    return 0;
}
