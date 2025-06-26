#include <bits/stdc++.h>

using namespace std;

int main() {
    int beers, lemonades;
    cin >> beers >> lemonades;

    if (beers < lemonades) {
        cout << beers * 2 << endl;
    } else {
        cout << lemonades * 2 << endl;
    }

    return 0;
}