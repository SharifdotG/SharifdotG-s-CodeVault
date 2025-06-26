#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;
    for (char c : s) {
        if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            if (st.empty()) {
                cout << "No" << endl;
                return 0;
            }
            st.pop();
        }
    }

    cout << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}