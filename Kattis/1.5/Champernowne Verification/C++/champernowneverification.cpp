#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    
    string champernowneWord = "";
    int k = 0;
    
    while (champernowneWord.length() < n.length() + 1) {
        k++, champernowneWord += to_string(k);

        if (champernowneWord == n) {
            cout << k << endl;

            return 0;
        }
    }
    
    cout << -1 << endl;

    return 0;
}