#include <bits/stdc++.h>

using namespace std;

int main() {
    int chefVotes, chefuVotes;
    cin >> chefVotes >> chefuVotes;

    if (chefuVotes * 2 <= chefVotes) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}