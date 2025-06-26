#include <bits/stdc++.h>

using namespace std;

long long power(long long base, long long exp) {
    long long res = 1;
    base %= 1000000007;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % 1000000007;
        base = (base * base) % 1000000007;
        exp /= 2;
    }
    return res;
}

int main() {
    long long n;
    cin >> n;

    long long a = (n * (n + 1) / 2) % 1000000007;
    long long b = power(n, n);

    long long c = 1;
    for (long long i = 1; i <= n; ++i) {
        c = (c * i) % 1000000007;
    }

    long long d = (power(2, n) + power(3, n)) % 1000000007;

    cout << a << " " << b << " " << c << " " << d << endl;

    return 0;
}