#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfLevels, numberOfLevelsXCanPass, numberOfLevelsYCanPass, level;
    cin >> numberOfLevels;
    cin >> numberOfLevelsXCanPass;

    set<int> levelsXCanPass;

    while (numberOfLevelsXCanPass--) {
        cin >> level;
        levelsXCanPass.insert(level);
    }

    cin >> numberOfLevelsYCanPass;

    while (numberOfLevelsYCanPass--) {
        cin >> level;
        levelsXCanPass.insert(level);
    }

    if (levelsXCanPass.size() == numberOfLevels) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    
    return 0;
}