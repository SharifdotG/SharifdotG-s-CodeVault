#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, totalPoints, numberOfTestCases;
    cin >> testCases;

    while (testCases--) {
        cin >> totalPoints >> numberOfTestCases;
        cout << (totalPoints / 10) * numberOfTestCases << endl;
    }
    
    return 0;
}