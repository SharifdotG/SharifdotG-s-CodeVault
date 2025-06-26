#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    bool flag;
    cin >> testCases;
    while (testCases--) {
        int comlumns, northRow, southRow, difference;
        cin >> comlumns;

        flag = true;

        cin >> northRow >> southRow;
        difference = northRow - southRow;

        for (int i = 1; i < comlumns; i++) {
            cin >> northRow >> southRow;

            if (difference != northRow - southRow) flag = false;

        }

        if (flag) cout << "yes" << endl;
        else cout << "no" << endl;

        if (testCases) cout << endl;
    }
    
    return 0;
}