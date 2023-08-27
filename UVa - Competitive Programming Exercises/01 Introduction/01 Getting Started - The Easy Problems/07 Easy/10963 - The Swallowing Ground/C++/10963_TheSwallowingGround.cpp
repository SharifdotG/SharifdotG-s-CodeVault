#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, columns, northMostRow, southMostRow, difference;
    cin >> testCases;

    while (testCases--) {
        cin >> columns;
        cin >> northMostRow >> southMostRow;

        difference = northMostRow - southMostRow;

        columns--;

        bool flag = true;

        while (columns--) {
            cin >> northMostRow >> southMostRow;

            if (difference != northMostRow - southMostRow) {
                flag = false;
            }
        }

        if (flag) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }

        if (testCases) {
            cout << endl;
        }
    }
    
    return 0;
}