#include <bits/stdc++.h>

using namespace std;

int main() {
    int peoples;
    cin >> peoples;

    string names[peoples];
    for (int i = 0; i < peoples; i++) {
        cin >> names[i];
    }

    string song[16] = {
        "Happy", "birthday", "to", "you",
        "Happy", "birthday", "to", "you",
        "Happy", "birthday", "to", "Rujia",
        "Happy", "birthday", "to", "you"
    };
    
    int songIndex = 0, nameIndex = 0, songCount = 0;

    while (songCount < peoples) {
        cout << names[nameIndex] << ": " << song[songIndex] << endl;

        songIndex++, nameIndex++;

        if (songIndex == 16) songIndex = 0;
        if (nameIndex == peoples) nameIndex = 0;

        songCount++;
    }

    if (songIndex != 0) {
        while (songIndex < 16) {
            cout << names[nameIndex] << ": " << song[songIndex] << endl;

            songIndex++, nameIndex++;

            if (nameIndex == peoples) nameIndex = 0;
        }
    }
    
    return 0;
}