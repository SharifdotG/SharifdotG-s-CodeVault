#include <bits/stdc++.h>

using namespace std;

int main() {
    int height, pipes;
    cin >> height >> pipes;

    int previousPipe;
    cin >> previousPipe;

    bool isPossible = true;
    
    for (int i = 1; i < pipes; i++) {
        int currentPipe;
        cin >> currentPipe;

        if (abs(currentPipe - previousPipe) > height) {
            isPossible = false;
            break;
        }

        previousPipe = currentPipe;
    }

    if (isPossible) cout << "YOU WIN" << endl;
    else cout << "GAME OVER" << endl;

    return 0;
}