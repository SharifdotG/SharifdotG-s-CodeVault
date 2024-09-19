#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        long long int black, white, blackCost, whiteCost, conversionCost;
        cin >> black >> white >> blackCost >> whiteCost >> conversionCost;

        long long int totalCost = 0;
        if (blackCost > whiteCost + conversionCost) {
            totalCost = white * whiteCost + black * (whiteCost + conversionCost);
        } else if (whiteCost > blackCost + conversionCost) {
            totalCost = black * blackCost + white * (blackCost + conversionCost);
        } else {
            totalCost = black * blackCost + white * whiteCost;
        }

        cout << totalCost << endl;
    }

    return 0;
}