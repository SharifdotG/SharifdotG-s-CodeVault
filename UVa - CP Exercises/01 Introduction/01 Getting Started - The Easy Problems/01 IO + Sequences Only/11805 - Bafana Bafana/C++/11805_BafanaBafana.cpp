#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, numberOfPlayers, kPlayer, passes, count = 1;
    cin >> testCases;

    while (testCases--) {
        cin >> numberOfPlayers >> kPlayer >> passes;
        int answer = (kPlayer + passes) % numberOfPlayers;
        if (answer == 0) answer = numberOfPlayers;
        cout << "Case " << count++ << ": " << answer << endl;
    }
    
    return 0;
}