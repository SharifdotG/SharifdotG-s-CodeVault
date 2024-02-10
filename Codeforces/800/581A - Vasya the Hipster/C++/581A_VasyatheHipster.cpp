#include <bits/stdc++.h>

using namespace std;

int main() {
    int redSocks, blueSocks;
    cin >> redSocks >> blueSocks;

    int days = min(redSocks, blueSocks);
    int difference = abs(redSocks - blueSocks);
    int pairs = difference / 2;

    cout << days << " " << pairs;

    return 0;
}