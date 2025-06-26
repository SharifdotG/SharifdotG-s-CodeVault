#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        int fibValues[x + 1], callCounts[x + 1];

        fibValues[0] = 0, fibValues[1] = 1;
        callCounts[0] = 1, callCounts[1] = 1;

        for (int j = 2; j <= x; j++) {
            fibValues[j] = fibValues[j - 1] + fibValues[j - 2];
            callCounts[j] = callCounts[j - 1] + callCounts[j - 2] + 1;
        }

        if (x == 0) {
            printf("fib(%d) = 1 calls = %d\n", x, fibValues[x]);
        } else {
            printf("fib(%d) = %d calls = %d\n", x, callCounts[x] - 1,
                   fibValues[x]);
        }
    }

    return 0;
}