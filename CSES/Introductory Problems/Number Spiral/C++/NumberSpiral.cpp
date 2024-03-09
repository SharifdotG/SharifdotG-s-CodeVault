#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        long long row, column;
        cin >> row >> column;
        
        long long answer = 0;
        
        if (row >= column) {
            if (row % 2 == 0) {
                answer = row * row - column + 1;
            } else {
                answer = (row - 1) * (row - 1) + column;
            }
        } else {
            if (column % 2 == 1) {
                answer = column * column - row + 1;
            } else {
                answer = (column - 1) * (column - 1) + row;
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}