#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        int count = 0;

        for (int i = 2; i <= n / 2; i++) {
            if (isPrime(i) && isPrime(n - i)) count++;
        }

        cout << count << endl;
    }
    
    return 0;
}