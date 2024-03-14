#include <bits/stdc++.h>

using namespace std;

int main() {
    int cells, lanes;
    cin >> cells >> lanes;

    int totalCells = cells * lanes;
    int emptyCells = 0;

    for (int i = 0; i < lanes; i++) {
        string lane;
        cin >> lane;

        for (int j = 0; j < cells; j++) {
            if (lane[j] == '.') {
                emptyCells++;
            }
        }
    }

    cout << fixed << setprecision(6) << (double) emptyCells / totalCells << endl;

    return 0;
}