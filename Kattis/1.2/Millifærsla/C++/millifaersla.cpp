#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, lowestFee;
    cin >> a >> b >> c;

    lowestFee = min(min(a, b), c);

    if (lowestFee == a) cout << "Monnei" << endl;
    else if (lowestFee == b) cout << "Fjee" << endl;
    else cout << "Dolladollabilljoll" << endl;

    return 0;
}