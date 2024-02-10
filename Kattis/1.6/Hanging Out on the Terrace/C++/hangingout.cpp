#include <bits/stdc++.h>

using namespace std;

int main() {
    int limit, events;
    cin >> limit >> events;

    int currentPeople = 0;
    int deniedPeople = 0;

    for (int i = 0; i < events; i++) {
        string eventWord;
        int people;
        cin >> eventWord >> people;

        if (eventWord == "enter") {
            if (currentPeople + people > limit) deniedPeople++;
            else currentPeople += people;
        } else currentPeople -= people;
    }

    cout << deniedPeople << endl;

    return 0;
}