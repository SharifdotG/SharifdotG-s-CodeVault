#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string name;
        cin >> name;

        cout << "Welcome " << (char)toupper(name[0]) << name.substr(1) << endl;
    }
    
    return 0;
}