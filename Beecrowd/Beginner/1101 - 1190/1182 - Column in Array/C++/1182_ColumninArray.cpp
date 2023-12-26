#include <bits/stdc++.h>

using namespace std;

int main() {
    int column;
    char operation;
    double matrix[12][12], sum = 0.0;
    cin >> column >> operation;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j ++) {
            cin >> matrix[i][j];
            
            if (j == column) {
                sum += matrix[i][j];
            }
        }
    }

    if (operation == 'S') cout << fixed << setprecision(1) << sum << endl;
    else cout << fixed << setprecision(1) << sum / 12.0 << endl;
    
    return 0;
}