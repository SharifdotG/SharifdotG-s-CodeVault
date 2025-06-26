#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> message(n);
    for (int i = 0; i < n; i++) {
        cin >> message[i];
    }

    string secretMessage;
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    q.push({0, 0});
    visited[0][0] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (message[x][y] != '.') {
            secretMessage += message[x][y];
        }

        if (y + 1 < m && !visited[x][y + 1]) {
            q.push({x, y + 1});
            visited[x][y + 1] = true;
        }

        if (x + 1 < n && !visited[x + 1][y]) {
            q.push({x + 1, y});
            visited[x + 1][y] = true;
        }
    }

    cout << secretMessage << endl;

    return 0;
}