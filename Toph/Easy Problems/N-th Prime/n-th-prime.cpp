#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int limit = 10000000;
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= limit; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p)
                isPrime[i] = false;
        }
    }

    vector<int> primes;
    for (int p = 2; p <= limit; p++) {
        if (isPrime[p]) {
            primes.push_back(p);
            
            if (primes.size() == n) {
                break;
            }
        }
    }

    cout << primes[n - 1] << endl;

    return 0;
}