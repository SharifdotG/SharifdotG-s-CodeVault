#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfEvents;
    cin >> numberOfEvents;

    set<int> days;

    for (int i = 0; i < numberOfEvents; i++) {
        int start, end;
        cin >> start >> end;

        for (int j = start; j <= end; j++) {
            days.insert(j);
        }
    }

    cout << days.size() << endl;

    return 0;
}
