#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    for (int i = 1; i <= testCases; i++) {
        long long number;
        cin >> number;

        long long squareRoot = sqrt(number);

        if (squareRoot * squareRoot == number) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}