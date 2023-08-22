#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, givenTreats, supposeToGiveTreats, event, i = 1;

    while (cin >> testCases && testCases != 0) {
        givenTreats = supposeToGiveTreats = 0;

        while (testCases--) {
            cin >> event;

            if (event == 0) {
                givenTreats++;
            } else {
                supposeToGiveTreats++;
            }
        }

        cout << "Case " << i << ": " << supposeToGiveTreats - givenTreats << endl;

        i++;
    }
    
    return 0;
}