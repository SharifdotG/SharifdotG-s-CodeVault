#include <bits/stdc++.h>

using namespace std;

int main() {
    char operation;
    double matrix[12][12], sum = 0;
    cin >> operation;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j ++) {
            cin >> matrix[i][j];
            
            if (j < 11 - i) {
                sum += matrix[i][j];
            }
        }
    }

    if (operation == 'S') cout << fixed << setprecision(1) << sum << endl;
    else cout << fixed << setprecision(1) << sum / 66.0 << endl;
    
    return 0;
}