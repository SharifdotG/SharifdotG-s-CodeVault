#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, startingHours, endingHours;
    cin >> testCases;

    while (testCases--) {
        cin >> startingHours >> endingHours;
        cout << endingHours - startingHours << endl;
    }
    
    return 0;
}