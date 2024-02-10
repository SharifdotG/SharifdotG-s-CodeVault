#include <bits/stdc++.h>

using namespace std;

int main() {
    int integers;
    cin >> integers;

    int list[integers];

    for (int i = 0; i < integers; i++) cin >> list[i];

    for (int i = integers - 1; i >= 0; i--) cout << list[i] << endl;

    return 0;
}