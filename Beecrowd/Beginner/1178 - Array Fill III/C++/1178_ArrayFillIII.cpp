#include <bits/stdc++.h>

using namespace std;

int main() {
    double number;
    cin >> number;

    for (int i = 0; i < 100; i++) {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << number << endl;
        number /= 2;
    }
    
    return 0;
}