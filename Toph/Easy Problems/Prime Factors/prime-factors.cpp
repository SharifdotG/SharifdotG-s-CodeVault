#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> primeFactors;

    int temp = n;
    for (int i = 2; i * i <= temp; ++i) {
        while (temp % i == 0) {
            primeFactors[i]++;
            temp /= i;
        }
    }

    if (temp > 1) {
        primeFactors[temp]++;
    }

    cout << n << " = ";

    bool first = true;
    for (auto const& [factor, power] : primeFactors) {
        if (!first) {
            cout << " * ";
        }
        cout << factor << " ^ " << power;
        first = false;
    }
    cout << endl;

    return 0;
}