#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        double x;
        cin >> x;

        int days = 0;
        while (x > 1) {
            x /= 2;
            days++;
        }

        cout << days << " days" << endl;
    }

    return 0;
}