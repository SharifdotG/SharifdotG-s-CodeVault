#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int numberOfGifts;
        cin >> numberOfGifts;

        int giftsA[numberOfGifts], giftsB[numberOfGifts];
        int minGiftsA = INT_MAX, minGiftsB = INT_MAX;

        for (int i = 0; i < numberOfGifts; i++) {
            cin >> giftsA[i];
            minGiftsA = min(minGiftsA, giftsA[i]);
        }

        for (int i = 0; i < numberOfGifts; i++) {
            cin >> giftsB[i];
            minGiftsB = min(minGiftsB, giftsB[i]);
        }

        long long int totalMoves = 0;
        
        for (int i = 0; i < numberOfGifts; i++) {
            int movesA = giftsA[i] - minGiftsA;
            int movesB = giftsB[i] - minGiftsB;
            totalMoves += max(movesA, movesB);
        }

        cout << totalMoves << endl;
    }
    
    return 0;
}