#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<char>> board(rows, vector<char>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> board[i][j];
        }
    }

    int numMines = 0;
    vector<pair<int, int>> mines;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (board[i][j] == '*') {
                numMines++;
                mines.push_back({i, j});
            }
        }
    }

    cout << numMines << endl;
    for (auto mine : mines) {
        cout << mine.first + 1 << " " << mine.second + 1 << endl;
    }

    return 0;
}