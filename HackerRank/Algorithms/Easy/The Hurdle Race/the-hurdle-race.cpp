#include <bits/stdc++.h>

using namespace std;

int main() {
    int hurdles, maxJump;
    cin >> hurdles >> maxJump;

    int maxHeight = 0;
    for (int i = 0; i < hurdles; i++) {
        int height;
        cin >> height;

        maxHeight = max(maxHeight, height);
    }

    cout << max(maxHeight - maxJump, 0) << endl;

    return 0;
}