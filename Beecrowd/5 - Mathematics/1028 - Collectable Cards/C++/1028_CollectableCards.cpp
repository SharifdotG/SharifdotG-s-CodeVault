#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int f, c;
        cin >> f >> c;
        
        cout << __gcd(f, c) << endl;
    }

    return 0;
}
