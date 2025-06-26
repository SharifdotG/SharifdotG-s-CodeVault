#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    string result = "";

    while (ss >> word) {
        bool allUpper = true;
        for (char c : word) {
            if (islower(c)) {
                allUpper = false;
                break;
            }
        }

        if (!allUpper) {
            if (!result.empty()) {
                result += " ";
            }

            result += word;
        }
    }

    cout << result << endl;
    
    return 0;
}