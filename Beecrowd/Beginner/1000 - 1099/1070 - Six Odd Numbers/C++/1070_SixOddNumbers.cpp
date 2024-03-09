#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = 1; i <= 6; i++) {
        if (number % 2 != 0) cout << number << endl;
        else cout << ++number << endl;

        number += 2;
    }
    
    return 0;
}