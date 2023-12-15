#include <bits/stdc++.h>

using namespace std;

int main() {
    int friends, daysUntilBirthday, today;
    cin >> friends >> daysUntilBirthday >> today;

    int quarantine[friends], makeItToTheParty = 0;
    for (int i = 0; i < friends; ++i) {
        cin >> quarantine[i];
    }

    for (int i = 0; i < friends; ++i) {
        if (quarantine[i] + 14 <= today + daysUntilBirthday) {
            makeItToTheParty++;
        }
    }

    cout << makeItToTheParty << endl;

    return 0;
}