#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    while (cin >> n) {
        if (n[0] == '-') {
            break;
        }
        
        if (n[1] == 'x') {
            istringstream iss(n);
            int x;
            iss >> hex >> x;
            
            cout << dec << x << endl;
        } else {
            cout << "0x" << uppercase << hex << stoul(n) << endl;
        }
    }

    return 0;
}
