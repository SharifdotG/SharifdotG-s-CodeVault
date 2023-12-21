#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int width, height, friends;
        cin >> width >> height >> friends;

        int pieces = 1;

        while (width % 2 == 0) {
            width /= 2;
            pieces *= 2;
        }

        while (height % 2 == 0) {
            height /= 2;
            pieces *= 2;
        }

        if (pieces >= friends) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }

    return 0;
}