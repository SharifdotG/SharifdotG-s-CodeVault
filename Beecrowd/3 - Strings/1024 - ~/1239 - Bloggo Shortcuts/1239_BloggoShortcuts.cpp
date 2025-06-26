#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        bool italic = false, bold = false;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '_') {
                if (!italic) {
                    cout << "<i>";
                } else {
                    cout << "</i>";
                }

                italic = !italic;
            } else if (s[i] == '*') {
                if (!bold) {
                    cout << "<b>";
                } else {
                    cout << "</b>";
                }

                bold = !bold;
            } else {
                cout << s[i];
            }
        }
        
        cout << endl;
    }

    return 0;
}