#include <bits/stdc++.h>

using namespace std;

int main() {
    int pencils, colors;
    cin >> pencils >> colors;

    vector<vector<string>> boxes(pencils, vector<string>(colors));
    for (int i = 0; i < pencils; i++) {
        for (int j = 0; j < colors; j++) {
            cin >> boxes[i][j];
        }
    }

    int totalRemovals = 0;

    for (int i = 0; i < pencils; i++) {
        unordered_map<string, int> colorCount;

        for (int j = 0; j < colors; j++) {
            colorCount[boxes[i][j]]++;
        }

        int excess = 0;
        
        for (auto pair : colorCount) {
            if (pair.second > 1) {
                excess += pair.second - 1;
            }
        }
        
        totalRemovals += excess;
    }

    cout << totalRemovals << endl;

    return 0;
}