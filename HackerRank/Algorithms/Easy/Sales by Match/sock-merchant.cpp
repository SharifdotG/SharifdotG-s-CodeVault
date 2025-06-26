#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> socks(n);
    for (int i = 0; i < n; i++) {
        cin >> socks[i];
    }

    sort(socks.begin(), socks.end());

    int pairs = 0;
    for (int i = 0; i < n - 1; i++) {
        if (socks[i] == socks[i + 1]) {
            pairs++, i++;
        }
    }

    cout << pairs << endl;

    return 0;
}