#include <bits/stdc++.h>

using namespace std;

int main() {
    int height, width;

    while (cin >> height >> width) {
        string line;
        bool flag = false;
        double sum = 0.0;

        for (int i = 0; i < height; i++) {
            cin >> line;

            for (int j = 0; j < width; j++) {
                if (line[j] == '/' || line[j] == '\\') {
                    flag = !flag;
                    sum += 0.5;
                } else if (flag && line[j] == '.') sum += 1.0;
            }
        }

        cout << sum << endl;
    }
    
    return 0;
}