#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int a, b;
        cin >> a >> b;

        int primeCount = 0;
        for (int i = a; i <= b; i++) {
            if (i == 1) {
                continue;
            }

            bool isPrime = true;
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                primeCount++;
            }
        }

        cout << primeCount << endl;
    }

    return 0;
}