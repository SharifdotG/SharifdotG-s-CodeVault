#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        p[x] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << p[p[i]] << endl;
    }

    return 0;
}