#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> rooms(n);

    for (int i = 0; i < n; i++) {
        cin >> rooms[i].first >> rooms[i].second;
    }

    int currentGoombas = 0;

    for (int i = 0; i < n; i++) {
        currentGoombas += rooms[i].first;

        if (currentGoombas < rooms[i].second) {
            cout << "impossible" << endl;
            return 0;
        }
    }

    cout << "possible" << endl;

    return 0;
}