#include <stdio.h>

int main() {
    double s = 1;

    for (int i = 3, j = 2; i <= 39; i += 2, j *= 2) {
        s += (double)i / j;
    }

    printf("%.2f\n", s);

    return 0;
}
