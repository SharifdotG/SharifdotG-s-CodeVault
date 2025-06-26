#include <bits/stdc++.h>

using namespace std;

int main() {
    int bricks;
    cin >> bricks;

    int previousBrick;
    cin >> previousBrick;

    int towers = 1;
    
    for (int i = 1; i < bricks; i++) {
        int currentBrick;
        cin >> currentBrick;

        if (currentBrick > previousBrick) towers++; 

        previousBrick = currentBrick;
    }

    cout << towers << endl;

    return 0;
}
