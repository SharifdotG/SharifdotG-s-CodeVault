#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfDays;
    cin >> numberOfDays;

    long long spaceJunks[numberOfDays];
    for (int i = 0; i < numberOfDays; i++) {
        cin >> spaceJunks[i];
    }

    unordered_set<long long> spaceJunksSet(spaceJunks, spaceJunks + numberOfDays);

    long long minSpaceJunk = *min_element(spaceJunks, spaceJunks + numberOfDays);

    for (int i = 0; i < numberOfDays; i++) {
        if (spaceJunks[i] == minSpaceJunk) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
