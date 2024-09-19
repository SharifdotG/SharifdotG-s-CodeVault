#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    for (int i = 0; i < line.size(); i++) {
        if (line[i] == ':' || line[i] == ';') {
            if (line[i + 1] == ')') cout << i << endl;
            else if (line[i + 1] == '-') {
                if (line[i + 2] == ')') cout << i << endl;
            }
        }
    }

    return 0;
}