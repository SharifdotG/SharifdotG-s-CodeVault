#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> d(k);
    for (int i = 0; i < k; i++) {
        cin >> d[i];
    }

    for (int i = n; ; i++) {
        string s = to_string(i);
        bool doesLike = true;
        for (int j = 0; j < s.size(); j++) {
            for (int l = 0; l < k; l++) {
                if (s[j] - '0' == d[l]) {
                    doesLike = false;
                    break;
                }
            }
        }
        
        if (doesLike) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}