#include <bits/stdc++.h>

using namespace std;

int main() {
    int steps;
    cin >> steps;

    string path;
    cin >> path;

    int level = 0, valleys = 0;
    for (int i = 0; i < steps; i++) {
        if (path[i] == 'U') {
            level++;
        } else {
            level--;
        }

        if (level == 0 && path[i] == 'U') {
            valleys++;
        }
    }

    cout << valleys << endl;

    return 0;
}