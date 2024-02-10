#include <bits/stdc++.h>

using namespace std;

int main() {
    long long number;
    cin >> number;

    if (number % 2 == 0) {
        cout << number / 2;
    } else {
        cout << (number / 2) - number;
    }
    
    return 0;
}