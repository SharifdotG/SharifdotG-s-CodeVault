#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        long long a, b, c, d, e, f, n;
        cin >> a >> b >> c >> d >> e >> f >> n;

        vector<long long> dp(10009);
        dp[0] = a % 10000007;
        dp[1] = b % 10000007;
        dp[2] = c % 10000007;
        dp[3] = d % 10000007;
        dp[4] = e % 10000007;
        dp[5] = f % 10000007;

        for (int j = 6; j <= n; j++) {
            dp[j] = (
                dp[j - 1] + dp[j - 2] + dp[j - 3] +
                dp[j - 4] + dp[j - 5] + dp[j - 6])
                % 10000007;
        }

        cout << "Case " << i << ": " << dp[n] << endl;
    }

    return 0;
}