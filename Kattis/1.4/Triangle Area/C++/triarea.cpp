#include <bits/stdc++.h>

using namespace std;

int main() {
    int height, base;
    cin >> height >> base;

    float area = height * base * 0.5;

    cout << fixed << setprecision(7) << area << endl;

    return 0;
}