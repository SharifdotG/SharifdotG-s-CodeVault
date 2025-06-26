#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long t = 1, a = 1;
    for (int i = 0; i < n; i++) {
        long long T, A;
        cin >> T >> A;

        long long x = max((t + T - 1) / T, (a + A - 1) / A);
        
        t = x * T;
        a = x * A;
    }

    cout << t + a << endl;

    return 0;
}