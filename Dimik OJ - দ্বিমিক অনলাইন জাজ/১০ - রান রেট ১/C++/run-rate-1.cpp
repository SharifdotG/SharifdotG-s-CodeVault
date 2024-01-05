#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int totalRun, currentRun, ballsLeft;
        cin >> totalRun >> currentRun >> ballsLeft;

        double currentRunRate = (double) currentRun / ((300 - ballsLeft) / 6.0);
        
        if (currentRun > totalRun) {
            cout << setprecision(2) << fixed << currentRunRate << " " << 0.00 << endl;
        } else {
            double requiredRunRate = ((double) totalRun - currentRun + 1) / (ballsLeft / 6.0);
            cout << setprecision(2) << fixed << currentRunRate << " " << requiredRunRate << endl;
        }
    }
    
    return 0;
}