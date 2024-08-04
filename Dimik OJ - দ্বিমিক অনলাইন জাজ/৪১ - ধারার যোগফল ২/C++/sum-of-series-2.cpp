#include <bits/stdc++.h>

using namespace std;

double factorial(int n) {
    double fact = 1.0;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        double sum = 0.0;
        for (int i = 1; i <= n; i++) {
            sum += (i / factorial(i));
        }

        cout << setprecision(4) << fixed << sum << endl;
    }

    return 0;
}