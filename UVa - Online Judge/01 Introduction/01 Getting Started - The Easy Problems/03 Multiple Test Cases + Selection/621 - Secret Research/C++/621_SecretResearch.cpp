#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    string strings;

    cin >> testCases;
    cin.ignore();

    while (testCases--) {
        getline(cin, strings);

        if (strings == "1" || strings == "4" || strings == "78") {
            cout << "+" << endl;
        } else if (strings[strings.size() - 1] == '5' && strings[strings.size() - 2] == '3') {
            cout << "-" << endl;
        } else if (strings[0] == '9' && strings[strings.size() - 1] == '4') {
            cout << "*" << endl;
        } else {
            cout << "?" << endl;
        }
    }
    
    return 0;
}