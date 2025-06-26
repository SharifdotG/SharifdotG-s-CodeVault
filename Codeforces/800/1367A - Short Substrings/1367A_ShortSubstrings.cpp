#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string newString;
        cin >> newString;
        
        string secretString = "";

        secretString += newString[0];

        for (int i = 1; i < newString.length(); i += 2) secretString += newString[i];

        cout << secretString << endl;
    }

    return 0;
}