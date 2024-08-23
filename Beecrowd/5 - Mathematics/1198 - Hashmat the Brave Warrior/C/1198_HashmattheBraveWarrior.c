#include <stdio.h>
#include <stdlib.h>

int main() {
    long long a, b;
    while (scanf("%lld %lld", &a, &b) == 2) {
        printf("%lld\n", llabs(a - b));
    }

    return 0;
}
