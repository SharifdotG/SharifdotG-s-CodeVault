#include <bits/stdc++.h>

using namespace std;

int countWays(int plankLength) {
    if (plankLength < 0) return 0;
    if (plankLength == 0) return 1;

    return countWays(plankLength - 1) + countWays(plankLength - 2) + countWays(plankLength - 3);
}

int main() {
    int plankLength;
    cin >> plankLength;

    cout << countWays(plankLength) << endl;

    return 0;
}