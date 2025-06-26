#include <bits/stdc++.h>

using namespace std;

int main() {
    int switchPoints;
    cin >> switchPoints;

    cout << fixed << setprecision(3) << (float) 100 / switchPoints << endl;
    cout << fixed << setprecision(3) << (float) 100 / (100 - switchPoints) << endl;

    return 0;
}