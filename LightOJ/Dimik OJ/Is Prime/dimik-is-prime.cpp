#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n) {
    if (n <= 1) {
        return false;
    }

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        long long n;
        cin >> n;

        if (isPrime(n)) {
            cout << n << " is a prime" << endl;
        } else {
            cout << n << " is not a prime" << endl;
        }
    }

    return 0;
}