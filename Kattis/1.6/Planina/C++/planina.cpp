#include <bits/stdc++.h>

using namespace std;

int main() {
    int iterations, x = 2;
    cin >> iterations;

    for (int i = 0; i < iterations; i++) {
        x += x - 1;
    }

    cout << x * x << endl;

    return 0;
}
