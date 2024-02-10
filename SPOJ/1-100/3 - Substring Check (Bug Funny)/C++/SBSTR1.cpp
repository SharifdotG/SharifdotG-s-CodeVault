#include <bits/stdc++.h>

using namespace std;

int main() {
    string string1, string2;
    cin >> string1 >> string2;

    if (string1.find(string2) != string::npos) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    
    return 0;
}