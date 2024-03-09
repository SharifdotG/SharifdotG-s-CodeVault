#include <bits/stdc++.h>

using namespace std;

int main() {
    int leavesHouseTime, firstClassTime, transitRoutes;
    cin >> leavesHouseTime >> firstClassTime >> transitRoutes;

    int timeTakesToWalk[transitRoutes + 1];
    for (int i = 0; i < transitRoutes + 1; i++) {
        cin >> timeTakesToWalk[i];
    }

    int timeYraglacRides[transitRoutes];
    for (int i = 0; i < transitRoutes; i++) {
        cin >> timeYraglacRides[i];
    }

    int busIntervals[transitRoutes];
    for (int i = 0; i < transitRoutes; i++) {
        cin >> busIntervals[i];
    }

    int i = 0;
    while (i < transitRoutes) {
        leavesHouseTime += timeTakesToWalk[i];

        int timeUntilNextBus = leavesHouseTime % busIntervals[i];

        if (timeUntilNextBus != 0) {
            timeUntilNextBus = busIntervals[i] - timeUntilNextBus;
        }

        leavesHouseTime += timeUntilNextBus;
        leavesHouseTime += timeYraglacRides[i];

        i++;
    }

    leavesHouseTime += timeTakesToWalk[i];

    if (leavesHouseTime <= firstClassTime) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
