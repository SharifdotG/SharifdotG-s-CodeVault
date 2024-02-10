#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int divisor = a / b;
    int remainder = a % b;
    double quotient = (double) a / b;

    cout << divisor << " " << remainder << " " << fixed << setprecision(5) << quotient << endl;
    
    return 0;
}