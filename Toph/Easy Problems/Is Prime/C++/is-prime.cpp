#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    if (number < 2) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}