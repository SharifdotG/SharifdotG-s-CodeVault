#include <bits/stdc++.h>

using namespace std;

int main() {
    int games;
    cin >> games;

    while (games--) {
        int n;
        cin >> n;

        string board;
        cin >> board;

        vector<int> freq(26, 0);
        bool hasEmpty = false;
        bool isHappy = true;
        for (int i = 0; i < n; i++) {
            if (board[i] == '_') {
                hasEmpty = true;
            } else {
                freq[board[i] - 'A']++;
            }
        }

        if (!hasEmpty) {
            for (int i = 0; i < n; i++) {
                if ((i == 0 && board[i] != board[i + 1]) ||
                    (i == n - 1 && board[i] != board[i - 1]) ||
                    (i > 0 && i < n - 1 && board[i] != board[i - 1] &&
                     board[i] != board[i + 1])) {
                    isHappy = false;
                    break;
                }
            }
        } else {
            for (int i = 0; i < 26; i++) {
                if (freq[i] == 1) {
                    isHappy = false;
                    break;
                }
            }
        }

        cout << (isHappy ? "YES" : "NO") << endl;
    }

    return 0;
}