#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int totalRun, currentRun, ballsLeft;
        cin >> totalRun >> currentRun >> ballsLeft;

        double currentRunRate = (double) currentRun / ((300 - ballsLeft) / 6.0);
        double requiredRunRate = ((double) totalRun - currentRun + 1) / ((300 - ballsLeft) / 6.0);

        cout << fixed << setprecision(2) << currentRunRate << " " << requiredRunRate << endl;
    }
    
    return 0;
}