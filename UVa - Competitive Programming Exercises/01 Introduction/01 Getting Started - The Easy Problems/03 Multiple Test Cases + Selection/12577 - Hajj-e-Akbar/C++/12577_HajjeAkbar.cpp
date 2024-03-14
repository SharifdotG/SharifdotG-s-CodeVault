#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;
    int i = 1;

    while (getline(cin, line)) {
        if (line == "*") {
            break;
        }

        if (line == "Hajj") {
            cout << "Case " << i << ": Hajj-e-Akbar" << endl;
        } else {
            cout << "Case " << i << ": Hajj-e-Asghar" << endl;
        }

        i++;
    }
    
    return 0;
}