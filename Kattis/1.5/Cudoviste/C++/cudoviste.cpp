#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;

    char map[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> map[i][j];
        }
    }

    int carsSquashed[5] = {0};

    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < columns - 1; j++) {
            int count = 0;
            if (map[i][j] == '#' || map[i + 1][j] == '#' || map[i][j + 1] == '#' || map[i + 1][j + 1] == '#') continue;
            
            if (map[i][j] == 'X') count ++;
            if (map[i + 1][j] == 'X') count ++;
            if (map[i][j + 1] == 'X') count ++;
            if (map[i + 1][j + 1] == 'X') count ++;

            carsSquashed[count]++;
        }
    }
    
    for (int i = 0; i < 5; i++) {
        cout << carsSquashed[i] << endl;
    }

    return 0;
}