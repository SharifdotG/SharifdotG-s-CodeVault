#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;

    int a = n[0] - '0';
    if (a % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
    
    return 0;
}