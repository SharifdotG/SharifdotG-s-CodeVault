#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfStatements;
    cin >> numberOfStatements;

    int x = 0;

    while (numberOfStatements--) {
        string statement;
        cin >> statement;

        if (statement[1] == '+') x++;
        else x--;
    }

    cout << x;
    
    return 0;
}