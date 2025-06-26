#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) {
                cout << "No" << endl;
                return 0;
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}