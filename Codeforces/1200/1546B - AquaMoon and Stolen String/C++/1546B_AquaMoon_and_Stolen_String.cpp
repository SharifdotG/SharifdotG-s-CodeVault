#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n, m;
        cin >> n >> m;

        vector<string> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        vector<string> t(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> t[i];
        }

        string result = "";
        for (int i = 0; i < m; i++) {
            map<char, int> freq;
            for (int j = 0; j < n; j++) {
                freq[s[j][i]]++;
            }

            for (int j = 0; j < n - 1; j++) {
                freq[t[j][i]]--;
            }

            for (auto it : freq) {
                if (it.second > 0) {
                    result += it.first;
                    break;
                }
            }
        }

        cout << result << endl;
        cout << flush;
    }
    
    return 0;
}