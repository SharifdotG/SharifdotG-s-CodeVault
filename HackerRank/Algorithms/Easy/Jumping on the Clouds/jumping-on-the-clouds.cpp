#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int jumps = 0;
    for (int i = 0; i < n - 1; i++) {
        if (i + 2 < n && c[i + 2] == 0) {
            i++;
        }
        
        jumps++;
    }

    cout << jumps << endl;

    return 0;
}