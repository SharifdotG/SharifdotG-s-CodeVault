#include <bits/stdc++.h>

using namespace std;

int main() {
    int highJumps, currentRecord, previousRecord;
    cin >> highJumps >> currentRecord >> previousRecord;

    int heights[highJumps];
    for (int i = 0; i < highJumps; i++) {
        cin >> heights[i];
    }

    int newRecords = 0;
    for (int i = 0; i < highJumps; i++) {
        if (heights[i] > currentRecord + previousRecord) {
            newRecords++;

            previousRecord = currentRecord;
            currentRecord = heights[i];
        } else if (heights[i] > currentRecord) {
            previousRecord = currentRecord;
            currentRecord = heights[i];
        } else if (heights[i] > previousRecord) {
            previousRecord = heights[i];
        }
    }

    cout << newRecords << endl;

    return 0;
}