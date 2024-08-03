#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        long long a, b;
        cin >> a >> b;

        long long lcm = (a * b) / __gcd(a, b);

        cout << "LCM = " << lcm << endl;
    }

    return 0;
}