#include <bits/stdc++.h>

using namespace std;

int main() {
    int opponentHotels;
    cin >> opponentHotels;

    int dicePattern[13] = {0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    float diceSum = 0;

    for (int i = 0; i < opponentHotels; i++) {
        int hotelDistance;
        cin >> hotelDistance;

        diceSum += dicePattern[hotelDistance];
    }

    cout << diceSum / 36 << endl;

    return 0;
}