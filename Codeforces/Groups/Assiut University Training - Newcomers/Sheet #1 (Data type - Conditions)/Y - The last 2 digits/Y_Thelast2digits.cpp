#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    
    long long mul = 1;
    mul = (mul * a) % 100;
    mul = (mul * b) % 100;
    mul = (mul * c) % 100;
    mul = (mul * d) % 100;

    cout << setw(2) << setfill('0') << mul << endl;
    
    return 0;
}