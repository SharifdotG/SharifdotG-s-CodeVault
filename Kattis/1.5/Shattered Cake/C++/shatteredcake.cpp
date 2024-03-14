#include <bits/stdc++.h>

using namespace std;

int main() {
    int width, pieces;
    cin >> width >> pieces;

    int area = 0;

    for (int i = 0; i < pieces; i++) {
        int pieceWidth, pieceLength;
        cin >> pieceWidth >> pieceLength;

        area += pieceWidth * pieceLength;
    }

    cout << area / width << endl;

    return 0;
}
