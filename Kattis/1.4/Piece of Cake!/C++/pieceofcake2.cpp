#include <bits/stdc++.h>

using namespace std;

int main() {
    int sidesLength, horizonCut, verticalCut;
    cin >> sidesLength >> horizonCut >> verticalCut;

    int volume = max(horizonCut, sidesLength - horizonCut) * max(verticalCut, sidesLength - verticalCut) * 4;

    cout << volume << endl;

    return 0;
}