#include <bits/stdc++.h>

using namespace std;

int main() {
    int groups;
    cin >> groups;

    int groupSizes[4] = {0, 0, 0, 0};
    
    for (int i = 0; i < groups; i++) {
        int groupSize;
        cin >> groupSize;

        groupSizes[groupSize - 1]++;
    }

    int taxis = groupSizes[3] + groupSizes[2] + groupSizes[1] / 2;
    groupSizes[0] -= groupSizes[2];

    if (groupSizes[1] % 2 == 1) {
        taxis++;
        groupSizes[0] -= 2;
    }

    if (groupSizes[0] > 0) {
        taxis += groupSizes[0] / 4;

        if (groupSizes[0] % 4 > 0) taxis++;
    }

    cout << taxis << endl;
    
    return 0;
}