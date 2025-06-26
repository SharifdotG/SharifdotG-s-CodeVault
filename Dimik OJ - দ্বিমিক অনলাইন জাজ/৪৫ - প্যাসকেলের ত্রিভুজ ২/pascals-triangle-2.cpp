#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        long long n;
        cin >> n;

        long long pascalTriangle[100][100];
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    pascalTriangle[i][j] = 1;
                } else {
                    pascalTriangle[i][j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
                }
            }
        }

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= i; j++) {
                if (pascalTriangle[i][j] == 1 && i == j) {
                    cout << "1";
                } else {
                    cout << pascalTriangle[i][j] << " ";
                }
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}