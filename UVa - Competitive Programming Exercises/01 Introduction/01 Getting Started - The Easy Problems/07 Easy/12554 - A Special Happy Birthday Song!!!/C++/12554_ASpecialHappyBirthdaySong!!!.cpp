#include <bits/stdc++.h>

using namespace std;

int main() {
    int peoples;
    cin >> peoples;
    
    vector<string> names(peoples);
    for (int i = 0; i < peoples; i++) cin >> names[i];

    vector<string> song = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};

    int songIndex = 0;
    int nameIndex = 0;

    while (nameIndex < peoples) {
        cout << names[nameIndex] << ": " << song[songIndex] << endl;

        songIndex++, nameIndex++;

        if (songIndex == song.size()) songIndex = 0;
        if (nameIndex == peoples) nameIndex = 0;
    }

    while (songIndex != 0) {
        cout << names[nameIndex] << ": " << song[songIndex] << endl;

        songIndex++;

        if (songIndex == song.size()) songIndex = 0;

        nameIndex++;

        if (nameIndex == peoples) nameIndex = 0;
    }
    
    return 0;
}