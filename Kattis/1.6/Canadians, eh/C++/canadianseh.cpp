#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    if (line[line.length() - 3] == 'e' &&
        line[line.length() - 2] == 'h' &&
        line[line.length() - 1] == '?') {
        cout << "Canadian!" << endl;
    } else cout << "Imposter!" << endl;

    return 0;
}
