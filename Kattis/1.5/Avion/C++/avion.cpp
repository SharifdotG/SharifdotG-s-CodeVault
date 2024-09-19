#include <bits/stdc++.h>

using namespace std;

int main() {
    bool found = false;

    for (int i = 0; i < 5; ++i) {
        string line;
        cin >> line;

        if (line.find("FBI") != string::npos) {
            cout << i + 1 << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "HE GOT AWAY!" << endl;
    } else {
        cout << endl;
    }

    return 0;
}