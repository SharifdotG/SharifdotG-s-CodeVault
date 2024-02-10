#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, numberOfWalls, heightOfWall, previousWall, highJumps, lowJumps;

    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        cin >> numberOfWalls;

        highJumps = 0;
        lowJumps = 0;

        cin >> previousWall;

        for (int j = 1; j < numberOfWalls; j++) {
            cin >> heightOfWall;

            if (heightOfWall > previousWall) {
                highJumps++;
            } else if (heightOfWall < previousWall) {
                lowJumps++;
            }

            previousWall = heightOfWall;
        }

        cout << "Case " << i << ": " << highJumps << " " << lowJumps << endl;
    }
    
    return 0;
}