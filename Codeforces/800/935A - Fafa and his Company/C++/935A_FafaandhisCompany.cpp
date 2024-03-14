#include <bits/stdc++.h>

using namespace std;

int main() {
    int employees;
    cin >> employees;

    int ways = 0;

    for (int i = 1; i < employees; i++) {
        if ((employees - i) % i == 0) {
            ways++;
        }
    }

    cout << ways << endl;

    return 0;
}