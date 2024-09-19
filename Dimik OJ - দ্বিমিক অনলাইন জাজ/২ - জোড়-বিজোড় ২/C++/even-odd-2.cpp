#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string number;
        cin >> number;

        if (number[number.length() - 1] % 2 == 0) {
            cout << "even" << endl;
        } else cout << "odd" << endl;
    }
    
    return 0;
}