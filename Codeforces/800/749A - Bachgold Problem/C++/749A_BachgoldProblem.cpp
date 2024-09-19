#include <bits/stdc++.h>

using namespace std;

int main() {
    int sumOfMaxPrimeNumbers;
    cin >> sumOfMaxPrimeNumbers;

    int kPrimes = sumOfMaxPrimeNumbers / 2;
    cout << kPrimes << endl;

    if (sumOfMaxPrimeNumbers % 2 == 0) {
        for (int i = 0; i < kPrimes; i++) cout << 2 << " ";
    } else {
        for (int i = 0; i < kPrimes - 1; i++) {
            cout << 2 << " ";
        }
        cout << 3;
    }
    
    return 0;
}