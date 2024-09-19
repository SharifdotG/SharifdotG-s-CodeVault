#include <bits/stdc++.h>

using namespace std;

int main() {
    int laptopWidth, laptopHeight, stickerWidth, stickerHeight;
    cin >> laptopWidth >> laptopHeight >> stickerWidth >> stickerHeight;

    if (laptopWidth - stickerWidth < 2 || laptopHeight - stickerHeight < 2) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }

    return 0;
}