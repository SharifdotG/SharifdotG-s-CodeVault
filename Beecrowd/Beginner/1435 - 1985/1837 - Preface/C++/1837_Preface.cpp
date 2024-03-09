#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int quotient = a / b;
    int remainder = a % b;

    if (remainder < 0) {
        remainder += abs(b);
        quotient = (a - remainder) / b;
    }

    cout << quotient << " " << remainder << endl;

    return 0;
}