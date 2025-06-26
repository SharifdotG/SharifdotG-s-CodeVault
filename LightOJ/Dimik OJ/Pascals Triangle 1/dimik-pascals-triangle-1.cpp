#include <bits/stdc++.h>

using namespace std;

int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }

    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << binomialCoefficient(i, j) << " ";
            }
            
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}