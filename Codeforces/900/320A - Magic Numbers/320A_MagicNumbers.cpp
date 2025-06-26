#include <bits/stdc++.h>

using namespace std;

int main() {
    string number;
    cin >> number;

    int i = 0;
    while (i < number.length()) {
        if (number[i] == '1') {
            if (number[i + 1] == '4') {
                if (number[i + 2] == '4') {
                    i += 3;
                } else i += 2;
            } else i++;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    
    return 0;
}