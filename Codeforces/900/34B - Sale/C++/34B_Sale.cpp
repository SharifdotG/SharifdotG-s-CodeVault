#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfSongs, maxDuration;
    cin >> numberOfSongs >> maxDuration;

    int songs[numberOfSongs];

    for (int i = 0; i < numberOfSongs; i++) cin >> songs[i];

    sort(songs, songs + numberOfSongs);

    int min = 0;

    for (int i = 0; i < maxDuration; i++) {
        if (songs[i] < 0) min += songs[i] * -1;
    }

    cout << min << endl;
    
    return 0;
}