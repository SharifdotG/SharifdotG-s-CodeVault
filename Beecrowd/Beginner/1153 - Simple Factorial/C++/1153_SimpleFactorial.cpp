#include <bits/stdc++.h>

using namespace std;

int main() {
    int number, factorial = 1;
    cin >> number;

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    cout << factorial << endl;
    
    return 0;
}