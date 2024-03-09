#include <bits/stdc++.h>

using namespace std;

int main() {
    int height, width;

    while (cin >> height >> width) {
        char ascii[height][width];

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                cin >> ascii[i][j];
            }
        }

        int area = 0;

        for (int i = 0; i < height; i++) {
            bool flag = false;

            for (int j = 0; j < width; j++) {
                if (ascii[i][j] == 47 || ascii[i][j] == 92) {
                    flag = !flag;
                    area++;
                }

                if (flag && ascii[i][j] == '.') area += 2;
            }
        }

        cout << area / 2 << endl;
    }
    
    return 0;
}