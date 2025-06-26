#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int shared = 5;
    int liked = 0;
    int cumulative = 0;

    for (int i = 0; i < n; i++) {
        liked = shared / 2;
        cumulative += liked;
        shared = liked * 3;
    }

    cout << cumulative << endl;

    return 0;
}