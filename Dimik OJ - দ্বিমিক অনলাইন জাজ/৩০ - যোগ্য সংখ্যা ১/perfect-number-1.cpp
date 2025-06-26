#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        long long n;
        cin >> n;

        long long sum = 0;
        for (long long i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        if (sum == n) {
            cout << "YES, " << n << " is a perfect number!" << endl;
        } else {
            cout << "NO, " << n << " is not a perfect number!" << endl;
        }
    }

    return 0;
}