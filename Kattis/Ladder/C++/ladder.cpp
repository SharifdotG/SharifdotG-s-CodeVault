#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

using namespace std;

int main() {
    int height, degrees;
    cin >> height >> degrees;

    cout << ceil(height / sin((float) degrees / 180 * M_PI)) << endl;

    return 0;
}