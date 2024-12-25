#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int t = n + m;
    set<int> unionSet;
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        unionSet.insert(x);
    }

    for (auto it = unionSet.begin(); it != unionSet.end(); ++it) {
        if (it != unionSet.begin()) {
            cout << " ";
        }
        cout << *it;
    }

    return 0;
}