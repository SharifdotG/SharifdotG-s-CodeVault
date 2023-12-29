#include <bits/stdc++.h>

using namespace std;

void sieve(long long start, long long end) {
    long long limit = sqrt(end) + 1;
    long long prime[limit + 1];
    memset(prime, 0, sizeof(prime));

    for (long long i = 2; i <= limit; i++) {
        if (!prime[i]) {
            for (long long j = i * i; j <= limit; j += i) {
                prime[j] = 1;
            }
        }
    }

    long long range = end - start + 1;
    long long arr[range + 1];
    memset(arr, 0, sizeof(arr));

    for (long long i = 2; i <= limit; i++) {
        if (!prime[i]) {
            long long j = start / i;
            j *= i;

            if (j < start) {
                j += i;
            }

            for (; j <= end; j += i) {
                if (j != i) {
                    arr[j - start] = 1;
                }
            }
        }
    }

    for (long long i = start; i <= end; i++) {
        if (!arr[i - start] && i != 1) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {
    long long testCases;
    cin >> testCases;

    while (testCases--) {
        long long start, end;
        cin >> start >> end;

        sieve(start, end);
    }
    
    return 0;
}