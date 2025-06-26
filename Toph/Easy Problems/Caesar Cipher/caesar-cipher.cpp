#include <bits/stdc++.h>

using namespace std;

int main() {
    int leftShift;
    cin >> leftShift;
    cin.ignore();

    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            char message = s[i] - leftShift;

            if (message < 'a') {
                message += 26;
            }

            cout << message;
        } else {
            cout << s[i];
        }
    }
    
    return 0;
}