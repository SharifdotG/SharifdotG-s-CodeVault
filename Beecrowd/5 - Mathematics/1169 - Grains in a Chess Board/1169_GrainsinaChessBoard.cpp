#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        cout << (long long)(pow(2, x) / 12000) << " kg" << endl;
    }

    return 0;
}
