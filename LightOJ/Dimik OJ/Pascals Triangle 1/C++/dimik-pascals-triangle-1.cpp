#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;
        
        // Left Traingle style of Pascal's Triangle
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << i + 1 << " ";
            }
            
            cout << endl;
        }
    }

    return 0;
}