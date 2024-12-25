#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sticks(n), result(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> sticks[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                int sides[3] = {sticks[i], sticks[j], sticks[k]};
                sort(sides, sides + 3);

                if (sides[2] * sides[2] == sides[0] * sides[0] + sides[1] * sides[1]) {
                    result[i] = result[j] = result[k] = 1;
                }
            }
        }
    }

    int validSticks = 0;
    for (int i = 0; i < n; ++i) {
        validSticks += result[i];
    }

    cout << validSticks << endl;

    return 0;
}