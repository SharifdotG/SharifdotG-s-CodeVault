#include <bits/stdc++.h>

using namespace std;

int main() {
    int yesterdaysVictim, todaysVictim;
    cin >> yesterdaysVictim >> todaysVictim;

    int possibleVictims[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    for (int i = 0; i < 15; i++) {
        if (possibleVictims[i] == yesterdaysVictim) {
            if (possibleVictims[i + 1] == todaysVictim) {
                cout << "YES";
                return 0;
            } else {
                cout << "NO";
                return 0;
            }
        }
    }
    
    return 0;
}