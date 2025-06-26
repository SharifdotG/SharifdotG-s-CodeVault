#include <bits/stdc++.h>

using namespace std;

int main() {
    int numerator, denominator;
    cin >> numerator >> denominator;

    int whole = numerator / denominator;
    int remainder = numerator % denominator;

    cout << whole << " " << remainder << " " << denominator << endl;

    return 0;
}