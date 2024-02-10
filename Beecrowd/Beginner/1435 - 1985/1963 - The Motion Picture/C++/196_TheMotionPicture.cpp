#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    double percentage = ((b - a) / a) * 100;

    cout << fixed << setprecision(2) << percentage << "%" << endl;

    return 0;
}