#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        double x;
        scanf("%lf", &x);

        int days = 0;
        while (x > 1) {
            x /= 2;
            days++;
        }

        printf("%d dias\n", days);
    }

    return 0;
}
