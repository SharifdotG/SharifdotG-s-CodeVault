#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> problemNames(n);
    for (int i = 0; i < n; i++) {
        cin >> problemNames[i];
    }

    vector<vector<int>> scores(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> scores[i][j];
        }
    }

    vector<int> totalScores(n, 0);
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            totalScores[j] += scores[i][j];
        }
    }

    int maxScore = -1;
    int maxIndex = -1;

    for (int i = 0; i < n; i++) {
        if (totalScores[i] > maxScore) {
            maxScore = totalScores[i];
            maxIndex = i;
        }
    }

    cout << problemNames[maxIndex] << endl;

    return 0;
}