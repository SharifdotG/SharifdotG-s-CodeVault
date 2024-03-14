#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    while (number--) {
        int value1, value2;
        cin >> value1 >> value2;

        if (value2 == 0) cout << "divisao impossivel" << endl;
        else cout << fixed << setprecision(1) << (double) value1 / value2 << endl;
    }
    
    return 0;
}