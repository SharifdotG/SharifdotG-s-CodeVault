#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;

    char loops[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> loops[i][j];
        }
    }

    int yarn = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (loops[i][j] == '.') yarn += 20;
            else if (loops[i][j] == 'O') yarn += 10;
            else if (loops[i][j] == '\\') yarn += 25;
            else if (loops[i][j] == '/') yarn += 25;
            else if (loops[i][j] == 'A') yarn += 35;
            else if (loops[i][j] == '^') yarn += 5;
            else if (loops[i][j] == 'v') yarn += 22;
        }
    }

    cout << yarn << endl;

    return 0;
}