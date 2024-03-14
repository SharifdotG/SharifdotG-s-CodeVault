#include <bits/stdc++.h>

using namespace std;

vector<long long> primes;
vector<bool> isPrime;

void sieve(long long n) {
    isPrime.assign(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (long long i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);

            for (long long j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

vector<long long> segmentedSieve(long long start, long long end) {
    vector<long long> result;

    if (start == 1) {
        start++;
    }

    vector<bool> isPrime(end - start + 1, true);

    for (long long i = 0; primes[i] * primes[i] <= end; i++) {
        long long currentPrime = primes[i];
        long long base = (start / currentPrime) * currentPrime;

        if (base < start) {
            base += currentPrime;
        }

        for (long long j = base; j <= end; j += currentPrime) {
            isPrime[j - start] = false;
        }

        if (base == currentPrime) {
            isPrime[base - start] = true;
        }
    }

    for (long long i = 0; i <= end - start; i++) {
        if (isPrime[i]) {
            result.push_back(i + start);
        }
    }

    return result;
}

int main() {
    long long testCases;
    cin >> testCases;

    while (testCases--) {
        long long start, end;
        cin >> start >> end;
        
        sieve(sqrt(end) + 1);
        vector<long long> result = segmentedSieve(start, end);

        for (long long i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }

        cout << endl;
    }
    
    return 0;
}