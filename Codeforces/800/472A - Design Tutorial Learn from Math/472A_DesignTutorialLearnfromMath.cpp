#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    if (number % 2 == 0) {
        cout << 4 << " " << number - 4;
    } else {
        cout << 9 << " " << number - 9;
    }

    return 0;
}