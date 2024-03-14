#include <bits/stdc++.h>

using namespace std;

int main() {
    int logLength;
    cin >> logLength;

    unordered_set<string> inside;

    for (int i = 0; i < logLength; i++) {
        string action, name;
        cin >> action >> name;

        if (action == "entry") {
            if (inside.find(name) != inside.end()) {
                cout << name << " entered (ANOMALY)" << endl;
            } else {
                inside.insert(name);
                cout << name << " entered" << endl;
            }
        } else {
            if (inside.find(name) != inside.end()) {
                inside.erase(name);
                cout << name << " exited" << endl;
            } else {
                cout << name << " exited (ANOMALY)" << endl;
            }
        }
    }

    return 0;
}
