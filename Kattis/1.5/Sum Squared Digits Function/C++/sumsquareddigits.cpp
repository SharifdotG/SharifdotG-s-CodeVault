#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        int dataSet, base, number;
        cin >> dataSet >> base >> number;

        int sum = 0;

        while (number > 0) {
            int digit = number % base;
            sum += digit * digit;
            number /= base;
        }

        cout << dataSet << " " << sum << endl;
    }

    return 0;
}