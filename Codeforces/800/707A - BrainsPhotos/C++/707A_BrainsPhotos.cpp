#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;

    char color;
    bool isColored = false;
    
    for (int i = 0; i < rows * columns; i++) {
        cin >> color;

        if (color == 'C' || color == 'M' || color == 'Y') isColored = true;
    }

    if (isColored) cout << "#Color" << endl;
    else cout << "#Black&White" << endl;
    
    return 0;
}