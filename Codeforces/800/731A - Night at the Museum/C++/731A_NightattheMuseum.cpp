#include <bits/stdc++.h>

using namespace std;

int main() {
    string exhibitName;
    cin >> exhibitName;

    int rotations = 0;
    char current = 'a';

    for (int i = 0; i < exhibitName.length(); i++) {
        int distance = abs(exhibitName[i] - current);
        rotations += min(distance, 26 - distance);
        current = exhibitName[i];
    }

    cout << rotations << endl;

    return 0;
}