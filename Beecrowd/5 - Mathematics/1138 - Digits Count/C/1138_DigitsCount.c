#include <stdio.h>

long long digits(int n, int d) {
    long long count = 0, pow = 1, rem = 0;

    while (n) {
        int x = n % 10;
        n /= 10;

        if (x > d) {
            count += (n + 1) * pow;
        } else {
            count += n * pow;
        }

        if (x == d) {
            count += rem + 1;
        }

        if (d == 0) {
            count -= pow;
        }

        rem += x * pow;
        pow *= 10;
    }

    return count;
}

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) && a != 0 && b != 0) {
        for (int i = 0; i < 10; i++) {
            printf("%lld", digits(b, i) - digits(a - 1, i));

            if (i < 9) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
