#include <bits/stdc++.h>

using namespace std;

int main() {
    int height, width;

    while (true) {
        cin >> height >> width;

        if (height == 0 && width == 0) {
            break;
        }

        for (int i = 0; i < height; i++) {
            cout << "#";

            for (int j = 1; j < width - 1; j++) {
                if (i == 0 || i == height - 1) {
                    cout << "#";
                } else cout << ".";
            }

            cout << "#" << endl;
        }

        cout << endl;
    }
    
    return 0;
}