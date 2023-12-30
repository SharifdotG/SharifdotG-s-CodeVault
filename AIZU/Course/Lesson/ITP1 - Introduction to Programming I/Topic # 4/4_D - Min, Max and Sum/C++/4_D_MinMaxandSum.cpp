#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, min = INT_MAX, max = INT_MIN;
    long long sum = 0;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int number;
        cin >> number;

        if (number < min) {
            min = number;
        }

        if (number > max) {
            max = number;
        }

        sum += number;
    }

    cout << min << " " << max << " " << sum << endl;
    
    return 0;
}