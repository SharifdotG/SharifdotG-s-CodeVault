#include <bits/stdc++.h>

using namespace std;

int main() {
    int line;
    char operation;
    double sum = 0.0, number;
    cin >> line >> operation;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j ++) {
            cin >> number;
            
            if (i == line) {
                sum += number;
            }
        }
    }

    if (operation == 'S') cout << fixed << setprecision(1) << sum << endl;
    else cout << fixed << setprecision(1) << sum / 12.0 << endl;
    
    return 0;
}