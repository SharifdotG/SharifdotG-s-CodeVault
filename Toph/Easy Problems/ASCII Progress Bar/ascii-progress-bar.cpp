#include <bits/stdc++.h>

using namespace std;

int main() {
    int progress;
    cin >> progress;

    cout << "[";

    for (int i = 1; i < 11; i++) {
        if (progress / 10 < i) {
            cout << ".";
        } else {
            cout << "+";
        }
    }

    cout << "] " << progress << "%" << endl;
    
    return 0;
}