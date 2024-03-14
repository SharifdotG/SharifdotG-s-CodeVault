#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number;
        cin >> number;

        if (number % 2 == 0) cout << number << " is even" << endl;
        else cout << number << " is odd" << endl;
    }

    return 0;
}