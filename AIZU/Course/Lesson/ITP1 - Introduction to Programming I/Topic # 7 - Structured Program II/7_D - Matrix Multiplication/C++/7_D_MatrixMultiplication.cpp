#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;

    long long a[n][m], b[m][l], c[n][l];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cin >> b[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            long long multiplication = 0;

            for (int k = 0; k < m; k++) {
                multiplication += a[i][k] * b[k][j];
            }

            c[i][j] = multiplication;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            cout << c[i][j] << (j == l - 1 ? "\n" : " ");
        }
    }
    
    return 0;
}