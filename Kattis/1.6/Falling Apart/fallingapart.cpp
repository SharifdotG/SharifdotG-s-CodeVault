#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int pieces[n];
    for (int i = 0; i < n; i++) {
        cin >> pieces[i];
    }
    
    sort(pieces, pieces + n, greater<int>());

    int alice = 0, bob = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            alice += pieces[i];
        } else {
            bob += pieces[i];
        }
    }

    cout << alice << " " << bob << endl;

    return 0;
}
