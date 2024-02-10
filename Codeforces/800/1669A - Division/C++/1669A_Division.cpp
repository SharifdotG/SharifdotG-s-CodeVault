#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int rating;
        cin >> rating;

        if (rating >= 1900) cout << "Division 1" << endl;
        else if (rating >= 1600 && rating < 1900) cout << "Division 2" << endl;
        else if (rating >= 1400 && rating < 1600) cout << "Division 3" << endl;
        else cout << "Division 4" << endl;
    }

    return 0;
}