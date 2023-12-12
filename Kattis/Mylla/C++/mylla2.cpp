#include <bits/stdc++.h>

using namespace std;

int main() {
    string row1, row2, row3;
    cin >> row1 >> row2 >> row3;

    bool checkWin = false;

    // For checking rows
    if ((row1[0] == 'O' && row1[1] == 'O' && row1[2] == 'O') ||
        (row2[0] == 'O' && row2[1] == 'O' && row2[2] == 'O') ||
        (row3[0] == 'O' && row3[1] == 'O' && row3[2] == 'O')) {
        checkWin = true;
    }

    // For checking columns
    for (int i = 0; i < 3; ++i) {
        if ((row1[i] == 'O' && row2[i] == 'O' && row3[i] == 'O')) {
            checkWin = true;
        }
    }

    // For checking diagonals
    if ((row1[0] == 'O' && row2[1] == 'O' && row3[2] == 'O') ||
        (row1[2] == 'O' && row2[1] == 'O' && row3[0] == 'O')) {
        checkWin = true;
    }

    if (checkWin) {
        cout << "Jebb" << endl;
    } else {
        cout << "Neibb" << endl;
    }

    return 0;
}
