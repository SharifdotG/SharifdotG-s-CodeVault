#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    bool hasPath = false;
    for (int i = b; i >= 2; i--) {
        if (b % i == 0) {
            if (isPrime(i) && isPrime(b / i)) {
                hasPath = true;
                break;
            }
        }
    }

    cout << (hasPath ? "Yes" : "No") << endl;

    return 0;
}