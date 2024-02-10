#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    while (number--) {
        int value;
        cin >> value;

        if (value == 0) cout << "NULL" << endl;
        else if (value % 2 == 0) {
            if (value > 0) cout << "EVEN POSITIVE" << endl;
            else cout << "EVEN NEGATIVE" << endl;
        } else {
            if (value > 0) cout << "ODD POSITIVE" << endl;
            else cout << "ODD NEGATIVE" << endl;
        }
    }
    
    return 0;
}