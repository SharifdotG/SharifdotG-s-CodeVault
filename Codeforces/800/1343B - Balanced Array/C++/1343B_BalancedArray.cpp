#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int length;
        cin >> length;

        if (length % 4 != 0) cout << "NO" << endl;
        else {
            cout << "YES" << endl;

            int evenSum = 0;
            int oddSum = 0;

            for (int i = 2; i <= length; i += 2) {
                cout << i << " ";
                evenSum += i;
            }

            for (int i = 1; i <= length - 2; i += 2) {
                cout << i << " ";
                oddSum += i;
            }

            cout << evenSum - oddSum << endl;
        }
    }

    return 0;
}