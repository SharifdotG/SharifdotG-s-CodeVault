#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        int k;
        cin >> s >> k;

        for (int i = 0; i < s.size(); i++) {
            s[i] = (s[i] - k) < 'A' ? s[i] - k + 26 : s[i] - k;
        }

        cout << s << endl;
    }

    return 0;
}