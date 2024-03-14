#include <bits/stdc++.h>

using namespace std;

int main() {
    double miles;
    cin >> miles;

    int romanMiles = round(miles * 1000 * 5280 / 4854);

    cout << romanMiles << endl;

    return 0;
}
