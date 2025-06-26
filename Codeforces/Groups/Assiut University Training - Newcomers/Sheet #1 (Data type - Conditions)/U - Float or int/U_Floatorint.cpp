#include <bits/stdc++.h>

using namespace std;

int main() {
    double n;
    cin >> n;

    if (n == (int)n) {
        cout << "int " << (int)n << endl;
    } else {
        cout << "float " << int(n) << " " << n - int(n) << endl;
    }
    
    return 0;
}