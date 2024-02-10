#include <bits/stdc++.h>

using namespace std;

int main() {
    string mapTile;
    cin >> mapTile;

    int x = 0, y = 0, zoom = mapTile.length();

    for (int i = 0; i < zoom; i++) {
        if (mapTile[i] == '1' || mapTile[i] == '3')
            x += pow(2, zoom - i - 1);
        if (mapTile[i] == '2' || mapTile[i] == '3')
            y += pow(2, zoom - i - 1);
    }

    cout << zoom << " " << x << " " << y << endl;

    return 0;
}
