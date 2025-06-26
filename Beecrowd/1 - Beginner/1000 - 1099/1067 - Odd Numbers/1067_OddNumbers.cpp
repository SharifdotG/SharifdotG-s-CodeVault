#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = 1; i <= number; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }
    
    return 0;
}