#include <bits/stdc++.h>

using namespace std;

int main() {
    int pages, target;
    cin >> pages >> target;

    int fromFront = target / 2;
    int fromBack = pages / 2 - target / 2;

    cout << min(fromFront, fromBack) << endl;

    return 0;
}