#include <bits/stdc++.h>

using namespace std;

int main() {
    int blocks, maxHeight = 0, currentSideLength = 1;
    cin >> blocks;

    while (blocks >= currentSideLength * currentSideLength) {
        blocks -= currentSideLength * currentSideLength;
        currentSideLength += 2;
        maxHeight++;
    }

    cout << maxHeight << endl;

    return 0;
}