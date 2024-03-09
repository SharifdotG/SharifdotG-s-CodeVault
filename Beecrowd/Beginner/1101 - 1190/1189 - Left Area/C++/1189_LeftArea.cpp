#include <bits/stdc++.h>

using namespace std;

int main() {
    char operation;
    double matrix[12][12], sum = 0;
    cin >> operation;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j ++) {
            cin >> matrix[i][j];

            if (i > j && i + j < 11) {
                sum += matrix[i][j];
            }
        }
    }

    if (operation == 'S') cout << fixed << setprecision(1) << sum << endl;
    else cout << fixed << setprecision(1) << sum / 30 << endl;

    return 0;
}