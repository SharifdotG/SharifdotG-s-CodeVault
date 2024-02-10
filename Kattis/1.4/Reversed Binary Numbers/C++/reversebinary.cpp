#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    int temp = 0;
    while (number > 0) {
        temp <<= 1;
        temp |= number & 1;
        number >>= 1;
    }

    cout << temp << endl;

    return 0;
}