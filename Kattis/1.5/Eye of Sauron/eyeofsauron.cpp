#include <bits/stdc++.h>

using namespace std;

int main() {
    string towerDrawing;
    cin >> towerDrawing;

    int towerSize = towerDrawing.size();

    if (towerSize % 2 == 1) cout << "fix" << endl;
    else {
        if (towerDrawing.find("(") == (towerSize / 2) - 1) cout << "correct" << endl;
        else cout << "fix" << endl;
    }

    return 0;
}