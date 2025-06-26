#include <bits/stdc++.h>

using namespace std;

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l1 <= l2 && l2 <= r1) {
        cout << l2 << " " << min(r1, r2) << endl;
    } else if (l2 <= l1 && l1 <= r2) {
        cout << l1 << " " << min(r1, r2) << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}