#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string position;
        cin >> position;

        int row = position[1] - '0';
        int column = position[0] - 'a' + 1;

        int count = 0;
        
        if (row - 2 >= 1 && column - 1 >= 1) count++;
        if (row - 2 >= 1 && column + 1 <= 8) count++;
        if (row - 1 >= 1 && column - 2 >= 1) count++;
        if (row - 1 >= 1 && column + 2 <= 8) count++;
        if (row + 1 <= 8 && column - 2 >= 1) count++;
        if (row + 1 <= 8 && column + 2 <= 8) count++;
        if (row + 2 <= 8 && column - 1 >= 1) count++;
        if (row + 2 <= 8 && column + 1 <= 8) count++;

        cout << count << endl;
    }
    
    return 0;
}