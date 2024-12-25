#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (long long i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    long long n;
    cin >> n;

    if (n == 2) {
        cout << "Yes" << endl;
        return 0;
    }

    if (n % 6 == 1) {
        if (isPrime(n + 2)) {
            cout << "Yes" << endl;
            return 0;
        }
    } else if (n % 6 == 5) {
        if (isPrime(n + 2)) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}