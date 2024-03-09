#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int stringLength;
        string name;

        cin >> stringLength >> name;

        sort(name.begin(), name.end());

        if (name == "Timru") cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}