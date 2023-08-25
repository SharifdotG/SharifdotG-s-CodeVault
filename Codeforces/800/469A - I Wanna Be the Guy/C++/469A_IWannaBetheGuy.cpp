#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfLevels;
    cin >> numberOfLevels;

    int numberOfLevelsXCanPass;
    cin >> numberOfLevelsXCanPass;

    int levelsXCanPass[numberOfLevelsXCanPass];
    for (int i = 0; i < numberOfLevelsXCanPass; i++) {
        cin >> levelsXCanPass[i];
    }

    int numberOfLevelsYCanPass;
    cin >> numberOfLevelsYCanPass;

    int levelsYCanPass[numberOfLevelsYCanPass];
    for (int i = 0; i < numberOfLevelsYCanPass; i++) {
        cin >> levelsYCanPass[i];
    }

    int levelsXAndYCanPass[numberOfLevelsXCanPass + numberOfLevelsYCanPass];

    for (int i = 0; i < numberOfLevelsXCanPass; i++) {
        levelsXAndYCanPass[i] = levelsXCanPass[i];
    }

    for (int i = 0; i < numberOfLevelsYCanPass; i++) {
        levelsXAndYCanPass[numberOfLevelsXCanPass + i] = levelsYCanPass[i];
    }

    sort(levelsXAndYCanPass, levelsXAndYCanPass + numberOfLevelsXCanPass + numberOfLevelsYCanPass);

    bool canPassAllLevels = true;

    for (int i = 0; i < numberOfLevels; i++) {
        if (levelsXAndYCanPass[i] != i + 1) {
            canPassAllLevels = false;
            break;
        }
    }

    if (canPassAllLevels) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    
    return 0;
}