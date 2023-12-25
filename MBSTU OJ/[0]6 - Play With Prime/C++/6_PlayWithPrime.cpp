#include <bits/stdc++.h>

using namespace std;

void sieve(long long n, long long m) {
    vector<bool> isPrime(m - n + 1, true);

    for (long long i = 2; i * i <= m; i++) {
        long long start = max(i * i, (n + i - 1) / i * i);

        for (long long j = start; j <= m; j += i) {
            isPrime[j - n] = false;
        }
    }

    for (long long i = n; i <= m; i++) {
        if (isPrime[i - n]) {
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