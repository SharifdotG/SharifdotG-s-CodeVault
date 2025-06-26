#include <bits/stdc++.h>

using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;

    long long a = 0, b = 1;

    if (a >= l) {
        cout << a << endl;
    }

    bool one = false;

    while (b <= r) {
        if (b == 1 && one) {}
        else if (b >= l) {
            cout << b << endl;

            if (b == 1) {
                one = true;
            }
        }

        long long c = a + b;
        a = b, b = c;
    }
    
    return 0;
}