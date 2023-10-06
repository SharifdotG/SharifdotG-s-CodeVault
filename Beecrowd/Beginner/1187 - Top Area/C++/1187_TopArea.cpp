#include <bits/stdc++.h>

using namespace std;

int main() {
    char operation;
    double matrix[12][12], sum = 0;
    cin >> operation;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 11 - i; j ++) {
            cin >> matrix[i][j];
            
            sum += matrix[i][j];
        }
    }

    if (operation == 'S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum / 30.0);
    
    return 0;
}