#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int stringLength;
        cin >> stringLength;

        string moves;
        cin >> moves;

        int x = 0, y = 0, flag = 1;
        for (int i = 0; i < stringLength; i++) {
            if (moves[i] == 'L') x--;
            else if (moves[i] == 'R') x++;
            else if (moves[i] == 'U') y++;
            else if (moves[i] == 'D') y--;

            if (x == 1 && y == 1) {
                flag = 0;
                break;
            }
        }

        if (flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}