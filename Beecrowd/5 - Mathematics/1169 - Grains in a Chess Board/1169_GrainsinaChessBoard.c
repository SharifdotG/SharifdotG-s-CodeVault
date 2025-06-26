#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        printf("%lld kg\n", (long long)(pow(2, x) / 12000));
    }

    return 0;
}
