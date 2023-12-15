#include <bits/stdc++.h>

using namespace std;

int main() {
    string annsLists, bensLists;
    cin >> annsLists >> bensLists;

    annsLists += bensLists;

    sort(annsLists.begin(), annsLists.end());

    cout << annsLists << endl;

    return 0;
}