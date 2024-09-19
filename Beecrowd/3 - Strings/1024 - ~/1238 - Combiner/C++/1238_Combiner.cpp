#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s1, s2;
        cin >> s1 >> s2;

        int i = 0, j = 0;
        while (i < s1.size() || j < s2.size()) {
            if (i < s1.size()) {
                cout << s1[i++];
            }
            if (j < s2.size()) {
                cout << s2[j++];
            }
        }

        cout << endl;
    }

    return 0;
}