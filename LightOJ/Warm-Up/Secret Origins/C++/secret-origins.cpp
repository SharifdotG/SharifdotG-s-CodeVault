#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        int n;
        cin >> n;
        
        string ans = "";
        for (int j = 31; j >= 0; j--) {
            if (n & (1 << j)) {
                ans += "1";
            } else {
                ans += "0";
            }
        }

        next_permutation(ans.begin(), ans.end());
        
        int res = 0;
        for (int j = 31; j >= 0; j--) {
            if (ans[j] == '1') {
                res += (1 << (31 - j));
            }
        }

        cout << "Case " << i << ": " << res << endl;
    }

    return 0;
}