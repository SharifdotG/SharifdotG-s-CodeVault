#include <bits/stdc++.h>

using namespace std;

int main() {
    pair<int, int> positions[9];
    int number;

    for (int i = 0; i < 9; i++) {
        cin >> number;
        positions[number - 1] = make_pair(i / 3, i % 3);
    }

    double totalLength = 0;

    for (int i = 0; i < 8; i++) {
        totalLength += sqrt(pow(positions[i].first - positions[i + 1].first, 2) + pow(positions[i].second - positions[i + 1].second, 2));
    }

    cout << fixed << setprecision(10) << totalLength << endl;

    return 0;
}
