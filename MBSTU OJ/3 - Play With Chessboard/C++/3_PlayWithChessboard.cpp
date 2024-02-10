#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int bishopRow, bishopColumn, targetRow, targetColumn;
        cin >> bishopRow >> bishopColumn >> targetRow >> targetColumn;

        if (abs(bishopRow - targetRow) == abs(bishopColumn - targetColumn)) {
            cout << "1" << endl;
        } else cout << "0" << endl;
    }
    
    return 0;
}