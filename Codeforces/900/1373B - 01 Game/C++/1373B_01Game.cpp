#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string binary;
        cin >> binary;

        int zeros = 0, ones = 0;
        
        for (int i = 0; i < binary.length(); i++) {
            if (binary[i] == '0') zeros++;
            else ones++;
        }

        if (zeros == 0 || ones == 0) {
            cout << "NET" << endl;
        } else {
            if (min(zeros, ones) % 2 == 0) {
                cout << "NET" << endl;
            } else cout << "DA" << endl;
        }
    }
    
    return 0;
}