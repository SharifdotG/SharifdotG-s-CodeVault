#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, x, y;
    cin >> n >> k >> x >> y;

    cout << min(n, k) * x + max(0, n - k) * y << endl;
    
    return 0;
}