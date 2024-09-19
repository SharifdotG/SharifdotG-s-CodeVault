#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int avgerage = round((double)sum / n);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (a[i] - avgerage) * (a[i] - avgerage);
    }

    cout << ans << endl;

    return 0;
}