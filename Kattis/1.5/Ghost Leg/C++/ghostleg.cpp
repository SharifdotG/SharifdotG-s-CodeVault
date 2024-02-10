#include <bits/stdc++.h>

using namespace std;

int main() {
    int permuted, rungs, rungsBetweenVerticalLines;
    cin >> permuted >> rungs;

    int elementsPosition[permuted + 1];
    for (int i = 0; i < permuted; i++) {
        elementsPosition[i] = i + 1;
    }

    for (int i = 0; i < rungs; i++) {
        cin >> rungsBetweenVerticalLines;

        swap(elementsPosition[rungsBetweenVerticalLines - 1], elementsPosition[rungsBetweenVerticalLines]);
    }

    for (int i = 0; i < permuted; i++) {
        cout << elementsPosition[i] << endl;
    }

    return 0;
}