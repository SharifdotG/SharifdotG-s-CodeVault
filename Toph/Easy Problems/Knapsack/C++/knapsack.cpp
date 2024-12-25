#include <bits/stdc++.h>

using namespace std;

int main() {
    int items, capacity;
    cin >> items >> capacity;

    vector<int> weights(items), values(items);
    for (int i = 0; i < items; i++) {
        cin >> weights[i] >> values[i];
    }

    vector<vector<int>> dp(items + 1, vector<int>(capacity + 1, 0));
    for (int i = 1; i <= items; i++) {
        for (int j = 1; j <= capacity; j++) {
            if (weights[i - 1] <= j) {
                dp[i][j] = max(dp[i - 1][j], values[i - 1] + dp[i - 1][j - weights[i - 1]]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[items][capacity] << endl;

    return 0;
}