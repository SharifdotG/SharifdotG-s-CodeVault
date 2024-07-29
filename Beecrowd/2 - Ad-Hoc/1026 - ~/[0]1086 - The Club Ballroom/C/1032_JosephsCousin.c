#include <stdio.h>
#include <stdbool.h>

#define MAXN 3501
#define MAXPRIME 35000

void sieve(int n, int primes[], int *count) {
    bool is_prime[MAXPRIME + 1];
    for (int i = 0; i <= n; i++) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;

    *count = 0;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes[(*count)++] = i;
            for (int j = i * 2; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    int primes[MAXPRIME], count;
    sieve(MAXPRIME, primes, &count);

    int n;
    while (scanf("%d", &n) && n) {
        int josephus[MAXN];
        int size = n;

        for (int i = 0; i < n; i++) {
            josephus[i] = i + 1;
        }

        int idx = 0;
        for (int i = 0; i < n - 1; i++) {
            idx = (idx + primes[i] - 1) % size;
            for (int j = idx; j < size - 1; j++) {
                josephus[j] = josephus[j + 1];
            }
            size--;
        }

        printf("%d\n", josephus[0]);
    }

    return 0;
}
