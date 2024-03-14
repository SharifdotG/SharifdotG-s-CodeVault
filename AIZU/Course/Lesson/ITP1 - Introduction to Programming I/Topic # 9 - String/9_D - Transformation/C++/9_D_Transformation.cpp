#include <bits/stdc++.h>

using namespace std;

int main() {
    string str, command;
    int commands, a, b;

    cin >> str >> commands;

    for (int i = 0; i < commands; i++) {
        cin >> command >> a >> b;

        if (command == "print") {
            cout << str.substr(a, b - a + 1) << endl;
        } else if (command == "reverse") {
            reverse(str.begin() + a, str.begin() + b + 1);
        } else if (command == "replace") {
            string p;
            cin >> p;

            str.replace(a, b - a + 1, p);
        }
    }
    
    return 0;
}