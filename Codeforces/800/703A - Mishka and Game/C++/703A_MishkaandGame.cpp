#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    int mishkaWins = 0;
    int chrisWins = 0;

    while (testCases--) {
        int mishka, chris;
        cin >> mishka >> chris;

        if (mishka > chris) mishkaWins++;
        else if (chris > mishka) chrisWins++;
    }

    if (mishkaWins > chrisWins) cout << "Mishka" << endl;
    else if (chrisWins > mishkaWins) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;

    return 0;
}