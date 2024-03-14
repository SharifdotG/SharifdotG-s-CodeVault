#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string firstString, secondString;
        cin >> firstString >> secondString;

        cout << firstString << endl;
        cout << secondString << endl;

        for (int i = 0; i < firstString.length(); i++) {
            if (firstString[i] == secondString[i]) {
                cout << ".";
            } else {
                cout << "*";
            }
        }

        cout << endl << endl;
    }

    return 0;
}