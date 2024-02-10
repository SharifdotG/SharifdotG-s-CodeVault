#include <bits/stdc++.h>

using namespace std;

int main() {
    double number;
    cin >> number;

    cout << fixed << setprecision(1) << number / log(number) << " " << 1.25506 * (number / log(number)) << endl;

    return 0;
}