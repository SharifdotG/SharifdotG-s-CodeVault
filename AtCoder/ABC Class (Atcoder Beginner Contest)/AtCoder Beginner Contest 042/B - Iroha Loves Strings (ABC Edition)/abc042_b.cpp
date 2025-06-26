#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        cout << s[i];
    }
    cout << endl;
    
    return 0;
}