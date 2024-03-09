#include <bits/stdc++.h>

using namespace std;

int main() {
    string gameRecord;
    cin >> gameRecord;

    int scoreA = 0, scoreB = 0;

    for (int i = 0; i < gameRecord.length(); i += 2) {
        if (gameRecord[i] == 'A') {
            scoreA += gameRecord[i + 1] - '0';
        } else {
            scoreB += gameRecord[i + 1] - '0';
        }
    }

    if (scoreA > scoreB) cout << 'A' << endl;
    else cout << 'B' << endl;

    return 0;
}
