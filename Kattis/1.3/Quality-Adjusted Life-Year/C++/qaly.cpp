#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfDataSets;
    cin >> numberOfDataSets;

    double qualityAdjustedLifeYear = 0;

    for (int i = 0; i < numberOfDataSets; i++) {
        double qualityOfLife, years;
        cin >> qualityOfLife >> years;

        qualityAdjustedLifeYear += qualityOfLife * years;
    }

    cout << qualityAdjustedLifeYear << endl;

    return 0;
}