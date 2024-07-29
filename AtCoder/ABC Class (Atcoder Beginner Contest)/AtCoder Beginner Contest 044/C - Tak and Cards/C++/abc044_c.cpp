#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a;
    cin >> n >> a;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    vector<vector<vector<long long>>> dp(n + 1, vector<vector<long long>>(n + 1, vector<long long>(n * 50 + 1, 0)));
    dp[0][0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            for (int k = 0; k <= n * 50; k++) {
                dp[i + 1][j][k] += dp[i][j][k];
                dp[i + 1][j + 1][k + x[i]] += dp[i][j][k];
            }
        }
    }

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += dp[n][i][i * a];
    }

    cout << ans << endl;

    return 0;
}