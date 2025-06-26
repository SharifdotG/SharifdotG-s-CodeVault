#include <bits/stdc++.h>

using namespace std;

int main() {
    string name;
    cin >> name;

    int distinctCharacters = 0;

    for (int i = 0; i < name.length(); i++) {
        bool isDistinct = true;

        for (int j = 0; j < i; j++) {
            if (name[i] == name[j]) {
                isDistinct = false;
                break;
            }
        }

        if (isDistinct) distinctCharacters++;
    }

    if (distinctCharacters % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    
    return 0;
}