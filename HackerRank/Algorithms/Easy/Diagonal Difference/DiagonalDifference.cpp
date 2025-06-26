#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
    cin >> n;

    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0, number; j < n; j++) {
            cin >> number;
            matrix[i][j] = number;

            if (i == j) {
                primaryDiagonalSum += number;
            }
            
            if (i + j == n - 1) {
                secondaryDiagonalSum += number;
            }
        }
    }

    cout << abs(primaryDiagonalSum - secondaryDiagonalSum) << endl;
    
    return 0;
}