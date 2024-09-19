#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;
    cin >> line;

    int days = 0;
    for (int i = 0; i < line.length(); i++) {
        if (i % 3 == 0 && line[i] != 'P') days++;
        if (i % 3 == 1 && line[i] != 'E') days++;
        if (i % 3 == 2 && line[i] != 'R') days++;
    }

    cout << days << endl;

    return 0;
}