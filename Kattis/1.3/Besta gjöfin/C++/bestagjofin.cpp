#include <bits/stdc++.h>

using namespace std;

int main() {
    int guests;
    cin >> guests;

    pair<string, int> guestList[guests];
    for (int i = 0; i < guests; i++) {
        string name;
        int gifts;
        cin >> name >> gifts;
        guestList[i] = make_pair(name, gifts);
    }

    int maxGifts = 0;
    for (int i = 0; i < guests; i++) {
        if (guestList[i].second > maxGifts) {
            maxGifts = guestList[i].second;
        }
    }
    
    for (int i = 0; i < guests; i++) {
        if (guestList[i].second == maxGifts) {
            cout << guestList[i].first << endl;
            break;
        }
    }

    return 0;
}