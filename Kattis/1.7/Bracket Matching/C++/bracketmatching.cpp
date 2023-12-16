#include <bits/stdc++.h>

using namespace std;

int main() {
    int bracketLength;
    cin >> bracketLength;

    string brackets;
    cin >> brackets;

    stack<char> bracketStack;

    for (int i = 0; i < bracketLength; i++) {
        if (brackets[i] == '(' || brackets[i] == '[' || brackets[i] == '{') {
            bracketStack.push(brackets[i]);
        } else {
            if (bracketStack.empty()) {
                cout << "Invalid" << endl;

                return 0;
            }

            char top = bracketStack.top();
            bracketStack.pop();

            if (brackets[i] == ')' && top != '(') {
                cout << "Invalid" << endl;

                return 0;
            } else if (brackets[i] == ']' && top != '[') {
                cout << "Invalid" << endl;

                return 0;
            } else if (brackets[i] == '}' && top != '{') {
                cout << "Invalid" << endl;

                return 0;
            }
        }
    }

    if (bracketStack.empty()) cout << "Valid" << endl;
    else cout << "Invalid" << endl;

    return 0;
}
