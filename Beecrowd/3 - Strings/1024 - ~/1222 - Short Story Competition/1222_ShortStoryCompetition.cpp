#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l, c;
    string s;
    while (cin >> n >> l >> c) {
        int lines = 1, pages = 1, words = 0;

        for (int i = 0; i < n; i++) {
            cin >> s;
            if (words + s.size() <= c) {
                words += s.size() + 1;
            } else {
                lines++;
                words = s.size() + 1;
            }
            if (lines > l) {
                lines = 1;
                pages++;
            }
        }

        cout << pages << endl;
    }

    return 0;
}