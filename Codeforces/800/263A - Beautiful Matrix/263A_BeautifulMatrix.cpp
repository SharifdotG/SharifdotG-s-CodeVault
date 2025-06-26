#include <bits/stdc++.h>

using namespace std;

int main() {
    int row, column;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 ; j++) {
            int number;
            cin >> number;
            if (number == 1) {
                row = i;
                column = j;
            }
        }
    }

    cout << abs(row - 3) + abs(column - 3);
    
    return 0;
}