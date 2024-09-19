#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int k = 1; k <= n; k++) {
        long long answer = (long long) k * k * (k * k - 1) / 2 - 4 * (k - 1) * (k - 2);
        cout << answer << endl;
    }
    
    return 0;
}