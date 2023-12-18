#include <bits/stdc++.h>

using namespace std;

int main() {
    char operation;
    double matrix[12][12], sum = 0;
    cin >> operation;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j ++) {
            cin >> matrix[i][j];

            if (i < 5 && j >= i + 1 && j <= 10 - i) {
                sum += matrix[i][j];
            }
        }
    }

    if (operation == 'S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum / 30.0);

    return 0;
}