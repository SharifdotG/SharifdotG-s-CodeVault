#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    long long ans = 0;
    for (int bit = 0; bit < (1 << (s.size() - 1)); bit++) {
        long long num = 0;

        for (int i = 0; i < s.size(); ++i) {
            num = num * 10 + s[i] - '0';

            if (bit & (1 << i)) {
                ans += num;
                num = 0;
            }
        }

        ans += num;
    }

    cout << ans << endl;

    return 0;
}