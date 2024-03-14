#include <bits/stdc++.h>

using namespace std;

int main() {
    int cells, destination;
    cin >> cells >> destination;

    int currentCell = 1;
    bool canReach = false;

    for (int i = 1; i < cells; i++) {
        int cell;
        cin >> cell;

        if (i == currentCell) {
            currentCell += cell;

            if (currentCell == destination) {
                canReach = true;
                break;
            }
        }
    }

    cout << (canReach ? "YES" : "NO") << endl;
    
    return 0;
}