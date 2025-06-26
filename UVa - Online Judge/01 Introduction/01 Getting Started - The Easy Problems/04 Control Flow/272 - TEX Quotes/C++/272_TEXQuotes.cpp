#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;
    bool firstQuatations = true;

    while (getline(cin, line)) {
        for (int i = 0; i < line.length(); i++) {
            if (line[i] == '"') {
                if (firstQuatations) {
                    cout << "``";
                } else {
                    cout << "''";
                }

                firstQuatations = !firstQuatations;
            } else {
                cout << line[i];
            }
        }

        cout << endl;
    }
    
    return 0;
}