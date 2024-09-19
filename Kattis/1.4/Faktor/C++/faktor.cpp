#include <bits/stdc++.h>

using namespace std;

int main() {
    int articles, impactFactor;
    cin >> articles >> impactFactor;

    int scientists = articles * (impactFactor - 1) + 1;

    cout << scientists << endl;

    return 0;
}